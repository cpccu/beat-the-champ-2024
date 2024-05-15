def total_clicks(answer_options):
    return sum(answer_options)


n = int(input())
answer_options = list(map(int, input().split()))


print(total_clicks(answer_options))
