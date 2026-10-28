#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K;
        cin >> N >> K;

        string S;
        cin >> S;

        int alarms = 0;
        int lastAlarm = -1;

        for (int i = 0; i < N; i++) {

            if (S[i] == '1') {

                // If current room is already protected
                if (i <= lastAlarm) {
                    continue;
                }

                // Place alarm as far right as possible
                lastAlarm = min(N - 1, i + K);
                alarms++;
            }
        }

        cout << alarms << endl;
    }

    return 0;
}