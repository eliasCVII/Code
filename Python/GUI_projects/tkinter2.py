import tkinter as tk
from tkinter import *
from tkinter import ttk

# Main Window config
root = Tk()
root.title('Ploy')
root.geometry('1000x480')
root.config(background="#282828")
# root.resizable(True, False) # y , x respectively

# App Icon
icon = PhotoImage(file='vinyl3disk.png')
root.iconphoto(True, icon)

# App contents
someshit = Label(
 root, # parent to child widget
 text="PLOY",
 font=("Ubuntu", 13),
 fg="#fbf1c7", bg="#282828",
 #relief=RAISED, bd=1
 )
#someshit.grid() # complex way of placing widgets
#someshit.place(x=0, y=0) # places widget with exact coordinates
someshit.pack(side=tk.LEFT) # places widget on center up top by default
content = ttk.Frame(root)
button = ttk.Button(content)

# Treeview
my_tree = ttk.Treeview(root)
my_tree['columns'] = ("Task", "Time", "ActLen")
# Formatting
#my_tree.column("#0", width=120, minwidth=25)
my_tree.column("Task", anchor=W, width=120)
my_tree.column("Time", anchor=CENTER, width=80)
my_tree.column("ActLen", anchor=W, width=120)
# Headings
#my_tree.heading("#0", text="Label", anchor=W)
my_tree.heading("Task", text="Task", anchor=W)
my_tree.heading("Time", text="Time", anchor=CENTER)
my_tree.heading("ActLen", text="ActLen", anchor=W)
# Data
my_tree.insert(parent='', index='end', iid=0, values=("PREU", '60', '80'))
nigga = "Hi"
my_tree.insert(parent='', index='end', iid=1, text="lol", values=(nigga, '60', '80'))

# Pack
my_tree.pack(pady=20)


root.mainloop()