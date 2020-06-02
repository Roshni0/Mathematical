temp = input("Input the  temperature you like to convert? (e.g., 45F, 102C etc.) : ")
deg = int(temp[:-1])
initial = temp[-1]
if initial.upper() == "C":
  result = int(round((9 * deg) / 5 + 32))
  fin = "Fahrenheit"
elif initial.upper() == "F":
  result = int(round((deg - 32) * 5 / 9))
  fin = "Celsius"
else: 
  print("Input proper convention.")
  quit()
print("The temperature in", fin, "is", result, "degrees.")
