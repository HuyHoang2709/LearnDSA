#include <bits/stdc++.h>

using namespace std;

// Code nay su dung pivot la phan tu cuoi cua mang

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

int partition(int low, int high)
{
    int pivot = a[high];
    int i = low - 1;
    for (int j = low; j < high; ++j)
    {
        if (a[j] <= pivot)
        {
            ++i;
            swap(a[i], a[j]);
        }
    }
    swap(a[i + 1], a[high]);
    return i + 1;
}

void QuickSort(int low, int high)
{
    if (low < high)
    {
        int p = partition(low, high);
        QuickSort(low, p - 1);
        QuickSort(p + 1, high);
    }
}

int main()
{
    input();
    QuickSort(0, n-1);
    print();
    return 0;
}