// Sinh nhi phan
#include <iostream>

using namespace std;

int B[30];
int n;
int OK;

void Init()
{
    OK = 0;
    for(int i = 0; i < 30; ++i) B[i] = 0;
    cin >> n;
}

void print()
{
    for(int i = 1; i <= n; ++i) cout << B[i] << ' ';
    cout << '\n';
}

void Generation()
{
    int i = n;
    while(B[i] == 1)
    {
        B[i] = 0;
        --i;
    }
    if(i == 0) OK = 1;
    else B[i] = 1;
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