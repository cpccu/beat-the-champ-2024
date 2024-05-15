def is_correct_spelling(s):
    if s.count('T') == 1 and s.count('T') + s.count('t') == len(s):
        return "YES"
    else:
        return "NO"

# Reading the number of test cases
t = int(input())

# Loop through each test case
for _ in range(t):
    n = int(input())
    s = input()
    result = is_correct_spelling(s)
    print(result)
