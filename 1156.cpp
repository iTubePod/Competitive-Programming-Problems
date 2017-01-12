#include <iostream>

using namespace std;

int main () 
{
	int input, i;
	i=1;
	while(i>0)
	{
	scanf("%d", &input);
		if (input!=42)
		{
			printf("%d\n",input);
			//cout<<input<<endl;
			i=1;
		}
		else
		{
			i=0;
		}
	}
	return 0;
}