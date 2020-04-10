def binarySearch(listgiven,item):
	f = 0
	l = len(listgiven)-1
	found = False
	while(not found and f<=l):
		m=(f+l)//2
		if listgiven[m]==item :
			found=True
		else:
			if item>listgiven[m]:
				f=m+1
			else:
				l=m-1
	return found
list = list(map(int, input("Enter list (separate each element by a space: ").split()))
list.sort()
numb = int(input("What number are you looking for?"))
if (binarySearch(list, numb)):
  print("It is in the list")
else:
  print("It is not in the list")
