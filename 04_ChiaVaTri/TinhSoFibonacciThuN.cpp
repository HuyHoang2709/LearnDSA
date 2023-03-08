#include <bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;

struct MaTran
{
    long long f[2][2];
    MaTran()
    {
        f[0][0] = 0;
        f[0][1] = 1;
        f[1][0] = 1;
        f[1][1] = 1;
    }
};

MaTran operator*(MaTran A, MaTran B)
{
    MaTran C;
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            C.f[i][j] = 0;
            for (int k = 0; k < 2; ++k)
            {
                C.f[i][j] = (C.f[i][j] + A.f[i][k] * B.f[k][j] % mod) % mod;
            }
        }
    }
    return C;
}

MaTran powMod(MaTran A, int n)
{
    if (n == 1) return A;
    MaTran X = powMod(A, n / 2);
    if (n % 2 == 0) return X * X;
    return A * X * X;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        MaTran A;
        A = powMod(A, n);
        cout << A.f[0][1] << '\n';
    }
    return 0;
}