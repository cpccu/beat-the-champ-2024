def calculate_total_clicks(answers):
    total_clicks = 0
    current_product = 1

    for a in answers:
        current_product *= a
        total_clicks += current_product

    return total_clicks


n = int(raw_input().strip())
answers = list(map(int, raw_input().strip().split()))


print(calculate_total_clicks(answers))
