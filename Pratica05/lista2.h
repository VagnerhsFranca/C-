
using namespace std;

template <class T>
class Lista {
private:
// itens da lista, capacidade e tamanho atual
    int capacidade;
    int n_elementos;

    typedef struct{
        int idx;
        T dado;
        No *prox;
    }No;

    typedef struct{
        No *inicio;

    }lista;

public:
Lista(int cap) {
// iniciliza��o do array, capacidade e tamanho
    capacidade = cap;
    n_elementos = 0;
}
~Lista() {}
void adiciona (const T & item) {
// adiciona um item ao final da lista; lan�a �Lista cheia� caso cheia

}
T pega(int idx) {
// pega um item pelo indice (come�a em 1);
// lan�a �Item inv�lido� se posi��o inv�lida
}

void insere (int idx, const T & item) {
// insere um item na posi��o indicada (a partir de 1).
// lan�a �Lista cheia� caso cheia
// lan�a �Item inv�lido� se posi��o inv�lida
// desloca itens existentes para a direita
}
void remove(int idx) {
// remove item de uma posi��o indicada
// lan�a �Item inv�lido� se posi��o inv�lida
// desloca itens para a esquerda sobre o item removido
}
void exibe() {
}
int tamanho() {
// retorna a quantidade de itens atualmente na lista
    return n_elementos;
}
};
