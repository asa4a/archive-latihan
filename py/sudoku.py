#sudoku

board = [['_' for i in range(3)] for j in range(3)]
#board = [[1,2,3],[3,2,1],[3,1,2]]

def printBoard():
  for i in range(3):
    for j in range(3):
      if j == 0:
        print('|'+str(board[i][j]),end='|')
      else:
        print(board[i][j],end='|')
    print()

def checkH(a,b):
  for i in range(3):
    if (board[a][i] == board[a][b]) and (i != b):
      return True
  return False

def checkV(a,b):
  for i in range(3):
    if (board[i][b] == board[a][b]) and (i != a):
      return True
  return False

def randomBoard():
  for i in range(3):
    a = random.randint(0,2)
    b = random.randint(0,2)
    board[a][b] = i+1

def replace(a,b,n):
  if checkNum(a,b) == True:
    board[a][b] = n
    v = checkV(a,b)
    h = checkH(a,b)
    if (v == True) or (h == True):
      print('Your number is incorrect.')
    else:
      printBoard()
  else:
    print('You already filled this position.')

def translatePos(pos):
  #format [a, b], a = row, b = column
  if pos == 7: return [0,2]
  elif pos == 8: return [1,2]
  elif pos == 9: return [2,2]
  elif pos == 4: return [0,1]
  elif pos == 5: return [1,1]
  elif pos == 6: return [2,1]
  elif pos == 1: return [0,0]
  elif pos == 2: return [1,0]
  elif pos == 3: return [2,0]

def checkWin():
  for i in range(3):
    for j in range(3):
      if board[i][j] == '_':
        return False
  return True

def checkNum(a,b):
  if board[a][b] == '_':
    return True
  return False

randomBoard()
printBoard()
win = False
while win == False:
  userPos = int(input('Input the position (1-9): '))
  if userPos < 1 or userPos > 9:
    raise ValueError("Please input number 1 to 9.")
  userNum = int(input('Input the number (1-3): '))
  if userNum < 1 or userNum > 3:
    raise ValueError("Please input number 1 to 3.")
  transPos = translatePos(userPos)
  replace(transPos[1],transPos[0],userNum)
  if checkWin() == True:
    break
print('You win.')