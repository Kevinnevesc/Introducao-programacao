#include <iostream>

using namespace std;

int main () {
	int q, p;
	cout<<"Informe a quantidade de valores:"<<endl;
	cin>>q;
	
	int dados[q];
	
	for (int i=0; i<q; i++) {
		cout<<"Informe a posição do valor: "<<endl;
		cin>>p;
		cout<<"Informe um valor: ";
		cin>>dados[p]; }
		
	for (int i=0; i<q; i++) {
		cout<<dados[i]; }
		
return 0; 
	
}
