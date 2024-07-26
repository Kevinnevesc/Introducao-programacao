#include <iostream>

using namespace std;

int main () {
	int a[] = {1, 6, -2, 56, 12, 96, -65};
	int b[] = {5, -91, 85, 69};
	int c[11];
	int i;
	
	for (i=0; i<7; i++) {
		c[i] = a[i]; 
		cout<<c[i]<<endl; }
		
	for (i=7; i<11; i++) {
		c[i] = b[i-7]; 
		cout<<c[i]<<endl; }
				
	return 0;
}
