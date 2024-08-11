#title: program untuk cetak X abc
h = 0
i = 0
k = int(input('Masukkan angka: '))
j = k-1
l = ["A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"]
for row in range(k):
  for col in range(k):
    if row == i and col == j:
      print(l[h],end='')
      i += 1
      j = j-1
      h += 1
    elif(row == col):
      print(l[h],end='')
      h += 1
    else:
      print(' ',end='')
  print()