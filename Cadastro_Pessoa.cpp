	/*
	* Cadastro de pessoas em C++.
	* Arquivo     : "Cadastro_Pessoa.cpp".
	* Versão 0.5  : Teste
	* Programador : Felipe Vieira Mota.
	* Curso		  : Bacharelado em Sistemas de Informação, Faculdade Fortec, 3° para o 4° Semestre.
	* Local 	  : São Vicente , São Paulo , Brasil.
	* Data        : 25/07/2015, Sábado.
	* Horário	  : 23:58, noite.
	*/

#include "Cadastro_Pessoa.h"
#include <iostream>
#include <fstream>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <sstream>
using namespace std;

int Cadastro_Pessoa::getCodigo(void){
	return codigo;	
}

string Cadastro_Pessoa::getNome(void){
  return nome;
}

int Cadastro_Pessoa::getIdade(void){
  return idade;
}

string Cadastro_Pessoa::getCpf(void){
  return cpf;
}

string Cadastro_Pessoa::getEndereco(void){
  return endereco;
}

string Cadastro_Pessoa::getProfissao(void){
  return profissao;
}

string Cadastro_Pessoa::getTelefone(void){
  return telefone;
} 

void Cadastro_Pessoa::setCodigo(int codigo_pessoa){
	codigo = codigo_pessoa;
}

void Cadastro_Pessoa::setNome(string nome_pessoa){
	nome = nome_pessoa;
}
      
void Cadastro_Pessoa::setIdade(int idade_pessoa){
    idade = idade_pessoa;
}

void Cadastro_Pessoa::setCpf(string cpf_pessoa){
	cpf = cpf_pessoa;
}

void Cadastro_Pessoa::setEndereco(string endereco_pessoa){ 
	endereco = endereco_pessoa;
}

void Cadastro_Pessoa::setProfissao(string profissao_pessoa){
    profissao = profissao_pessoa;
}

void Cadastro_Pessoa::setTelefone(string telefone_pessoa){ 
    telefone = telefone_pessoa;
}

void Cadastro_Pessoa::Abrir_TXT(void){
  //  abrir arquivo	
	ifstream Arquivo_Entrada;
  	string linha;
  	Arquivo_Entrada.open("Pessoa.txt");

  	if(!Arquivo_Entrada.is_open())
  		MessageBox(NULL,"NÃO FOI POSSIVEL ABRIR O ARQUIVO, PODE ESTAR CORROMPIDO OU NÃO EXISTIR!","ERRO",MB_OK);
  	else	
  		system("call Pessoa.txt");
  	Arquivo_Entrada.close();
}     
			
void Cadastro_Pessoa::Consultar(void) {
// ler arquivo
  	ifstream Arquivo_Entrada;
  	string linha;
  	Arquivo_Entrada.open("Pessoa.txt");
  	
	if(!Arquivo_Entrada.is_open()){
  		MessageBox(NULL,"NÃO FOI POSSIVEL ABRIR O ARQUIVO, PODE ESTAR CORROMPIDO OU NÃO EXISTIR!","ERRO",MB_OK);	
	}else{
		system("cls");
		while(!Arquivo_Entrada.eof()){
  			getline(Arquivo_Entrada,linha);
  			cout << linha<<endl;
		}
		system("pause>>null");
	}
  	Arquivo_Entrada.close();
}

bool Cadastro_Pessoa::Busca_Individual(void){
	system("cls");
	string linha;
	ifstream Arquivo_Entrada;	
	Arquivo_Entrada.open("Pessoa.txt");
	int MAX_TAM = 5;
	int Converte_int;
	char Codigo[MAX_TAM];
	string Codigo_string;
	string Codigo_string_2;
	string Guarda;
	string Guarda2;
	stringstream convert;
	
	cout<<"--------------------------------------------------"<<endl;	
	cout<<"Digite o CODIGO"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	cin.getline(Codigo,MAX_TAM);
	cout<<"--------------------------------------------------"<<endl;
	
	Converte_int = atoi(Codigo);
	Converte_int++;
	convert<<Converte_int;
	Guarda = Codigo; 
	Guarda2 = convert.str();
	
	Codigo_string   ="Codigo       : "+ Guarda;
	Codigo_string_2 ="Codigo       : "+ Guarda2;
				
	if(!Arquivo_Entrada.is_open()){
  		MessageBox(NULL,"NÃO FOI POSSIVEL ABRIR O ARQUIVO, PODE ESTAR CORROMPIDO OU NÃO EXISTIR!","ERRO",MB_OK);	
	}else{
		system("cls");
		cout<<"--------------------------------------------------"<<endl;	
		cout<<"Resultado"<<endl;
		cout<<"--------------------------------------------------"<<endl;
		
		while(!Arquivo_Entrada.eof()){
  			getline(Arquivo_Entrada,linha);
  			if(linha == Codigo_string){
  				if(linha != Codigo_string){
  					MessageBox(NULL,"Codigo nao encontrado","ERRO",MB_OK);	
				}else{
  					while(!Arquivo_Entrada.eof()){
						cout << linha << endl;
						getline(Arquivo_Entrada,linha);
						//if(linha == Codigo_string_2)
						if(linha == "-----------------------------------------------------------------"){
							//string linha;
							//ifstream Arquivo_Entrada;	
							//Arquivo_Entrada.open("Pessoa.txt");
							//Arquivo_Entrada.close();
							char op;
							int MAX_TAM = 0;
							int Converte_int=0;
							char Codigo[MAX_TAM];
							string Codigo_string= " ";
							string Codigo_string_2= " ";
							string Guarda= " ";
							string Guarda2= " ";
							//stringstream convert= " ";
							//system("pause>>null");
							Arquivo_Entrada.close();
							op = getch();
							if(op == 13){
							 	return true;
							}
						}
					}
					Arquivo_Entrada.close();
				}
			}  
		}
	}
  	Arquivo_Entrada.close();
}
		
string Cadastro_Pessoa::Testa_string(void){	    
	int i=0;
	char var[255];
	char param;
	string x;
	fflush(stdin); // MEU CASO É O  WINDOWS
	//Para limpar o buffer em Windows, use: fflush(stdin)
	//Para limpar o buffer em Linux, use: __fpurge(stdin)
	std::cin.getline(var,255);
	param = var [0];
	if ( param=='0'){
		MessageBox(NULL,"DIGITE O CODIGO SEM O ZERO NA FRENTE! ","ERRO",MB_OK);
	}
		
	if ( param=='-' ){
		MessageBox(NULL,"DIGITE NUMEROS POSITIVOS POR FAVOR! ","ERRO",MB_OK);
	}
		
	if ( param=='\0'){
		MessageBox(NULL,"DIGITE ALGO POR FAVOR!, NÃO DEIXE ESTE CAMPO VAZIO","ERRO",MB_OK);
	}
			
	if (param=='*'){
		fflush(stdin);								
	}
	x = var;
	return x;
}
 
int  Cadastro_Pessoa::numero_string (void){
	char idade_txt_prov;
	char idade_txt[10];
	int numero;
	int i = 0;
		
	fflush(stdin);
	std::cin.getline(idade_txt,10);
	idade_txt_prov = idade_txt[0];
		
	if ( idade_txt_prov=='0'){
		MessageBox(NULL,"DIGITE O CODIGO SEM O ZERO NA FRENTE! ","ERRO",MB_OK);
	}
	
	if ( idade_txt_prov=='-' ){
		MessageBox(NULL,"DIGITE NUMEROS POSITIVOS POR FAVOR! ","ERRO",MB_OK);
	}
	
	if ( idade_txt_prov=='\0'){
		MessageBox(NULL,"DIGITE ALGO POR FAVOR!, NÃO DEIXE ESTE CAMPO VAZIO","ERRO",MB_OK);
	}
		
	if (idade_txt_prov=='*'){
		fflush(stdin);
		switch(idade_txt_prov){
			case '*': {
				return 0;	
			}
			break;
		}
	}									
	numero = atoi(idade_txt);
	return numero;		
}

int Cadastro_Pessoa::Busca_Codigo(void){
	int i = 0;
	int retorna_codigo;
	int compara_cod_int_conv;
	int MAX_TAM = 50;
	char param;
	char numero_codigo[MAX_TAM];
	string linha;
	string numero_codigo_string;
	ifstream Arquivo_Busca;
				
	do{
		fflush(stdin); 
		system("cls");
		
		cout<<"********************************************************************************"<<endl;
		cout<<"PRESSIONE A TECLA  Asterisco (*) mais <ENTER> PARA CANCELAR E RETORNAR AO MENU. "<<endl;
		cout<<"********************************************************************************"<<endl;
		
		cout<<"--------------------------------------------------"<<endl;	
		cout<<"Digite o CODIGO"<<endl;
		cout<<"--------------------------------------------------"<<endl;
		
		std::cin.getline(numero_codigo,MAX_TAM,'\n');
		numero_codigo_string = numero_codigo;
		compara_cod_int_conv = atoi(numero_codigo);
		param = numero_codigo[0];
		
		cout<<"***************************************************"<<endl<<endl;
				
		if ( param=='0'){
			MessageBox(NULL,"DIGITE O CODIGO SEM O ZERO NA FRENTE! ","ERRO",MB_OK);
		}
			
		if ( param=='-' ){
			MessageBox(NULL,"DIGITE NUMEROS POSITIVOS POR FAVOR! ","ERRO",MB_OK);
		}
		
		if ( param=='\0'){
			MessageBox(NULL,"DIGITE ALGO POR FAVOR!, NÃO DEIXE ESTE CAMPO VAZIO","ERRO",MB_OK);
		}
			
		if (param=='*'){
			fflush(stdin);
			for (int c = 0; c<=MAX_TAM-1; c++){
					numero_codigo[c] = ' ';
					numero_codigo_string = " ";
				}
			//fflush(stdin);
			switch(param){
				case '*': {
			//		Menu();
				}
			}
		}
	}while(excludeBadCaracters(param));
				
	numero_codigo_string ="Codigo       : " + numero_codigo_string; 
	Arquivo_Busca.open("Pessoa.txt");
				
	while(Arquivo_Busca != NULL){
		while(!Arquivo_Busca.eof()){
  			getline(Arquivo_Busca,linha);
			if(linha == numero_codigo_string){	
				cout<<'\a';
				MessageBox(NULL,"DIGITE OUTRO CODIGO POIS ESTE JA ESTA SENDO ULTILIZADO","ERRO",MB_OK);
				Arquivo_Busca.close();
				Arquivo_Busca.open("Pessoa.txt");			  	
				do{
					system("cls");					
					cout<<"********************************************************************************"<<endl;
					cout<<"PRESSIONE A TECLA  Asterisco (*) mais <ENTER> PARA CANCELAR E RETORNAR AO MENU. "<<endl;
					cout<<"********************************************************************************"<<endl;
					cout<<"--------------------------------------------------"<<endl;	
					cout<<"Digite o CODIGO"<<endl;
					cout<<"--------------------------------------------------"<<endl;
					fflush(stdin);
					std::cin.getline(numero_codigo,MAX_TAM,'\n');
					numero_codigo_string = numero_codigo;
					param = numero_codigo[0];
					cout<<"***************************************************"<<endl<<endl;
				
					if ( param=='0'){
						MessageBox(NULL,"DIGITE O CODIGO SEM O ZERO NA FRENTE! ","ERRO",MB_OK);
					}else if ( param=='-' ){
						MessageBox(NULL,"DIGITE NUMEROS POSITIVOS POR FAVOR! ","ERRO",MB_OK);
					} else if ( param=='\0'){
						MessageBox(NULL,"DIGITE ALGO POR FAVOR!, NÃO DEIXE ESTE CAMPO VAZIO","ERRO",MB_OK);
					}else if (param=='*'){
						fflush(stdin);
						Menu();								
					}
					numero_codigo_string ="Codigo       : " + numero_codigo_string;	
					
					if (param=='*'){
						fflush(stdin);
						for (int c = 0; c<=MAX_TAM-1; c++){
							numero_codigo[c] = ' ';
							numero_codigo_string[c] = ' ';
						}
						Menu();
					}
				}while(excludeBadCaracters(param));
			}
		}
	}
			
	 Arquivo_Busca.close();
	 retorna_codigo = atoi(numero_codigo);	
	 return retorna_codigo;
}

int  Cadastro_Pessoa::Cadastro(void) {
	// Gravar arquivo  
	system("cls");
	char op;
	int codigo_cads;
	int idade_cads;
	string idade_txt;
	string nome_cads;
	string cpf_cads;
	string endereco_cads;
	string profissao_cads;
	string telefone_cads;
		
	codigo_cads = Busca_Codigo();
	setCodigo(codigo_cads);	
	
	cout<<"--------------------------------------------------"<<endl;	
	cout<<"Digite o NOME"<<endl;
	cout<<"--------------------------------------------------"<<endl; 
	nome_cads = Cadastro_Pessoa::Testa_string();
	setNome(nome_cads); 
	cout<<"**************************************************"<<endl<<endl;

	cout<<"--------------------------------------------------"<<endl;
	cout<<"Digite a IDADE"<<endl;    
	cout<<"--------------------------------------------------"<<endl;
	idade_cads = numero_string();
	setIdade(idade_cads);
	cout<<"**************************************************"<<endl<<endl;
	
	cout<<"--------------------------------------------------"<<endl;
	cout<<"Digite o CPF"<<endl;	   
	cout<<"--------------------------------------------------"<<endl;
	cpf_cads = Cadastro_Pessoa::Testa_string();
	setCpf(cpf_cads);
	cout<<"**************************************************"<<endl<<endl;

	cout<<"--------------------------------------------------"<<endl;
	cout<<"Digite o ENDERECO"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	endereco_cads = Cadastro_Pessoa::Testa_string();
	setEndereco(endereco_cads);
	cout<<"**************************************************"<<endl<<endl;

	cout<<"--------------------------------------------------"<<endl;
	cout<<"Digite a PROFISSAO"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	profissao_cads = Cadastro_Pessoa::Testa_string();
	setProfissao(profissao_cads);
	cout<<"**************************************************"<<endl<<endl;

	cout<<"--------------------------------------------------"<<endl;
	cout<<"Digite o TELEFONE"<<endl;
	cout<<"--------------------------------------------------"<<endl;
	telefone_cads = Cadastro_Pessoa::Testa_string();
	setTelefone(telefone_cads);
	cout<<"**************************************************"<<endl<<endl;

	do{
		cout << "Deseja realmente cadastrar esses dados? (s/n) : ";cin >> op;
	}while(op!= 'N' && op!= 'S' && op!= 'n' && op!= 's');	

	if(op == 'S' ||op == 's') {		
		ofstream Arquivo_Saida;
		Arquivo_Saida.open("Pessoa.txt",ios::app);// Abre o arquivo no fim
		Arquivo_Saida<<endl;
		Arquivo_Saida<<endl;
		Arquivo_Saida<<"-----------------------------------------------------------------"<<endl;
		Arquivo_Saida<<"	Formulario Individual "<<endl;
		Arquivo_Saida<<"-----------------------------------------------------------------"<<endl;
		Arquivo_Saida<<"Codigo       : " <<    getCodigo()   <<'\n';//<<endl;
		Arquivo_Saida<<"Nome         : " <<      getNome()   <<'\n';//<<endl;
		Arquivo_Saida<<"Idade        : " <<     getIdade()   <<'\n';//<<endl; 
		Arquivo_Saida<<"Cpf          : " <<       getCpf()   <<'\n';//<<endl; 
		Arquivo_Saida<<"Endereco     : " <<  getEndereco()   <<'\n';//<<endl; 
		Arquivo_Saida<<"Profissao    : " << getProfissao()   <<'\n';//<<endl; 
		Arquivo_Saida<<"telefone     : " <<  getTelefone()   <<'\n';//<<endl; 
		Arquivo_Saida<<"-----------------------------------------------------------------"<<endl;
		Arquivo_Saida<<"*****************************************************************"<<endl;
		Arquivo_Saida<<"-----------------------------------------------------------------"<<endl;
		Arquivo_Saida<<endl;
		Arquivo_Saida<<endl;
		Arquivo_Saida.close();
	}else{
		MessageBox(NULL,"Operação Cancelada!","Abortar!",MB_OK);
	}
	return EXIT_SUCCESS;
}

void Cadastro_Pessoa::Excluir(void){				
	ifstream Arquivo_Entrada;
	Arquivo_Entrada.open("Pessoa.txt");
	if(Arquivo_Entrada.is_open()){
		Arquivo_Entrada.close();	
		system("del Pessoa.txt");
		MessageBox(NULL,"o arquivo foi excluido com exito...","EXCLUSÃO",MB_OK);
	}else{
		Arquivo_Entrada.close();
		MessageBox(NULL,"O arquivo não pode ser excluido, pode não existir mais...","ERRO",MB_OK);
	}
}

void Cadastro_Pessoa::Menu(void){	
	char op;
	do{	
		do{
			system("cls");
			cout<<endl;
			cout<<"Cadastro e Consulta de Dados				           [S]obre "<<endl;
			cout<<"------------------------------------------------------------"<<endl;
			cout<<"------------------------------------------------------------"<<endl;
			cout<<"[1] - Cadastrar 			         			" <<endl;
			cout<<"[2] - Exibir todos os Registros (Prompt) 	" <<endl;
			cout<<"[3] - Exibir todos os Registros ( TXT  ) 	" <<endl;
			cout<<"[4] - Excluir	 		         			" <<endl;
			cout<<"[5] - Pesquisa Registro Individual			" <<endl;
			cout<<"[6] - Cadastrar Contas de Cartão         	" <<endl;
			cout<<"[C] - Inicia o DOS      			         	" <<endl;
			cout<<"[0] - Sair      			         			" <<endl;
			cout<<"------------------------------------------------------------"<<endl;
			cout<<"***************** Versao para MSDOS - 0.6 ******************"<<endl;
			cout<<"------------------------------------------------------------"<<endl<<endl;
			fflush(stdin);
			cout<<"Opcao : ";op = getche();
			fflush(stdin);
			
			if(op == 'c' || op == 'C' ){
				system("cls");
				system("call cmd");
			}
		
			if ( op==13){
				MessageBox(NULL,"Escolha uma opcao, por favor","ERRO - OPCAO",MB_OK);
			}
		}while(op=='\n');
		cout<<endl;
		
		switch(op){
			case '1':{	
				Cadastro();
			}break;
			case '2':{	
				Consultar();
			}break;
			case '3':{
				Abrir_TXT();
			}break;
			case '4':{
				Excluir();
			}break;
			case '5':{
				//MessageBox(NULL,"OPÇÃO 5 EM CONSTRUÇÃO AINDA, AGUARDE POR FAVOR!","Pesquisa Registro Individual",MB_OK);	
				Busca_Individual();
			}
			break;
			case '6':{}break;			
			case 's':{MessageBox(0,"Programador: Felipe Vieira Mota , Versão 0.6","Sobre o Software",MB_OK);}break;	
			case 'S':{MessageBox(0,"Programador: Felipe Vieira Mota , Versão 0.6","Sobre o Software",MB_OK);
				}		
			break;
		}
		system("cls");
	}while (op!='0');
}

bool Cadastro_Pessoa::excludeBadCaracters(char param){
	if(param=='\0' || param==8  || param=='0' || param=='-'
      || param=='='  || param=='+'|| param==' ' || param=='/'
 	  || param=='!'  || param=='@'|| param=='#' || param=='$'
  	  || param=='%'  || param=='¨'|| param=='&' || param=='('
	  || param==')'  || param=='_'|| param=='§' || param=='['
      || param==']'  || param=='{'|| param=='}' || param=='^'
	  || param=='º'  || param==' '|| param=='~' || param=='ª'
	  || param=='?'  || param=='°'|| param==';' || param==':'
	  || param=='.'  || param==','|| param=='<' || param=='>'
	  || param=='A'  || param=='B'|| param=='C' || param=='D'
	  || param=='E'  || param=='F'|| param=='G' || param=='H'
      || param=='I'  || param=='J'|| param=='K' || param=='L'
	  || param=='M'  || param=='N'|| param=='O' || param=='P'
	  || param=='Q'  || param=='R'|| param=='S' || param=='T'
	  || param=='U'  || param=='V'|| param=='W' || param=='X'
	  || param=='Y'  || param=='Z'|| param=='Ç' || param=='a'
      || param=='b'  || param=='c'|| param=='d' || param=='e'
	  || param=='f'  || param=='g'|| param=='h' || param=='i'
	  || param=='j'  || param=='k'|| param=='l' || param=='m'
	  || param=='n'  || param=='o'|| param=='p' || param=='q'
      || param=='r'  || param=='s'|| param=='t' || param=='u'
	  || param=='v'  || param=='w'|| param=='x' || param=='y'
	  || param=='z'  || param=='ç'|| param=='"' || param=='.'){
		return true;
	  }else{
	  	return false;
	  }
}
