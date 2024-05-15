t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    operations = 0

    i = 0
    while i < n + operations:
        if i < len(a) and a[i] > i + 1:
            a.insert(i, i + 1)
            operations += 1
        i += 1

    print(operations)
