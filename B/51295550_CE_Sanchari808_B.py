import math

def is_triangular(n):
      discriminant = 1 + 8 * n
    sqrt_discriminant = int(math.isqrt(discriminant))
    
      if sqrt_discriminant * sqrt_discriminant != discriminant:
        return False
    
