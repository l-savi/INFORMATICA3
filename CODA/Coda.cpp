#include <iostream>
#include "Coda.h"

using namespace std;

bool Coda::isEmpty() {
    if(fine!=0) return false;
    return true;
}

bool Coda::isFull() {
    if (fine == size)  return true;
    return false;
}

bool Coda::push(int x) {
    if(!isFull()){
        vet[fine] = x;
        fine = (fine+1)%size;
        fine++;
        return true;
    }
    return false;
}

bool Coda::pop() {
    if(!isEmpty()){
        inizio = (inizio+1)%size;
        fine--;
        return true;
    }
    return false;
}

int Coda::top() {
    if(!isEmpty()) {
        return vet[inizio];
    }
    return 0;
}
