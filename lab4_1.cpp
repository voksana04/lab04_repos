#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int k, N, i;
	double S;
	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;
	S = 0;
	i = k;
	while (i <= N)
	{
		S += (i * i * 1. / k * k + N * N);
		i++;
	}
	cout << S << endl;
	
		S = 0;
	i = k;
	do {
		S += (i * i * 1. / k * k + N * N);
		i++;
	} while (i <= N);
	cout << S << endl;
	S = 0;
	for (i = k; i <= N; i++)
	{
		S += (i * i * 1. / k * k + N * N);
	}
	cout << S << endl;
	S = 0;
	for (i = N; i >= k; i--)
	{
		S += (i * i * 1. / k * k + N * N);
	}
	cout << S << endl;
	return 0;
}