#include <bits/stdc++.h>

#define MAX 5

using namespace std;

void RadixSort(int a[], int n)
{
    int i, b[MAX], m = a[0], exp = 1;
    for (i = 0; i < n; i++)
    {
        if (a[i] > m) m = a[i];
    }
    while (m / exp > 0)
    {
        int bucket[10] = {};
        for (i = 0; i < n; i++)
            bucket[a[i] / exp % 10]++;
        for (i = 1; i < 10; i++)
            bucket[i] += bucket[i - 1];
        for (i = n - 1; i >= 0; i--)
            b[--bucket[a[i] / exp % 10]] = a[i];
        for (i = 0; i < n; i++)
            a[i] = b[i];
        exp *= 10;
    }
}

int main()
{
    int arr[MAX] = {25, 5, 9, 10, 6};
    RadixSort(arr, MAX);
    for(int i = 0; i < MAX; ++i)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}