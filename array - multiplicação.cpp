#include <iostream>

using namespace std;
int main() {
	int num[10]= {23,12,8,1,5,-4,-22,11,-14}, valor, multi, i;
	
	cin>>multi;
	
	for (i=0;i<10;i++) {
		valor=num[i]*multi; 
		cout<<valor<<endl; }
		

	return 0;
}
