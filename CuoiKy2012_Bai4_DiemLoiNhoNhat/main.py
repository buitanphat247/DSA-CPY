import sys
sys.stdin = open("1.inp", "r")
sys.stdout = open("1.out", "w")

class SubNode:
    def __init__(self):
        self.value = float('inf')
        self.i = float('inf')
        self.j = float('inf')
        self.is_valid = False

def create_matrix(n, m, a):
    for i in range(1, n + 1):
        row = list(map(float, input().split()))
        for j in range(1, m + 1):
            a[i][j] = row[j - 1]

def handle(n, m, a, s):
    s.value = float('inf')
    s.i = float('inf')
    s.j = float('inf')
    for i in range(1, n + 1):
        for j in range(1, m + 1):
            top = a[i - 1][j]
            bottom = a[i + 1][j]
            left = a[i][j - 1]
            right = a[i][j + 1]
            if a[i][j] > top and a[i][j] > bottom and a[i][j] > left and a[i][j] > right:
                if a[i][j] < s.value:
                    s.value = a[i][j]
                    s.i = i - 1
                    s.j = j - 1
                    s.is_valid = True

def show_sub_node(s):
    if s.is_valid == True:
        print(int(s.i), int(s.j))
    else:
        print(-1)

def main():
    n, m = map(int, input().split())
    v = [[float('-inf')] * (m + 2) for _ in range(n + 2)]
    s = SubNode()
    create_matrix(n, m, v)
    handle(n, m, v, s)
    show_sub_node(s)

if __name__ == "__main__":
    main()
