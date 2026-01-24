n = int(input())

def solve_backtrack(index, s):
    if index == n:
        print(s)
        return
    solve_backtrack(index + 1, s + "0")
    solve_backtrack(index + 1, s + "1")

solve_backtrack(0, "")

