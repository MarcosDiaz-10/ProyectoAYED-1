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
                paquete[i][j] = ' ';
            }
        }
    }
    
    void setPatron(int p) {
        patron = p;
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
            cout<< "paquete " << j << endl;
        }
    }
    
    int getPatron () {
        return patron;
    }

};

class Patron {
   public:
   string patrones;
   //-> arreglo de SegmetosPosibles para el patron
   // -> lista de segmentosEntrada del patron
   Patron(string p){
        patrones = p;
   };

   

};


//Patron arrPatrones[55]
 bool isPatron (char arrActual[], Patron arrPatrones[], letra paqueteActual) {
    string patronActual="", patronComparar="";
    bool isPatron= false;

    for(int i=0;i<27;i++){
        for (int j = 0; j < 7; j++)
        {
            patronActual += arrPatrones[i].patrones[j];
            patronComparar += arrActual[j];
            
            if( j == 6 ) {
                if( patronActual == patronComparar ) {
                    paqueteActual.setPatron(j);
                    isPatron=true;
                    return isPatron;
                }        
            }
        }
         patronActual = "";
         patronComparar = "";

    }
    return isPatron;
}



void entrada( letra *(&paquetes)){
    int numPaquetes = 0;
    paquetes = new letra[numPaquetes];
    letra *auxPaquetes = new letra[numPaquetes];
    char *patronActual = new char[7];
    string digito;

    int j=1;
    letra paqueteActual;
    do
    {
        cin >> digito;
        if( digito == "ENJOY") return;

        if( j < 7 ) {

            paqueteActual.setPaquete(digito,j - 1);
            patronActual[j - 1] = digito[2];
            j++;
        } else {

            patronActual[j - 1] = digito[2];
            paqueteActual.setPaquete(digito,j - 1);

            bool ifPatron = isPatron(patronActual,arrPatrones,paqueteActual);

            if( !ifPatron ) continue;

            delete []auxPaquetes;
            numPaquetes=numPaquetes+1;
            auxPaquetes = new letra[numPaquetes];
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

    paquetes[1].getPaquetes();
    paquetes[1].getPatron();

    delete []paquetes;
}