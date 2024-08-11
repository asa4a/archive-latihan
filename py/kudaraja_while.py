#title: mencari keamanan raja dari kuda -while

#fungsi gerak kuda
def atasKanan(x,y):
  return [x+1, y+2]
def atasKiri(x,y):
  return [x-1, y+2]
def kananAtas(x,y):
  return [x+2, y+1]
def kiriAtas(x,y):
  return [x-2, y+1]
def bawahKanan(x,y):
  return [x+1, y-2]
def bawahKiri(x,y):
  return [x-1, y-2]
def kananBawah(x,y):
  return [x+2, y-1]
def kiriBawah(x,y):
  return [x-2, y-1]

#cek koordinat gerak kuda = koordinat raja
def cekAman(x,y,r):
  if atasKanan(x,y) == r:
    return False
  elif atasKiri(x,y) == r:
    return False
  elif kananAtas(x,y) == r:
    return False
  elif kiriAtas(x,y) == r:
    return False
  elif bawahKanan(x,y) == r:
    return False
  elif bawahKiri(x,y) == r:
    return False
  elif kananBawah(x,y) == r:
    return False
  elif kiriBawah(x,y) == r:
    return False
  else:
    return True

#main
def cekRaja():
  m = int(input('Masukkan m: '))
  c = [[0 for a in range(m)] for b in range(m)]
  r = [0,0]
  aman = True
  for a in range(m):
    for b in range(m):
      c[a][b] = input('Masukkan elemen baris '+str(a+1)+' kolom '+str(b+1)+': ')
      if c[a][b] == 'R':
        r = [a,b]
  for a in range(m):
    for b in range(m):
      print(c[a][b],end=' ')
    print()
  a = 0
  while a < m and aman:
    b = 0
    while b < m and aman:
      if c[a][b] == 'K':
        aman = cekAman(a,b,r)
      b += 1
    a += 1
  if aman:
    print('Raja aman')
  else:
    print('Raja tidak aman')

#run
cekRaja()