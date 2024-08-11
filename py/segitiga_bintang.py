#title: program untuk cetak bintang segitiga

#s = int(input('Masukkan angka: '))

s = 4

for i in range(1,s+1):
  for a in range(i,s+1):
    print(' ',end='')
  for a in range(1,i*2):
    print('*', end='')
  print('')