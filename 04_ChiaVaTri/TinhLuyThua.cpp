#include <bits/stdc++.h>

using namespace std;

int m = 1e9 + 7;

long long luyThua(int n, int k)
{
    if(k == 0) return 1;
    long long x = luyThua(n, k / 2);
    if(k % 2 == 0) return x * x % m;
    else return n * (x * x % m) % m;
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << n << '^' << k << " = " << luyThua(n, k);
    return 0;
}