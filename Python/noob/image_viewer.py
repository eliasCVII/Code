#img_viewer.py
import os.path
import PySimpleGUI as sg

# window layout

file_list_column = [
    [
        sg.Text("Image Folder"),
        sg.In(size=(25, 1), enable_events=True, key="-FOLDER-"),
        sg.FolderBrowse(),
    ],
    [
        sg.Listbox(
            values=[], enable_events=True, size=(40,20), key="-FILE LIST-" #key is an identifier
        )
    ],
]

image_viewer_column = [
    [sg.Text("Choose an image from list on the left:")],
    [sg.Text(size=(40,1), key="-TOUT-")],
    [sg.Image(key="-IMAGE-")],
]

# Full layout

layout = [
    [
        sg.Column(file_list_column),
        sg.VerticalSeparator(),
        sg.Column(image_viewer_column),
    ]
]

window = sg.Window("Image Viewer", layout)

while True:
    event, values = window.read()
    if event == "Exit" or event == sg.WIN_CLOSED:
        break

# folder name was filled in, make a list of files inside the folder
if event == "-FOLDER-": # check the event against the -FOLDER- key
    folder = values["-FOLDER-"]
    try:
        # gets list of files in folder
        file_list = os.listdir(folder)
    except:
        file_list = []
    fnames = [
        # Checks if the files are .png or .gif
        f
        for f in file_list
        if os.path.isfile(os.path.join(folder, f)) # searches files in the specified folder
        and f.lower().endswith((".png", ".gif"))
    ]
    window["-FILE LIST-"].update(fnames)

elif event == "-FILE LIST-": # A file was chosen
    try:
        filename = os.path.join(
            values["-FOLDER-"], values["-FILE LIST"][0]
        )
        window["-TOUT-"].update(filename)
        window["-IMAGE-"].update(filename=filename)
    except:
        pass

window.close()
