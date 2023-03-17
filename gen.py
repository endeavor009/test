import string

a = [0 for i in range(10)]


if ( (index >= 48 && index < 57) && (index >= 65 && index < 90) && (index >= 97 && index <= 122) ):
  index += 1
elif (index == 57) :
  index = 65
elif (index == 90 ) :
  index = 97
elif (index == 122 ) :
  index = 48


a[0] = chr(48)
a[1] = chr(48)
a[2] = chr(48)
a[3] = chr(48)
a[4] = chr(48)
a[5] = chr(48)
a[6] = chr(48)
a[7] = chr(48)
a[8] = chr(48)
a[9] = chr(48)

while (True):
  a[9] = chr(index)
  if index

print(''.join(a))
