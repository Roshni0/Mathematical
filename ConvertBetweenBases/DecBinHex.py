def binToDec():
  a = input("input a binary number: ")
  dlst = list(a)
  binaryNum = 1
  binaryLst = []
  for i in range(100):
    binaryLst.append(binaryNum)
    binaryNum = binaryNum * 2
  result = 0
  if len(dlst) < 2:
    result = dlst[0]
  else:
    for i in range(len(dlst)):
      result = result + int(dlst[i]) * binaryLst[len(dlst)-i-1]
  print("Dec: ",result)
def binToHex():
  a = input("input a binary number(4 digit max): ")
  dlst = list(a)
  result = int(a[0]) * 8 + int(a[1]) * 4 + int(a[2]) * 2 + int(a[3]) * 1
  hexlst = ["NA","A","B","C","D","E","F"]
  if result > 9:
    result = hexlst[result-9]
  print("hex: " + str(result))
def decToBin():
  number = int(input("please enter a number: "))
  r = 1
  ans = 1
  result = []
  ans = number
  while int(ans) > 0:
    r = ans % 2
    ans = ans / 2
    # print("r: " , int(r))
    # print("q: ", int(ans))
    result.insert(0,int(r))
  res = ''.join([str(i) for i in result])
  print("Bin ",res)
def decToHex():
  data = input("input decimal value: ")
  result = str(hex(int(data)))
  print("Hex ",result)
def hexToDec():
  a = input("Please input a hex sequence: ")
  sequenceLst = list(a)
  hexLst = {
  "0":0,
  "1":1,
  "2":2,
  "3":3,
  "4":4,
  "5":5,
  "6":6,
  "7":7,
  "8":8,
  "9":9,
  "A":10,
  "B":11,
  "C":12,
  "D":13,
  "E":14,
  "F":15
  }
  result = 0
  for i in range(len(sequenceLst)):
    result += hexLst[sequenceLst[i]] * (16 ** (len(sequenceLst)-i-1))
    # print("debug: " + str(len(sequenceLst)-i-1))
  print("Dec ",str(result))
def convertToBinary(num):
  r = 1
  ans = 1
  result = []
  ans = num
  while int(ans) > 0:
    r = ans % 2
    ans = ans / 2
    # print(int(r))
    result.insert(0,int(r))
  res = ''.join([str(i) for i in result])
  # make sure it is 4 bit
  zero = ""
  if len(res) < 4:
    for i in range(4-len(res)):
      zero += "0"
  return zero + res
def hexToBin():
  a = input("please input hex value (do not include 0x): ")
  hexVal = {
    "A":10,
    "B":11,
    "C":12,
    "D":13,
    "E":14,
    "F":15
  }
  finalResult = ''
  for i in range(len(a)):
    num = 0
    if a[i].isnumeric():
      num = int(a[i])
    else:
      num = hexVal[a[i]]
    finalResult += str(convertToBinary(num))
  print("Bin: ", finalResult)

choice=int(input("""What do you want to convert:
1. Binary ->> Decimal
2. Binary ->> Hexadecimal
3. Decimal ->> Binary
4. Decimal ->> Hexadecimal
5. Hexadecimal ->> Binary
6. Hexadecimal ->> Decimal
(1/2/3/4/5/6)"""))
if choice == 1:
  binToDec()
elif choice == 2:
  binToHex()
elif choice == 3:
  decToBin()
elif choice == 4:
  decToHex()
elif choice == 5:
  hexToBin()
elif choice == 6:
  hexToDec()
else:
  print("invalid choice")
