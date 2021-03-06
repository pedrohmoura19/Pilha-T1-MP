#include <iostream>

class ElementoPilha{
    public:
        int dado;
        ElementoPilha *seguinte;
};

class Pilha{
    private:
        ElementoPilha *topo;
        int tamanho;        

    public:
        void Push(Pilha *pilha, ElementoPilha *elemento);
        void Pop(Pilha *pilha);
        ElementoPilha Top(Pilha *pilha);

};