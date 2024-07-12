#include <iostream>

using namespace std;
int main() {
	
	int N, i;
	
	cin>>N;
	
	int quadrado[N];
	
	for (i=1;i<=N;i++) {
		quadrado[i] = i*i;
		cout<<quadrado[i]<<endl;
		}
	return 0;
	}
	
