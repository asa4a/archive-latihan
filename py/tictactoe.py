##bikin pembatas
board = [['.' for i in range(3)] for j in range(3)]

#Print Board method
def printBoard():
  for i in range(3):
    print('|', end='')
    for j in range(3):
      if board[i][j] == '.':
        print('', end=' |')
      else:
        print(board[i][j], end='|')
    print()

#Player entity
p1 = ['.' for i in range(9)]
p2 = ['.' for i in range(9)]

#Player input
def playerInput():
  printBoard()
  i = 0
  while checkFull() == False and checkWin() == '.':
    state = False
    if i % 2 == 0:
      while state == False:
        p1[i] = input("Masukkan bidak Player 1 (x, y)")
        state = inputChecker(p1[i], 'x')
    else:
      while state == False:
        p2[i] = input("Masukkan bidak Player 2 (x, y)")
        state = inputChecker(p2[i], 'o')
    i += 1
    printBoard()
  if checkFull():
    print("Game berakhir seri")
  if checkWin() == 'x':
    print("Player 1 menang!")
  elif checkWin() == 'o':
    print("Player 2 menang!")

def inputChecker(a, b):
  if (a == '3, 1') and (board[2][0] == '.'):
    board[2][0] = b
    return True
  if (a == '3, 2') and (board[2][1] == '.'):
    board[2][1] = b
    return True
  if (a == '3, 3') and (board[2][2] == '.'):
    board[2][2] = b
    return True
  if (a == '2, 1') and (board[1][0] == '.'):
    board[1][0] = b
    return True
  if (a == '2, 2') and (board[1][1] == '.'):
    board[1][1] = b
    return True
  if (a == '2, 3') and (board[1][2] == '.'):
    board[1][2] = b
    return True
  if (a == '1, 1') and (board[0][0] == '.'):
    board[0][0] = b
    return True
  if (a == '1, 2') and (board[0][1] == '.'):
    board[0][1] = b
    return True
  if (a == '1, 3') and (board[0][2] == '.'):
    board[0][2] = b
    return True
  return False

def checkWin():
  for i in range(3):
    if (board[i][0] == board[i][1] == board[i][2]) and (board[i][0] != '.'):
      return board[i][0]
  for j in range(3):
    if (board[j][0] == board[j][1] == board[j][2]) and (board[j][0] != '.'):
      return board[0][j]
  if (board[0][0] == board[1][1] == board[2][2]) and (board[1][1] != '.'):
    return board[1][1]
  if (board[0][2] == board[1][1] == board[2][0]) and (board[1][1] != '.'):
    return board[1][1]
  return '.'

def checkFull():
  for i in range(3):
    for j in range(3):
      if board[i][j] == '.':
        return False
  return True

playerInput()