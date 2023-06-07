#!/usr/bin/env python3
import random, os
path ='D:\pdfs\coding'
files = os.listdir(path)
index = random.randrange(0, len(files))
print(files[index])
