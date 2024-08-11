#title: program mencari cara memilih siswa kombinasi

n = int(input('Masukkan jumlah seluruh siswa: '))
k = int(input('Masukkan jumlah siswa yang akan dipilih: '))

def fact(a):
  div = a
  while div > 1:
    div = div - 1
    a = a*div
  return a

def comb(a,b):
  comb = fact(a)//(fact(a-b)*fact(b))
  return comb

print("Guru Mis memiliki",comb(n,k),"cara untuk memilih siswa")