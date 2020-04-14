def mergeSort(element,l,r): 
  if l < r: 
    m = (l+(r-1))//2
    mergeSort(element, l, m)
    mergeSort(element, m+1, r) 
    merge(element, l, m, r) 
def merge(element, l, m, r): 
  n1 = m - l + 1
  n2 = r- m 
  L = [0] * (n1) 
  R = [0] * (n2) 
  for i in range(0 , n1): 
    L[i] = element[l + i] 
  for j in range(0 , n2): 
    R[j] = element[m + 1 + j] 
  i = 0  
  j = 0  
  k = l  
  while i < n1 and j < n2 : 
    if L[i] <= R[j]: 
      element[k] = L[i] 
      i += 1
    else: 
        element[k] = R[j] 
        j += 1
    k += 1
  while i < n1: 
    element[k] = L[i] 
    i += 1
    k += 1 
  while j < n2: 
    element[k] = R[j] 
    j += 1
    k += 1
element=[]
element = list(map(int, input("Enter list of elements: ").split()))
n = len(element) 
mergeSort(element,0,n-1) 
print ("Sorted:") 
for i in range(n): 
  print ("%d" %element[i])
