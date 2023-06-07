#import tkinter
import customtkinter

#customtkinter.set_appearance_mode("System")
#customtkinter.set_default_color_theme("blue")

app = customtkinter.CTk()
app.geometry("640x480")

def button_function():
  print('pressed')

button = customtkinter.CTkButton(master=app, text="Hello", command=button_function)
button.place(relx=0.5, rely=0.5, anchor=tkinter.CENTER)

app.mainloop()