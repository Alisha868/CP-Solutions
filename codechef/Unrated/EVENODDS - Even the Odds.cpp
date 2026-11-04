
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        int A[100005];
        int first = -1, last = -1;
        int odd = 0;

        for (int i = 0; i < N; i++) {
            cin >> A[i];

            if (A[i] % 2 != 0) {
                odd++;

                if (first == -1) {
                    first = i;
                }

                last = i;
            }
        }

        if (odd % 2 == 0) {
            cout << N << endl;
        }
        else {
            int removePrefix = first + 1;
            int removeSuffix = N - last;

            int ans = N - min(removePrefix, removeSuffix);

            cout << ans << endl;
        }
    }

    return 0;
}
