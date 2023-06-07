# Calculate evrything
# Tasks:
print("How much did I do of these things?: ")
PYTHON = int(input("python?: "))
writing = int(input("writing?: "))
SM_IR = int(input("sm?: "))
journal = int(input("journal?: "))
linux = int(input("linux?: "))
philosophy = int(input("philosophy?: "))
recap = int(input("recall of all learning?: "))
final_journal = int(input("final journal?: "))

# Math
total = PYTHON + writing + SM_IR + journal + linux + philosophy + recap + final_journal
print("I did a total of", round(total/60), "hrs of work.")
