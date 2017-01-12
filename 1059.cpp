#include <fstream>
#include <vector>
#include <iostream>

using namespace std;
using std::vector;

int main ()
{
	int in;
	int ones=0;
	int test;
	vector <int> input;
	cin>>in;
	while (in!=0)
	{
		input.push_back(in);
		cin>>in;
	}
	for (int i = 0; i < input.size(); ++i)
	{
		ones=0;
		test=input[i];
		vector <int> bin;
		while(test>0)
		{
			if(test%2>0)
			{
			ones++;
			test=test/2;
			bin.push_back(1);
			}
			else
			{
				test=test/2;
				bin.push_back(0);
			}
		}
		cout<<"The parity of ";
		for (int i = bin.size()-1; i>=0; i--)
		{
		cout<<bin[i];
		}
		cout<<" is "<<ones<<" (mod 2)."<<endl;
	}
	return 0;

}

