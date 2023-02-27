// Quay lui hoán vị theo vị trí
#include <iostream>

using namespace std;

int n;
int A[20];
int B[20];

void in()
{
	for(int i = 1; i <= n; ++i) cout << A[i] << ' ';
	cout << '\n';
}

void Try(int i)
{
	for(int j = 1; j <= n; ++j)
	{
		if(B[j] == 0)
		{
			A[i] = j; B[j] = 1;
			
			if(i == n) in();
			else Try(i+1);
			B[j] = 0;
		}
	}
}

int main()
{
	cin >> n;
	Try(1);
}