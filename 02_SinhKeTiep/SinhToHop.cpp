// Sinh to hop chap k cua n
#include <iostream>

using namespace std;

int C[30];
int n, k;
int OK;

void Init()
{
    OK = 0;
    for(int i = 0; i < 30; ++i) C[i] = i;
    cin >> n >> k;
}

void print()
{
    for(int i = 1; i <= k; ++i) cout << C[i] << ' ';
    cout << '\n';
}

void Generation()
{
    int i = k;
    while(C[i] == n - k + i) --i;
    if(i == 0) OK = 1;
    else
    {
        ++C[i];
        for(int j = i+1; j <= k; ++j) C[j] = C[j-1] + 1;
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