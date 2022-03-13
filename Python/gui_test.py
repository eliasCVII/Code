import PySimpleGUI as sg

layout = [[sg.Text("Hello from PySimpleGUI")], [sg.Button("OK")]]

# create a Window
window = sg.Window("NIGGA", layout, margins=(100, 50))

# Event Loop
while True:
    event, values = window.read()
    # end program if user closes or click OK
    if event == "OK" or event == sg.WIN_CLOSED:
        break
window.close()