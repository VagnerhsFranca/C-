using namespace std;

template <class T>
class Lista {
private:
// itens da lista, capacidade e tamanho atual
    T * itens;
    int capacidade;
    int tam;
    int posFinal;
public:
Lista(int cap) {
// iniciliza��o do array, capacidade e tamanho
    this->capacidade = cap+1;
    this->itens = new T[capacidade];
    this->tam = 0;
    this->posFinal = 1;
}
~Lista() {
//destrui��o do array
    delete [] itens;
}
void adiciona (const T & item) {
// adiciona um item ao final da lista; lan�a �Lista cheia� caso cheia
    if(posFinal < capacidade){
        itens[posFinal] = item;
        ++posFinal;
        ++tam;
    }else{
        throw "Lista cheia";
    }
}
T pega(int idx) {
// pega um item pelo indice (come�a em 1);
// lan�a �Item inv�lido� se posi��o inv�lida
    if(tam > 0){
        if(idx <= capacidade || idx >= 1){
            return itens[idx];
        }else{
            throw "Item invalido";
        }
    }else{
        throw "Lista vazia";
    }
}
void insere (int idx, const T & item) {
    if(tam < capacidade){

            if(idx > capacidade || idx < 1){
                throw "Item invalido";
            }else{
                for(int i = posFinal; i >= idx; i--){
                    itens[i + 1] = itens[i];
                }
                itens[idx] = item;
                ++tam;
                ++posFinal;
            }

    }else{
        throw "Lista cheia";
    }
}
void remove(int idx) {
// remove item de uma posi��o indicada
// lan�a �Item inv�lido� se posi��o inv�lida
// desloca itens para a esquerda sobre o item removido
    if(tam > 0){
        if(idx > capacidade || idx < 1){
            throw "Item invalido";
        }else{
            for(int i=idx; i < capacidade; i++){
                itens[i] = itens[i+1]; //recebe o que havia na posicao a diante
            }
        }
    --tam;
    }else{
        throw "Fila vazia";
    }
}
void exibe() {
// exibe os itens da saida padr�o separados por espa�os
    for(int i=1; i < capacidade; i++){
        cout << itens[i] << " ";
    }
    cout << endl;
}
int tamanho() {
// retorna a quantidade de itens atualmente na lista
    return tam;
}
};
