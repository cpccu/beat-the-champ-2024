#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Boy {
    int index;
    int skill;
};

bool compareBySkill(const Boy &a, const Boy &b) {
    return a.skill < b.skill;
}

void divideIntoTeams(vector<int> &team1, vector<int> &team2, vector<Boy> &boys) {
    int n = boys.size();
    int skillOfBestPlayer = boys.back().skill;
    int mid = n / 2;
    team1.clear();
    team2.clear();
    
    
    for (int i = 0; i < n; ++i) {
        if (i < mid) {
            team1.push_back(boys[i].index);
        } else {
            team2.push_back(boys[i].index);
        }
    }
    
    
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < mid; ++i) {
        sum1 += boys[i].skill;
    }
    for (int i = mid; i < n; ++i) {
        sum2 += boys[i].skill;
    }
    

    if (abs(sum1 - sum2) > skillOfBestPlayer) {
        int lastBoyTeam1 = team1.back();
        int lastBoyTeam2 = team2.back();
        team1.pop_back();
        team2.pop_back();
        team1.push_back(lastBoyTeam2);
        team2.push_back(lastBoyTeam1);
    }
}

int main() {
    int n;

    cin >> n;
    
    vector<Boy> boys(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> boys[i].skill;
        boys[i].index = i + 1;
    }
    
    sort(boys.begin(), boys.end(), compareBySkill);
    
    vector<int> team1, team2;
    divideIntoTeams(team1, team2, boys);
    

    for (int player : team1) {
        cout << player << " ";
    }
    cout << endl;
    
    
    for (int player : team2) {
        cout << player << " ";
    }
    cout << endl;
    
    return 0;
}
