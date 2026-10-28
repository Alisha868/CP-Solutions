#include <iostream>
#include <vector>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<long long> A(N);

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        // Initial score
        int score = 0;

        for (int i = 0; i < N - 1; i++) {
            if (A[i] == A[i + 1]) {
                score++;
            }
        }

        // Maximum contribution of the left boundary
        // cut = 0 means L = 1, so contribution is 0
        int maxLeft = 0;

        int answer = score;

        // right boundary is after position i
        // i = 0 means R = 1
        for (int i = 0; i < N; i++) {

            // Add the possible left boundary at cut i
            if (i > 0) {
                int leftContribution;

                if (A[i - 1] == A[i]) {
                    leftContribution = -1;
                }
                else if (A[i - 1] == A[i] + 1) {
                    leftContribution = 1;
                }
                else {
                    leftContribution = 0;
                }

                maxLeft = max(maxLeft, leftContribution);
            }

            // Right boundary at cut i
            int rightContribution = 0;

            if (i < N - 1) {
                if (A[i] == A[i + 1]) {
                    rightContribution = -1;
                }
                else if (A[i] + 1 == A[i + 1]) {
                    rightContribution = 1;
                }
            }

            // Left boundary must be before right boundary
            answer = max(answer, score + maxLeft + rightContribution);
        }

        cout << answer << '\n';
    }

    return 0;
}