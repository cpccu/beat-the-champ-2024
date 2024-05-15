def is_dangerous(s):
    
    for i in range(len(s) - 6):
        
        if s[i:i+7] == '0000000' or s[i:i+7] == '1111111':
            return True
    return False


s = input().strip()


if is_dangerous(s):
    print("YES")
else:
    print("NO")
