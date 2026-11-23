
#include <bits/stdc++.h>
using namespace std;

bool check(vector<long long>& b, int n, int a, long long mid) {
    int students = 1;
    long long pages = 0;

    for (int i = 0; i < n; i++) {
        if (pages + b[i] <= mid) {
            pages += b[i];
        }
        else {
            students++;
            pages = b[i];
        }
    }

    return students <= a;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a;
        cin >> n >> a;

        vector<long long> b(n);

        long long low = 0, high = 0;

        for (int i = 0; i < n; i++) {
            cin >> b[i];

            low = max(low, b[i]);
            high += b[i];
        }

        long long ans = high;

        if (a > n) {
            cout << -1 << endl;
            continue;
        }

        while (low <= high) {
            long long mid = low + (high - low) / 2;

            if (check(b, n, a, mid)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
