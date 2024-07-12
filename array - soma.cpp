#include <iostream>

using namespace std;
int main() {
	int num[10]= {23,12,8,1,5,-4,-22,11,-14}, soma=0, i;
	
	for (i=0;i<10;i++) {
		soma=soma+num[i]; }
		
	cout<<"soma: "<<soma;
	
	return 0;
}
