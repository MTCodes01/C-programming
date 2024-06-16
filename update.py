import re, math

def calculate_progress(markdown_text):
    items = re.findall(r'- \[.\]', markdown_text)
    total_items = len(items)
    completed_items = len([item for item in items if item == '- [x]'])
    if total_items == 0:
        return 0
    progress_percentage = (completed_items / total_items) * 100
    return math.ceil(progress_percentage)

def update_progress_url():
    with open("README.md", "r") as fh:
        base_url = fh.readline()
        markdown_text = fh.read()
        progress = calculate_progress(markdown_text)
        new_url = re.sub(r'progress/\d+', f'progress/{progress}', base_url)
        update(markdown_text, new_url)

def update(markdown_text, new_url):
    with open("README.md", "w") as fh2:
        fh2.write(new_url)
        fh2.flush()
        fh2.write(markdown_text)

update_progress_url()