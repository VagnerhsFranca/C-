#include <iostream>
using namespace std;

class Veiculo{
	
	private:
		string nome;
		int num_rodas;
		
	public:
		Veiculo(const char *p){
			this->nome = p;
			cout << "O objeto " << nome << " foi criado" << endl;
		}
		
		~Veiculo(){
			cout << "O objeto " << nome << " foi destru�do" << endl;	
		}

		void setNumRodas(int x);
		int getNumRodas();
};

void Veiculo::setNumRodas  (int x){
	this->num_rodas = x;
}

int Veiculo::getNumRodas(){
	return num_rodas;
}

int main()
{
	setlocale(LC_ALL, "portuguese");
 cout << "Primeira aplica��o C++" <<endl;
 
// Veiculo veiculo1("v1");
//{
//	Veiculo veiculo2("v2");
//	{
//		Veiculo veiculo3("v3");
//	}
//}
	Veiculo *obj4 = new Veiculo("v4");
	Veiculo *obj5 = new Veiculo("v5");
	Veiculo *obj6 = new Veiculo("v6");
	
	delete obj6;
	delete obj5;
	delete obj4;
	
	cout << endl;
	
	Veiculo *obj7 = new Veiculo("v7");
	Veiculo *obj8 = new Veiculo("v8");
	Veiculo *obj9 = new Veiculo("v9");
	
	obj7->setNumRodas(2);
	obj8->setNumRodas(4);
	obj9->setNumRodas(6);
	
	cout << "v7: " << obj7->getNumRodas() << "rodas" << endl;
	cout << "v8: " << obj8->getNumRodas() << "rodas" << endl;
	cout << "v9: " << obj9->getNumRodas() << "rodas" << endl;

  return 0;
}

