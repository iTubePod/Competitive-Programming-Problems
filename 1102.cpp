#include <iostream>

using namespace std;

int main () 
{
	int input;
	scanf("%d", &input);
	while(input>0)
	{
		if (input%11==0)
		{
			//printf("%d is a multiple of 11.\n",input);
			cout<<input<<" is a multiple of 11."<<endl;
		}
		else
			//printf("%d is not a multiple of 11.\n",input);
			cout<<input<<" is not a multiple of 11."<<endl;
		scanf("%d", &input);
	}
	return 0;
}