#title: program untuk cetak belah ketupat -star

h = int(input('Masukkan angka: '))
i = (h+1)//2
row = 1
for row in range(1,i):
  for col in range(row,i+1):
    print(' ',end='')
  for col in range(1,row*2):
    print('*',end='')
  print('')
for row in range(i):
  for col in range(row+1):
    print(' ',end='')
  for col in range(2*(i-row)-1):
    print('*',end='')
  print('')