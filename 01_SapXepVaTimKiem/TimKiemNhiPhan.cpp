#include <iostream>
#include <algorithm>

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

int BinarySearch()
{
    sort(a, a + n);
    int l = 0;
    int r = n - 1;
    while(l <= r)
    {
        int mid = (l + r) / 2;
        if(a[mid] == x) return mid;
        else if(a[mid] > x) --r;
        else ++l;
    }
    return -1;
}

int main()
{
    input();
    res = BinarySearch();
    print();
    return 0;
}