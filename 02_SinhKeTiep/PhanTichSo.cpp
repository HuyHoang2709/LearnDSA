#include <bits/stdc++.h>

using namespace std;

int n, C[100], k, cnt, Stop;

void Init() {
    cin >> n;
    k = 1;
    cnt = 0;
    C[k] = n;
}

void Result() {
    int i;
    cnt++;
    for (i = 1; i <= k; i++) cout << C[i] << ' ';
    cout << '\n';
}

void Next_Division() {
    int i, j, R, S, D;
    i = k;

    while (i > 0 && C[i] == 1) i--;

    if (i > 0) {
        C[i] = C[i] - 1;
        D = k - i + 1;
        R = D / C[i];
        S = D % C[i];
        k = i;
        if (R > 0) {
            for (j = i + 1; j <= i + R; j++) C[j] = C[i];
            k = k + R;
        }
        if (S > 0) {
            k = k + 1; C[k] = S;
        }
    }
    else Stop = 1;
}

void Division() {
    Stop = 0;
    while (!Stop) {
        Result();
        Next_Division();
    }
}

int main() {
    Init();
    Division();
    return 0;
}