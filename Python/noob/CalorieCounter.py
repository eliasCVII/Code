burger = input()
side = input()
drink = input()
dessert = input()
#Burger Choice
for burger_type in burger:
  if burger_type == '1':
    burger_calorie = 461
for burger_type in burger:
  if burger_type == '2':
    burger_calorie = 431

for burger_type in burger:
  if burger_type == '3':
    burger_calorie = 420

for burger_type in burger:
  if burger_type == '4':
    burger_calorie = 0

# Side Choice
for side_type in side:
  if side_type == '1':
    side_calorie = 100

for side_type in side:
  if side_type == '2':
    side_calorie = 57

for side_type in side:
  if side_type == '3':
    side_calorie = 70

for side_type in side:
  if side_type == '4':
    side_calorie = 0

# Drink Choice
for drink_type in drink:
  if drink_type == '1':
    drink_calorie = 130

for drink_type in drink:
  if drink_type == '2':
    drink_calorie = 160

for drink_type in drink:
  if drink_type == '3':
    drink_calorie = 118

for drink_type in drink:
  if drink_type == '4':
    drink_calorie = 0

# Dessert Choice
for dessert_type in dessert:
  if dessert_type == '1':
    dessert_calorie = 167

for dessert_type in dessert:
  if dessert_type == '2':
    dessert_calorie = 266

for dessert_type in dessert:
  if dessert_type == '3':
    dessert_calorie = 75

for dessert_type in dessert:
  if dessert_type == '4':
    dessert_calorie = 0

total_calories = burger_calorie + side_calorie + drink_calorie + dessert_calorie

print("Your total Calorie count is " +  str(total_calories) + '.')
