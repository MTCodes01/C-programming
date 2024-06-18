
# You can either run the script directly from here,
# or go to `Start here.py` file for running it through a simple UI.

"""
IMPORTANT: If you run this file all the marked topics will get unmarked

This script reads a README.md file, finds all marked topics (indicated by '- [x]'),
and changes them to unmarked (indicated by '- [ ]'). It then writes the modified content 
back to the same file.

Usage:
1. Place this script in the same directory as your README.md file.
2. Run the script. It will modify the README.md file in place, changing all '- [x]' to '- [ ]'.

Requirements:
- Python 3.x
- The 're' module (regular expressions) is part of the standard library.
- The 'update' module is imported but not used directly in this script cuz its already used in that file. Ensure you have it!
"""

import re

input_file_path = './README.md'
output_file_path = './README.md'

with open(input_file_path, 'r') as file:
    readme_content = file.read()

modified_content = re.sub(r'- \[x\]', '- [ ]', readme_content)
empty_items = re.findall(r'- \[ \]', readme_content)
filled_items = re.findall(r'- \[x\]', readme_content)

with open(output_file_path, 'w') as file:
    file.write(modified_content)
import update
print(f"Cleared {len(filled_items)} out of {len(filled_items + empty_items)} Topics!")
print("--EXITED--")