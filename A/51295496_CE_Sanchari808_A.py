def xor_binary_strings(a,b):
result=[]
for i in range(len(a)):
if a[i] !=b[i]:
result.append('1')
else:
result.append('0')
return".join(result)

a=input().strip()
b=input().strip()

result=xor_binary_strings(a,b(
print(result)