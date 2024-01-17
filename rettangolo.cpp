#include<iostream>
#include<cmath>
using namespace std;

class Rettangolo {
    private:
        double base;
        double altezza;

    public:
    	
		Rettangolo () {
			base=1;
			altezza=1; 							//costuttore
        }
        
		Rettangolo (float a, float b){
			base=a;
			altezza=b;
		}
		
		int getbase ()
        {
            return base;
        }

        int getaltezza()
        {
            return altezza;
        }
        
		void setbase(int n)
        {
            base=n;
        }
        void setaltezza(int n)
        {
            altezza=n;
        }
		
		double Perimentro (void)
		{
			return altezza*2 + base*2;
		}
		
		double Area (void)
		{
			return base*altezza;
		}
		
		double diagonale (void)
		{
			return sqrt (base*base)+(altezza*altezza);
		}
        
		void stampa()
        {
            cout << base << endl;
            cout << altezza << endl;
			cout << calcPerimentro () << endl;
			cout << calcArea ()<< endl;
			cout << calcDiagonale ()<< endl;
        }
  
};

int main ()
{
    Rettangolo R1;
    Rettangolo R2;
    
    R1.setbase(5);
    R1.setaltezza(7);

    R1.stampa();

}
