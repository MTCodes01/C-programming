
# You can either run the script directly from here,
# or go to `Start here.py` file for running it through a simple UI.

"""
This script updates a progress bar URL in the README.md file based on the completed topics.

The script calculates the progress percentage by counting the completed topics (indicated by '- [x]')
and the total topics (indicated by '- [ ]' or '- [x]'). It then updates the URL in the README.md file
to reflect the new progress percentage.

Usage:
1. Place this script in the same directory as your README.md file.
2. Ensure the first line of the README.md file contains the progress bar URL in the format 'progress/xy' where xy is the percentage.
3. Run the script. It will update the progress percentage in the URL based on the completed topics.

Functions:
- calculate_progress(markdown_text): Calculates the progress percentage based on the completed topics.
- update_progress_url(): Reads the README.md file, calculates the progress, and updates the progress bar URL.
- update(markdown_text, new_url): Writes the updated progress bar URL and the original markdown content back to the README.md file.

Requirements:
- Python 3.x
- The 're' module (regular expressions) is part of the standard library.
- The 'math' module is part of the standard library.
"""
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
        print(f"Progress: {progress} %")
        new_url = re.sub(r'progress/\d+', f'progress/{progress}', base_url)
        update(markdown_text, new_url)

def update(markdown_text, new_url):
    with open("README.md", "w") as fh2:
        fh2.write(new_url)
        fh2.flush()
        fh2.write(markdown_text)

update_progress_url()