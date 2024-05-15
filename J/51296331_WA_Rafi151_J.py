import math

def find_divisors(n):
    divisors = []
    for i in range(2, int(math.sqrt(n)) + 1):
        if n % i == 0:
            divisors.append(i)
            if i != n // i:
                divisors.append(n // i)
    return divisors

# Input the number
q = int(input())

# Check if q is already a losing number
divisors = find_divisors(q)
if len(divisors) == 0:
    print(1)
    print(0)
else:
    # Check if any divisor is a losing number
    for divisor in divisors:
        if len(find_divisors(divisor)) == 0:
            print(2)
            print(divisor)
            break
    else:
        # If no divisor is a losing number, print 1 and 0
        print(1)
        print(0)
