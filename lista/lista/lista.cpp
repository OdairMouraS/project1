// lista.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <list>
#include<string>
#include<ctime>

using namespace std;
int main()
{
	list <string> alunos,prof;
	list<string>::iterator it;
	srand(time(NULL));

	string Naluno;
	alunos.push_front("Mark");
	alunos.push_front("Ryan");
	alunos.push_front("Lucy");
	alunos.push_front("Caio");
	alunos.push_front("Denis");
	alunos.push_front("Maria");

	prof.push_front("CU");
	prof.push_front("CUZIN");
	prof.push_front("CUZON");
	prof.push_front("CULAO");
	


	alunos.merge(prof);
	
	

	for (int i = 0; i <= 6; i++) {
		cout << "> " << alunos.front() << endl;
		alunos.pop_front();

	}
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
