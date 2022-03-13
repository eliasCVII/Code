import textstat 

print ("When you are done with your explanation, write out '$$$' (no quotes) on a new line to tell the program that you are finished. It will then evaluate it and give you a school grade!")
buffer = [] # This multiline idea was taken from a user called "Amber"
while True: # Source: https://stackoverflow.com/questions/13128951/how-to-get-user-input-for-multiline-lines-in-python-3
    print("> ", end="")
    line = input()
    if line == "$$$":
        break
    buffer.append(line)
multiline_string = "\n".join(buffer)
grade = textstat.text_standard(multiline_string)
print (grade)
