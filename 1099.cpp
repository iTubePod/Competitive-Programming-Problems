#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{
	int a[3];
	cin>>a[0];
	while (a[0]!=0)
	{
		cin>>a[1]>>a[2];
		sort(a+0,a+3);
		if(a[0]*a[0]+a[1]*a[1]==a[2]*a[2])		
		{
			cout<<"right"<<endl;
		}
		else
		{
			cout<<"wrong"<<endl;
		}
		cin>>a[0];
}
return 0;
}