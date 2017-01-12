#include <iostream>

using namespace std;

int main ()
{
	int N,T;
	cin>>N;
	for (int i = 0; i < N; i++)
	{
		cin>>T;
		if (T%4==0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}