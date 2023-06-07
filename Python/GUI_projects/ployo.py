import json
from tarfile import LENGTH_NAME
from tkinter import *
import tkinter as tk

# Basic Algorithm
ttl_hrs = 13

def hour_calc():
    default_hours = ttl_hrs * 60 # get minutes
    a = 60
    b = 120
    c = 95
    lengtha = default_hours/(a+b+c)
    actlena = (lengtha * a)
    actlenb = (lengtha * b)
    actlenc = (lengtha * c)
    print(actlena, actlenb, actlenc, default_hours)