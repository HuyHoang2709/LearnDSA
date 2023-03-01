#include <iostream>

using namespace std;

int a[1005];
int n;

void input()
{
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> a[i];
}

void print()
{
    for(int i = 0; i < n; ++i) cout << a[i] << ' ';
    cout << '\n';
}

void BubbleSort()
{
    for(int i = 0; i < n-1; ++i)
    {
        for(int j = 0; j < n-i-1; ++j)
        {
            if(a[j] > a[j+1]) swap(a[j], a[j+1]);
        }
    }
}

int main()
{
    input();
    BubbleSort();
    print();
    return 0;
}