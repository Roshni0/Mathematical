def draw_line(tick_length,tick_label=''):
  line='-'*tick_length
  if tick_label:
    line +=''+ tick_label
  print(line)
def draw_interval(center_length):
  if center_length>0:
    if center_length>0:
      draw_interval(center_length-1)
      draw_line(center_length)
      draw_interval(center_length-1)
def draw_ruler(num_inches, major_length):
  draw_line(major_length,'0')
  for j in range(1,1+num_inches):
    draw_interval(major_length-1)
    draw_line(major_length,str(j))
length=int(input("How long do you want?"))
numb=int(input("Number of increments in between"))
draw_ruler(length,numb+1)
