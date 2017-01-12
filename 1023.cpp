#include <iostream>

using namespace std;

int main () 
{
	float input;
	float ave=0;
	for (int i = 1; i <=12 ; i++)
	{
		cin>>input;
		ave=ave+input;
	}
	ave=ave/12;
	cout<<"$"<<ave<<endl;
}