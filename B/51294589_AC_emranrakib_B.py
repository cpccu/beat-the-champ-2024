def is_triangular_number(n):
   
    k = (8 * n + 1) ** 0.5
    return k.is_integer()


n = int(input())


if is_triangular_number(n):
    print("YES")
else:
    print("NO")
