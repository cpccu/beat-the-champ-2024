t = int(input())
target = "Timur"
target_sorted = ''.join(sorted(target))

for _ in range(t):
    n = int(input())
    s = input().strip()
    s_sorted = ''.join(sorted(s))
    if s_sorted == target_sorted:
        print("YES")
    else:
        print("NO")
