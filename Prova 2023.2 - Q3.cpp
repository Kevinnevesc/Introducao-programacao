#include <iostream>

using namespace std;

int main () {
	string nome, alunos[7]= {"joao", "carlos", "claudio", "jose", "maria"};
	bool vaipraexcursao[7]={true, true, false, false, true};
	bool tanalista=false;
	
	cout<<"Informe o nome do aluno: ";
	cin>>nome;
	
	for (int i=0;i<7;i++) {
		if (alunos[i]==nome && vaipraexcursao[i]==true) {
			cout<<"Vai para excurs�o!";
			tanalista=true; } 
		if (alunos[i]==nome && vaipraexcursao[i]==false) {
			cout<<"N�o vai para excurs�o!"; 
			tanalista=true; } }
	
	if (tanalista==false) {
		cout<<"N�o est� na lista."; } 

return 0;
}
	

