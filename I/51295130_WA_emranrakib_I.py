def divide_teams(n, skills):
    # Sort the boys based on their football playing skills
    sorted_skills = sorted(enumerate(skills), key=lambda x: x[1], reverse=True)
    
    # Initialize teams and total skills
    team1 = []
    team2 = []
    total_skill1 = 0
    total_skill2 = 0
    
    # Alternate adding boys to teams
    for i, skill in sorted_skills:
        if len(team1) <= len(team2):
            team1.append(i)
            total_skill1 += skill
        else:
            team2.append(i)
            total_skill2 += skill
    
    # Ensure the difference in team sizes does not exceed one
    if len(team1) > len(team2):
        team1.pop()  # Remove one player from team1
    elif len(team2) > len(team1):
        team2.pop()  # Remove one player from team2
    
    # Calculate the skill of the best player in the yard
    max_skill = max(skills)
    
    # Check if the difference in total skills exceeds the skill of the best player
    while abs(total_skill1 - total_skill2) > max_skill:
        # Find the player with the highest skill in the larger team
        if total_skill1 > total_skill2:
            max_player_index = max(team1, key=lambda x: skills[x])
            team1.remove(max_player_index)
            team2.append(max_player_index)
            total_skill1 -= skills[max_player_index]
            total_skill2 += skills[max_player_index]
        else:
            max_player_index = max(team2, key=lambda x: skills[x])
            team2.remove(max_player_index)
            team1.append(max_player_index)
            total_skill2 -= skills[max_player_index]
            total_skill1 += skills[max_player_index]
    
    # Print the team assignments
    print(len(team1))
    print(" ".join(str(x+1) for x in team1))
    print(len(team2))
    print(" ".join(str(x+1) for x in team2))

# Read input
n = int(input())
skills = list(map(int, input().split()))

# Divide the teams fairly
divide_teams(n, skills)
