/*
* Cadastro de pessoas em C++
* Arquivo     : "mainCadastro_pessoa.cpp"
* Versão 0.5  : Teste
* Programador : Felipe Vieira Mota
* Curso		  : Bacharelado em Sistemas de Informação, Faculdade Fortec, 3° para o 4° Semestre.
* Local 	  : São Vicente , São Paulo , Brasil.
* Data        : 25/07/2015, Sábado
* Horário	  : 23:54, noite.
*/
#include "Cadastro_Pessoa.h" 
#include <iostream>
#include <conio.h>
using namespace std;
int main() {
	char senha[255],login[255];
	string conf_login;
	string conf_senha;
	char var[255];
	char param;
	string x;
do{	
	system("cls");
	cout<<"*******************************"<<endl;
	cout<<"--------Registrar--------------"<<endl;
  	cout<<"*******************************"<<endl;
	
	cout<<"Login : ";
	fflush(stdin); 
	std::cin.getline(login,255);
	conf_login = login;
	
	cout<<"Senha : ";
	fflush(stdin); 
	std::cin.getline(senha,255);
	conf_senha = senha;
	
		if ((conf_login== "tester") && (conf_senha== "tester"))
			{
				Cadastro_Pessoa Objeto_Pessoa;
				Objeto_Pessoa.Menu();	
			}
						
		else 
			{
				MessageBox(NULL,"Login/Senha errado(s), tente novamente ","ERRO",MB_OK);
				for (int c = 0 ; c<=254 ; c++)
					{
						login[c] = ' ';
						senha[c] = ' ';
					}
			}
	}
while(1);
	return 0;
}
