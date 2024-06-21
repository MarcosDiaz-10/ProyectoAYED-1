#include<iostream>
using namespace std;



class letra {
    int patron;
    char paquete[7][5];

    public:
    letra() {
        patron = 0;
        for( int i = 0; i < 7; i++) {
            for( int j=0; j < 5; j++) {
                paquete[i][j] = 0;
            }
        }
    }
    
    void setPatron(int p) {
        patron = patron;
    }

    void setPaquete(string p, int fila) {
        for( int i = 0; i < 5; i++) {
            paquete[fila][i] = p[i];
        }
    }

    void getPaquetes() {
        for( int j = 0; j < 7; j++) {
            for( int t = 0; t < 5; t++){
                cout << paquete[j][t];
            }
            cout<< endl;
        }
    }

};

void entrada( letra *(&paquetes)){
    int numPaquetes = 0;
    paquetes = new letra[numPaquetes];
    letra *auxPaquetes = new letra[numPaquetes];
    string digito;
    string seg1;
    string seg2;
    string seg3;
    string seg4;
    string patron;

    int j=1;
    Letra paqueteActual;


    do
    {
        cin >> digito;
        if( digito == "ENJOY") return;

        else if( j < 7 ) {

            paqueteActual.setPaquete(digito,j - 1);
            j++;
        } else {

            paqueteActual.setPaquete(digito,j - 1);

            delete []auxPaquetes;
            auxPaquetes = new letra[numPaquetes++];//aumentar afuera
            for( int i = 0; i < numPaquetes-1; i++) {// cuando se aumenta numpaquetes
                auxPaquetes[i] = paquetes[i];
            }

            auxPaquetes[numPaquetes - 1] = paqueteActual; 
            
            delete []paquetes;
            paquetes = new letra[numPaquetes];
            for( int i = 0; i < numPaquetes; i++) {
                paquetes[i] = auxPaquetes[i];
            }
            paqueteActual = letra();
            j = 1;
            continue;

        }

        
     
    } while (digito != "ENJOY");
    


}




int main(){

    letra *paquetes;
    entrada(paquetes);

    for( int i = 0; i < 2; i++){
        paquetes[i].getPaquetes();
    }

}