#include <iostream>
#include <string.h>

using namespace std;


class Contato

{

	private:

		string nome;

		int idade;


    public:

    	Contato(string nome, int idade)

    	{

			this->nome = nome;

			this->idade = idade;

		}

		void setNome(string nome)

		{

			this->nome = nome;

		}

		void setIdade(int idade)

		{

			this->idade = idade;

		}

		string getNome()

		{

			return this->nome;

		}

		int getIdade()

		{

			return this->idade;

		}

		

		string getContato()

		{

			return this->nome;

			return to_string(this->idade);

		}

}


int main(int argc, char** argv)

{

	int inc;

	int qtmaiores = 0;

	int maioridade = 0;

	Contato* maisvelho;

	

	Contato *contatos[10]

	for(int i = 0; i < 10; i++)

		{

			contatos[i] -> new contato;

			cin >> contatos[i] -> setNome;

			cin >> contatos[i] -> setIdade;

		}

		

		for (int i = 0; i < 10; i++)

		{

		inc += contatos[i] -> idade;

		

		if(contatos[i] -> idade > 18)

		{

			qtmaiores++;

		}

		

		if(contatos[i] -> idade > maioridade)

		{

			maioridade = contatos[i] -> idade;

	cout << "Média: " << idademedia;	}

cout << "Média: " << idademedia;		}

		

		int idademedia = inc / 10;

		

cout << "Média: " << idademedia;		cout << "Média: " << idademedia;

		cout << "Maiores de idade são: " << qtmaiores;

		

		for (int i = 0; i < 10; i++)

		{

			if(contatos[i] -> idade > idademedia)

			{

				contatos[i] -> getNome();

			}

			

			if(contatos[i] -> idade == maioridade)

			{

				contatos[i] -> getContato();

			}

		}

}


