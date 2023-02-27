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

void InsertionSort()
{
    for(int i = 1; i < n; ++i)
    {
        int j = i-1;
        int temp = a[i];
        while(j >= 0 && a[j] > temp) 
        {
            a[j+1] = a[j];
            --j;
        }
        a[j+1] = temp;
    }
}

int main()
{
    input();
    InsertionSort();
    print();
    return 0;
}