// Sinh hoan vi cua n phan tu
#include <iostream>

using namespace std;

int P[20];
int n;
int OK;

void Init()
{
    OK = 0;
    for(int i = 0; i < 20; ++i) P[i] = i;
    cin >> n;
}

void print()
{
    for(int i = 1; i <= n; ++i) cout << P[i] << ' ';
    cout << '\n';
}

void Generation()
{
    int i = n-1;
    while(P[i] > P[i+1]) --i;
    if(i == 0) OK = 1;
    else
    {
        int j = n;
        while(P[i] > P[j]) --j;
        swap(P[i], P[j]);
        int l = i+1;
        int r = n;
        while(l < r)
        {
            swap(P[l], P[r]);
            ++l, --r;
        }
    }
}

int main()
{
    Init();
    while(!OK)
    {
        print();
        Generation();
    }
    return 0;
}