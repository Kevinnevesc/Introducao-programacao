#include <iostream>

using namespace std;
int main() {
	int maior, menor, i, num[10]= {23,12,8,1,5,-4,-22,11,-14};
	
	maior=-1000000;
	menor=1000000;
	
	for (i=0; i<10; i++) {
		if (num[i]<menor) {
			menor=num[i]; }
			
		if (num[i]>maior) {
			maior = num[i]; }
	}
	
	cout<<"Maior numero: "<<maior<<endl;
	cout<<"Menor numero: "<<menor<<endl;
	return 0;
}
