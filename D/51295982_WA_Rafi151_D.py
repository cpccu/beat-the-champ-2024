# Read the number of questions
n = int(input())

# Read the number of answer variants for each question
answer_variants = list(map(int, input().split()))

# Find the maximum number of clicks needed
max_clicks = sum(answer_variants)

print(max_clicks)
