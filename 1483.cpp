#include <iostream>
#include <string>

using namespace std;

int main () 
{
	string S;
	int A, B, O;
	cin>>S;
	if(S=="rectangle")
	{
		cin>>A>>B;
		O=(A*B);
	}
	else if (S=="square")
	{
		cin>>A;
		O=A*A;
	}
	cout<<O<<endl;

}