#include <iostream>

using namespace std;

int main ()
{
	int n, m, t, max, win;
	int v=0;
	cin>>t;
	int candidates[5]={0};
	for (int i = 0; i < t; i++)
	{
		cin>>n>>m;
		for (int j = 0; j < m; j++)
		{
			for (int k = 0; k < n; k++)
			{
			cin >> v;
			candidates[k] += v;
			}
		
		}
		max=0;
		for (int i=0; i<n; i++)
		{
			if (candidates[i] > max)
			{
				max=candidates[i];
				win= i+1;
			}
			candidates[i]=0;
		}
		cout<<win<<endl;
	}
}