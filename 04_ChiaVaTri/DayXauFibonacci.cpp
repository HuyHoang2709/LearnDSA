#include <iostream>

using namespace std;

long long F[100];
int n;
long long k;

void init()
{
    F[0] = 0;
    F[1] = 1;
    for(int i = 2; i <= 92; ++i) F[i] = F[i-1] + F[i-2];
}

char FiboWord(int n, long long k)
{
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k <= F[n-2]) return FiboWord(n-2, k);
    return FiboWord(n-1, k - F[n-2]);
}

int main()
{
    init();
    cin >> n >> k;
    cout << FiboWord(n, k) << '\n';
    return 0;
}