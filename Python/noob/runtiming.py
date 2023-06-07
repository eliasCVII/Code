def run_timing():
    runs = 0
    total_time = 0
    while True:
        one_run = input("Enter 10km time: ")
        if not one_run:
            break
        runs += 1
        total_time += float(one_run)
    average_time = round(total_time / runs, 2)
    print(f"The total time was: {total_time}")
    print(f"Average: {average_time}")


run_timing()