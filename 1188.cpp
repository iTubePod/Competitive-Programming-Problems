#include <iostream>
#include <vector>

using namespace std;

int main ()
{
	int a, b;
	int as, bs;
	int out=0;
	vector <int> one;
	vector<int>two;
	cin>>a>>b;
	while (a>0)
	{
		one.push_back(a%10);
		a=a/10;
	}
	while(b>0)
	{
		two.push_back(b%10);
		b=b/10;
	}
	for (int i = 0; i < one.size(); ++i)
	{
		for (int j = 0; j < two.size(); ++j)
		{
			out=out+(one[i]*two[j]);
		}
	}
	cout<<out<<endl;
	return 0;
}