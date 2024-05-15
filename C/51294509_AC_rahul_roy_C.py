def max_dominoes(M, N):

    total_squares = M * N

    max_dominoes = total_squares // 2
    
    return max_dominoes


M, N = map(int, input().split())

print(max_dominoes(M, N))
