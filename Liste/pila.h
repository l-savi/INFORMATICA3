#ifndef PILA_H
#define PILA_H

class Pila 
{
    private:
        int *vet;
        int size;
        int fine;
    
    public:
        Pila(int size = 10)
        {
            vet = new int[size];
            fine = 0;
        }

        bool isEmpty();
        bool isFull();
        bool push(int);
        bool pop();
        int top();
        void stampa();
};
#endif