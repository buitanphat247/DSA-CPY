import math

from orca.debug import println

rows,cols = map(int,input().split())

matrix = []
results = [[0]*cols for _ in range(rows)]
answer = -1e9

for _ in range(rows):
    matrix.append(list(map(int,input().split())))

for row in range(rows):
    results[row][0] = matrix[row][0]

for col in range(1,cols):
    for row in range(rows):
        if row ==0:
            results[row][col] = max(results[row][col-1],matrix[row+1][col-1])
        if row!=0 and row!=rows-1:
            results[row][col] = max({results[row][col-1],results[row+1][col-1],results[row-1][col-1]})
        if row==rows-1:
            results[row][col]=max(results[row][col-1],results[row-1][col-1])
        results[row][col]+=matrix[row][col]

for row in range(rows):
    answer = max(answer,results[row][cols-1])

print(answer)