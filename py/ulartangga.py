#ular tangga 2p
board = [['.' for i in range(5)] for j in range(5)]

def makeBoard():
  tmp = 1
  for i in range(5):
    for j in range(5):
      board[i][j] = tmp
      tmp += 1

def printBoard():
  for i in range(5):
    for j in range(5):
      if (i+1)%2 == 0:
        tmp = 4-j
      else: tmp = j
      print(board[abs(i-5)-1][tmp],end=' ')
    print()
  print()

def searchArr(pos,p):
  global board
  x = None
  y = None
  try:
    for i in range(5):
      x = board[i].index(p)
      if x != None:
        y = i
        break
  except ValueError:
    return None
  if pos == 'x':
    return x
  elif pos == 'y':
    return y

def movePlayer1(x,y):
  global pos1
  if pos1 > -1:
    xP = searchArr('x','p1')
    yP = searchArr('y','p1')
    xD = searchArr('x','p2p1')
    yD = searchArr('y','p2p1')
    if xD == None:
      board[xP][yP] = pos1
    else:
      board[xD][yD] = 'p2'
  else: pass
  if board[x][y] == 'p2':
    pos1 = pos2
    board[x][y] = 'p2p1'
  else:
    pos1 = board[x][y]
    board[x][y] = 'p1'

def movePlayer2(x,y):
  global pos2
  if pos2 > -1:
    xP = searchArr('x','p2')
    yP = searchArr('y','p2')
    if board[xP][yP] == 'p1p2':
      board[xP][yP] = 'p1'
    else:
      board[xP][yP] = pos2
  if board[x][y] == 'p1':
    pos2 = pos1
    board[x][y] = 'p1p2'
  else:
    board[x][y] = 'p2'


pos1 = -1
pos2 = -1
makeBoard()
movePlayer1(0,1)
printBoard()
movePlayer2(2,4)
printBoard()
movePlayer1(2,4)
printBoard()
movePlayer1(3,4)
printBoard()