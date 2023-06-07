# Input the hour that i woke up at
import random

def main():
     while True:
#Main hour system
        print("\nWhat time is it now: ")
        time_now = float(input())
        eve_left = round(23.00 - time_now)
        print(f"\n{eve_left} hr left till sleep." )

        # energy shit
        todos = ('C', 'nothing', 'SM IR', 'Python', 'Writing', 'Philosophy',
                 'VIM', 'linux', 'math with python', 'math', 'IW SM', 'just think')
        energy = int(input("energy? 1-2: "))
        length = [5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60]
        if energy == 1:
            tasks = int(len(todos)/3)
            task_todo = random.sample(todos, tasks)
            length_now = (random.choice(length) * tasks) / tasks
            # final calculation
            min_per_task =  round(length_now)
            print("\nThese are your tasks: ", len(task_todo), "tasks -", min_per_task, "minutes per task.")
            print(task_todo)
            more_less = str(input("more or less? (+) or (-): "))
            if more_less == '+':
                 min_per_task = round(min_per_task * 1.25)
                 print(min_per_task, "minutes per task")
            elif more_less == '-':
                 min_per_task = round(min_per_task / 1.25)
                 print(min_per_task, "minutes per task")
            else:
                 try_again = input("quit?: (y) or (n) ")
                 if try_again == 'y':
                      break
        elif energy == 2:
            tasks = int(len(todos)/2)
            task_todo = random.sample(todos, tasks)
            length_now = (random.choice(length) * tasks)
            min_per_task =  round(length_now / tasks)
            print("\nThese are your tasks: ", len(task_todo), "tasks -", min_per_task, "minutes per task.")
            print(task_todo)
            more_less = str(input("more or less? (+) or (-): "))
            if more_less == '+':
                 min_per_task = round(min_per_task * 1.25)
                 print(min_per_task, "minutes per task")
            elif more_less == '-':
                 min_per_task = round(min_per_task / 1.25)
                 print(min_per_task, "minutes per task")
            else:
                 try_again = input("quit?: (y) or (n) ")
                 if try_again == 'y':
                      break

# ending command
        try_again = input("quit?: (y) or (n) ")
        if try_again == 'y':
            break
main()
