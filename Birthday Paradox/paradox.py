days = 365
not_sharing = 1
maxi = 0
mini = 0.5
for i in range(1, days):
  probability = i / days
  not_sharing *= (1 - probability)
  share = 1 - not_sharing
  print ("{0} - {1:.16f}".format(i+1, share))
  if share > maxi:
    maxi=share
    maxCount=i+1
  if share < mini:
    mini = share
    minCount = i+1
print("--DATA--")
print("On day ",maxCount, " probability was greatest, at ",maxi)
print("On day ",minCount, " probability was least, at ",mini)
