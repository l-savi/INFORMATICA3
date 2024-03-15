#include <iostream>
#include "Pila.h"
using namespace std;

bool Pila::isEmpty() 
{
    if(fine == 0) return true;
    return false;
}

bool Pila::isFull() 
{
    if(fine > size) return true;
    return false;
}

bool Pila::push(int x) 
{
    if(!isFull()) {
        vet[fine] = x;
        fine++;
        return true; 
    }
    return false;
}

bool Pila::pop() 
{
    if(!isEmpty()) {
        fine--;
        return true;
    }
    return false;
}

int Pila::top() 
{
    if(!isEmpty())
    {
        return vet[fine-1];
    }
    return -1;
}

void Pila::stampa() 
{
    for(int i = 0; i<fine; i++) cout<<vet[i]<<endl;
}