#include <iostream>

using namespace std;

int main(){
	unsigned long long int i, N, M;
	cin >> i;
	while (i>0)
	{
		cin>>N>>M;
		if(N==M && N > 1)
		{
			if(N%2==0)
				cout<<"L"<<endl;
			else
				cout<<"R"<<endl;
		}
		if(N>M && M>1)
		{
			if(M%2==0)
				cout<<"U"<<endl;
			else
				cout<<"D"<<endl;
		}
		if(M>N)
		{
			if(N%2==0)
				cout<<"L"<<endl;
			else
				cout<<"R"<<endl;
		}
		if(M==1){
			if(N==1)
				cout<<"R"<<endl;
			else
				cout<<"D"<<endl;
		}
		i--;
	}
}