#include <iostream>
using namespace std;

class Veiculo{
	
	private:
		string nome;
		
	public:
		Veiculo(const char *p){
			this->nome = p;
			cout << "O objeto " << nome << " foi criado" << endl;
		}
		
		~Veiculo(){
			cout << "O objeto " << nome << " foi destru�do" << endl;	
		}
		
};

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
	Veiculo *obj1 = new Veiculo("v1");
	Veiculo *obj2 = new Veiculo("v2");
	Veiculo *obj3 = new Veiculo("v3");
	
	delete obj3;
	delete obj2;
	delete obj1;

  return 0;
}
