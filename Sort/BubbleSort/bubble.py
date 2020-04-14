def bubbleSort(arr,l):
  for i in range(l):
    for j in range(0, l-i-1):
      if arr[j] > arr[j+1] :
        arr[j], arr[j+1] = arr[j+1], arr[j]
element=[]
element = list(map(int, input("Enter list of elements: ").split()))
n = len(element) 
bubbleSort(element,n)
print ("Sorted:") 
for i in range(n): 
  print ("%d" %element[i])
