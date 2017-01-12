#include <iostream>

using namespace std;

int main ()
{
	long long int A, B, R;
	cin>>A>>B;
	R = (A+B) + (A-B) + (B+A) + (B-A);
	cout<<R<<endl;
}