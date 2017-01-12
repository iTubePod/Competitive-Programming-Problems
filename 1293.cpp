#include <iostream>

using namespace std;

int pot (int input)
{
	if (input<=0)
	{
		return(1);
	}
	else
	{
		return(2*pot(input-1));
	}
}

int main(){
	int input, output;
	cin>>input;
	output=pot(input);
	cout<<output<<endl;
}