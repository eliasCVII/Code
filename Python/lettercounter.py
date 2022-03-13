# Comment

def letter_counter():
  print("Welcome to the Letter Counter shit scrip!")
  name = input("\nWhat's your name?: ")
  welcome = f"Hello, {name.title().strip()}"
  print(welcome)
  user_text = input("Type in your text here: ")
  count_letter = input("What letter to count?: ")
  x_count = user_text.count(count_letter)
  print(f"There are {x_count} {count_letter}'s in that message")

def mph_mps():
    print("\nWelcome to MPH to MPS converter")
    # User input
    mph = float(input("\nWhats the speed in mph: "))
    # Conversion
    mps = round(mph *0.4474, 2)
    print(f"\nThe mph in mps is {mps}.")
mph_mps()
