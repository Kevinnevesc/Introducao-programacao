#include <iostream>

using namespace std;

int main () {
	string emails[3] = {"joao@outlook.com", "maria@gmail.com", "carlos@yahoo.com.br"};
	string senhas[3]= {"123abc", "aaa543", "313rer"};	
	string email, senha;
	bool login = false;
	
	cout<<"Informe seu e-mail: "<<endl;
	cin>>email;
	cout<<"Informe sua senha: "<<endl;
	cin>>senha;
	
	for (int i=0; i<3; i++) {
		if (email==emails[i] && senha==senhas[i]) {
			cout<<"Bem-vindo!"; 
			login=true; } }
		
	if (login=false) {
		cout<<"Não Autorizado!"; }
	
return 0;
}
