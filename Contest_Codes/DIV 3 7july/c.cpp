#include <bits/stdc++.h>
using namespace std;

struct Participant {
    int index;
    int points;
    int penalty;
};

bool compareParticipants(const Participant& p1, const Participant& p2) {
    if (p1.points != p2.points) {
        return p1.points > p2.points;
    } else {
        return p1.penalty < p2.penalty;
    }
}

int findRudolfPlace(int n, int m, int h, vector<vector<int>>& times) {
    vector<Participant> participants(n);


    for (int i = 0; i < n; i++) {
        participants[i].index = i + 1;
        participants[i].points = 0;
        participants[i].penalty = 0;
    }


    for (int i = 0; i < n; i++) {
        vector<pair<int, int>> problemTimes;
        for (int j = 0; j < m; j++) {
            problemTimes.push_back(make_pair(times[i][j], j));
        }

        sort(problemTimes.begin(), problemTimes.end());

        int currentTime = 0;
        for (int j = 0; j < m; j++) {
            if (currentTime + problemTimes[j].first <= h) {
                participants[i].points++;
                participants[i].penalty += currentTime + problemTimes[j].first;
                currentTime += problemTimes[j].first;
            } else {
                break;
            }
        }
    }

    sort(participants.begin(), participants.end(), compareParticipants);


    for (int i = 0; i < n; i++) {
        if (participants[i].index == 1) {
            return i + 1;
        }
    }

    return -1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, h;
        cin >> n >> m >> h;

        vector<vector<int>> times(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> times[i][j];
            }
        }

        int rudolfPlace = findRudolfPlace(n, m, h, times);
        cout << rudolfPlace << endl;
    }

    return 0;
}
