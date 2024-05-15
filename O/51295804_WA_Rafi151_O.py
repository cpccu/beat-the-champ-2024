t = int(input())

for _ in range(t):
    n = int(input())
    sequence = list(map(int, input().split()))
    
    operations = 0
    for i in range(n):
        operations += max(0, sequence[i] - (i + 1))  # Number of operations needed for each element
        
    print(operations)
