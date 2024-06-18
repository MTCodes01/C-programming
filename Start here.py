"""
Repository Tutorial UI

This script provides a graphical user interface (GUI) for managing and updating the progress 
of a repository tutorial checklist. It uses the tkinter library for the UI and interacts with 
two other scripts: `update.py` and `clear_checklist.py` which are not built-in, made just for this!.

Functionality:
1. Update Progress: Calculates the completion percentage of tasks in the README.md file and updates 
   the progress bar URL.
2. Clear Checklist: Resets all completed tasks in the README.md file to uncompleted.

Requirements:
- Python 3.x
- `tkinter` library (comes pre-installed with Python)
- `update.py` script (handles progress calculation and updating the progress bar URL)
- `clear_checklist.py` script (resets all completed tasks to uncompleted)
- `README.md` file with a progress bar URL in the format `progress/xy` where `xy` is the percentage.

Files:
- Start here.py: This script (the main UI).
- update.py: Script for updating progress.
- clear_checklist.py: Script for clearing the checklist.
- README.md: The markdown file with the checklist and progress bar.

Usage:
1. Ensure all the necessary files (ui.py, update.py, clear_checklist.py, and README.md) are in the 
   same directory.
2. Run this script (`ui.py`) to start the graphical interface:
   ```sh
   python ui.py
3. The main window will show the current progress and provide buttons to update the progress or
clear the checklist.

Functions:
- update_progress(): Runs update.py to update the progress percentage in the README.md file.
- clear_checklist(): Runs clear_checklist.py to reset all completed tasks to uncompleted in the README.md file.
- read_progress(): Reads the current progress percentage from the README.md file.
- refresh_progress(): Updates the displayed progress percentage every 5 seconds.

GUI Elements:
A label displaying the current progress percentage.
A button to update the progress.
A button to clear the checklist.
"""



import tkinter as tk
from tkinter import messagebox
import subprocess, re

def update_progress():
    try:
        subprocess.run(["python", "update.py"], check=True)
        messagebox.showinfo("Success", "Progress updated successfully!")
    except subprocess.CalledProcessError:
        messagebox.showerror("Error", "Failed to update progress.")

def clear_checklist():
    if messagebox.askyesno("Confirm", "Are you sure you want to clear the checklist?"):
        try:
            subprocess.run(["python", "clear_checklist.py"], check=True)
            messagebox.showinfo("Success", "Checklist cleared successfully!")
        except subprocess.CalledProcessError:
            messagebox.showerror("Error", "Failed to clear checklist.")

def read_progress():
    with open("README.md", "r") as file:
        first_line = file.readline()
    progress = re.search(r'progress/(\d+)', first_line)
    return progress.group(1) if progress else "0"

app = tk.Tk()
app.title("Repository Tutorial UI")
app.geometry("300x200")

progress_label = tk.Label(app, text="Current Progress: " + read_progress() + "%")
progress_label.pack(pady=10)

update_button = tk.Button(app, text="Update Progress", command=update_progress)
update_button.pack(pady=10)

clear_button = tk.Button(app, text="Clear Checklist", command=clear_checklist)
clear_button.pack(pady=10)

def refresh_progress():
    progress_label.config(text="Current Progress: " + read_progress() + "%")
    app.after(5000, refresh_progress)  # Refresh every 5 seconds

refresh_progress()
app.mainloop()
