#ifndef CONTATORE_H
#define CONTATORE_H

class Contatore{
    protected: 
        int valore;
        int passo;
    
    public:
        Contatore(int valore = 0, int passo = 1){
            this -> valore = valore;
            this -> passo = passo;
        }
        ~Contatore();
        int getValore();
        void setValore(int);
        int getPasso();
        void setPasso(int);
        void reset();
        void inc();
        void dec();
        void stampa();
};

#endif
