#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Boy {
    int index;
    int skill;
};

bool compare(const Boy &a, const Boy &b) {
    return a.skill > b.skill; // Sort in descending order of playing skill
}

int main() {
    int n;
    cin >> n;

    vector<Boy> boys(n);

    // Input the playing skills and store them with indices
    for (int i = 0; i < n; i++) {
        cin >> boys[i].skill;
        boys[i].index = i + 1; // Boy index starts from 1
    }

    // Sort boys based on playing skills
    sort(boys.begin(), boys.end(), compare);

    // Divide boys into two teams
    int team1_count = (n + 1) / 2;
    int team2_count = n - team1_count;

    // Output team assignments
    cout << team1_count << endl;
    for (int i = 0; i < team1_count; i++) {
        cout << boys[i].index << " ";
    }
    cout << endl;

    cout << team2_count << endl;
    for (int i = team1_count; i < n; i++) {
        cout << boys[i].index << " ";
    }
    cout << endl;

    return 0;
}