/*
*	Treinando Orientação a objetos em C++
*	Ultilizando o método de criar uma classe em arquivos separados
*	como uma biblioteca
*
* 	Cadastro de pessoas em C++
*
* 	Arquivo     	: "Cadastro_Pessoa.h"
* 	Versão 0.5  	: Teste
* 	Programador 	: Felipe Vieira Mota
* 	Curso		 	: Bacharelado em Sistemas de Informação, Faculdade Fortec, 3° para o 4° Semestre.
* 	Local 	  		: São Vicente , São Paulo , Brasil.
* 	Data        	: 25/07/2015, Sábado
* 	Horário	  		: 23:56, noite.
*/

#ifndef CADASTRO_PESSOA_H 
#define CADASTRO_PESSOA_H
#include <iostream>
#include <string.h>
#include <windows.h>
using namespace std;

class Cadastro_Pessoa{
	public:	
		int	getCodigo(void);
		int getIdade(void);
		string getNome(void);
		string getCpf(void);
		string getEndereco(void);
		string getProfissao(void);
		string getTelefone(void);
		voidsetCodigo(int numero);
		void setNome(string nome_pessoa);
		void setIdade(int idade_pessoa);
		void setCpf(string cpf_pessoa);
		void setEndereco(string endereco_pessoa);
		void setProfissao(string profissao_pessoa);
		void setTelefone(string telefone_pessoa);
		void setCodigo(int codigo_pessoa);
		int  Cadastro(void);
		int  numero_string(void);
		bool Busca_Individual(void);		
		void Consultar(void);
		void Abrir_TXT(void);
		void Menu(void);
		void Excluir(void);
		int	 Busca_Codigo(void);
		string Testa_string(void);
		bool excludeBadCaracters(char param);

	protected:
		int codigo;
		int idade;
		string nome;
		string cpf;
		string endereco;
		string profissao;
		string telefone;
};
#endif

