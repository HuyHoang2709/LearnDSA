#include <iostream>
#include <algorithm>

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

void SelectionSort()
{
    for(int i = 0; i < n-1; ++i)
    {
        int minIdx = i;
        for(int j = i+1; j < n; ++j)
        {
            if(a[minIdx] > a[j]) minIdx = j;
        }
        swap(a[i], a[minIdx]);
    }
}

int main()
{
    input();
    SelectionSort();
    print();
    return 0;
}