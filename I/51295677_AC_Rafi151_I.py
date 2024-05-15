def divide_teams(n, skills):
    # Sort the boys based on their playing skills
    boys = sorted(enumerate(skills, start=1), key=lambda x: x[1])

    # Calculate the total skill of all boys
    total_skill = sum(skills)

    # Divide the boys into teams while ensuring fairness
    team1 = []
    team2 = []
    team1_skill = 0
    team2_skill = 0
    for i in range(n):
        if i % 2 == 0:
            team1.append(boys[i][0])
            team1_skill += boys[i][1]
        else:
            team2.append(boys[i][0])
            team2_skill += boys[i][1]

    # Determine the team with the highest skill
    max_skill_team = team1 if team1_skill > team2_skill else team2

    # Output the teams
    print(len(team1))
    print(*team1)
    print(len(team2))
    print(*team2)

# Input
n = int(input())
skills = list(map(int, input().split()))

# Output the teams
divide_teams(n, skills)
