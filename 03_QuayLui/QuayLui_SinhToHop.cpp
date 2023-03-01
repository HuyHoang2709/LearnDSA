// Quay lui tổ hợp theo vị trí
#include <iostream>

using namespace std;

int n, k;
int C[30];

void in()
{
	for(int i = 0; i <= k; ++i) cout << C[i] << ' ';
	cout << '\n';
}

void Try(int i)
{
	for(int j = C[i-1]+1; j <= n-k+i; ++j)
	{
		C[i] = j;
		if(i == k) in();
		else Try(i+1);
	}
}

int main()
{
	cin >> n >> k;
	Try(1);
}