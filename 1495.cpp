#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int N, num;
	vector<int> numeros;
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> num;
		numeros.push_back(num);
	}
	sort(numeros.begin(), numeros.end());
	for(int i=0;i<N;i++)
		cout << numeros[i] << endl;
}