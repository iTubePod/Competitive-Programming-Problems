#include <iostream>


using namespace std;

int main ()
{
	int a;
	int divi;
	cin>>a;
	divi=a-a/3;
	if(a%3!=0)
		divi--;
	cout<<divi<<endl;
	return 0;
}