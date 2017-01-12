#include <iostream>

using namespace std;

int main ()
{
	int input;
	int T, box, mult, two;
	int suma=0;
	cin>>T;
	for (int i = 1; i <= T; ++i)
	{
		cin>>input;
		suma=0;
		box=input;
		two=input%10;
		while (box>0)
		{
			mult=box%10;
			box=box/10;
			suma=suma+mult;
		}
		if(suma%3==0&&two%2==0)			
		{
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;
	}
	return 0;
}