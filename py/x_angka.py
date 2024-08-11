#title: program untuk cetak X
h = 1
i = 0
k = int(input('Masukkan angka: '))
j = k-1
if k < 6:
  for row in range(k):
    for col in range(k):
      if row == i and col == j:
        print(h,end='')
        i += 1
        j = j-1
        h += 1
      elif(row == col):
        print(h,end='')
        h += 1
      else:
        print(' ',end='')
    print()
else:
  print('error')