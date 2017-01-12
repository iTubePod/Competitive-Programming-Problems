#include <iostream>

using namespace std;

int main(){
	int input;
	cin>>input;
	if(input>=0)
		cout << (input*(input+1))/2;
	else
		cout << (((input*-1)*((input*-1)+1)/2)*-1)+1;
	cout << endl;
}