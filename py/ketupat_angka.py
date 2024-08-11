#title: program untuk cetak belah ketupat - 1

s = int(input('Masukkan angka: '))
p = int((s+1)/2)
i = 1
for i in range(1,s-1):
  for a in range(i,p+1):
    print(' ',end='')
  for a in range(1,i*2):
    print(i,end='')
  print('')
for i in range(1,p):
  for a in range(1,i+2):
    print(' ',end='')
  for a in range(1,4//i):
    print(i+3,end='')
  print('')