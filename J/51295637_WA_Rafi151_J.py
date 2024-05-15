def winning_player_and_move(q):
    if q % 2 == 0:
        # If q is even, the second player wins
        return 2, q // 2
    else:
        # If q is odd, the first player wins
        return 1, 3

# Input
q = int(input())

# Determine the winning player and their first move
player, move = winning_player_and_move(q)

# Output
print(player)
if player == 1:
    print(move)
