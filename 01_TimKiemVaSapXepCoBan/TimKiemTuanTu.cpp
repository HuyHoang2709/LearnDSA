#include <iostream>

using namespace std;

int a[1005];
int n, x;
int res;

void input()
{
    cin >> n >> x;
    for(int i = 0; i < n; ++i) cin >> a[i];
}

void print()
{
    cout << res << '\n';
}

int SequentialSearch()
{
    for(int i = 0; i < n; ++i)
    {
        if(a[i] == x) return i;
    }
    return -1;
}

int main()
{
    input();
    res = SequentialSearch();
    print();
    return 0;
}