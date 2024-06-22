#include<iostream>
using namespace std;
string segmentospatron1[20]={"000100","000000","000001","000010","010000","100000","000001","000010","110000","110000","xxxxxx","xxxxxx","xxxxxx","xxxxxx","xxxxxx","xxxxxx",};






template <typename T> class Node {
    public:
    T payload;
    Node <T>*prev;
    Node <T>*next;

    Node () {
        prev=next=nullptr;
    }

};


template <typename T> class List {
    public:
    Node<T> *first;
    Node<T> *last;

    List() {
        this->first=this->last=nullptr;
    }

    void next(Node<T> &*n) {
        if(n!= nullptr){
            n=n->next;
        }
    }
    void prev(Node<T> &*n) {
        if(n!= nullptr){
            n=n->prev;
        }
    }


    void add( T x) {
        Node<T> *p = new Node();
        p-> payload = x;
        if(this->first == nullptr ){
            this->first = p;
            this->last = p;
            return;
        }
        this->last.next = p;
        p->prev=last;
        this->last =p;
    }
    
};

class Patron{
    public:
    string patronn ;

    string *posiblesSeg;
   

    Patron (string p, string (&segmentosP)[]){
     this->patronn = p;
        posiblesSeg=segmentosP;
    }
    

}; 


void devolverSegmentos( string p, int fila, string &seg1, string &seg2, string &seg3, string &seg4, string &patronColumna, string &patronFila, string &patron ) {

    if( fila == 4 ) {
        patronFila = p;
        patronColumna = patronColumna + p[3];

    }
    if( fila < 4 ) {
            for (int i = 0; i < 5; i++)
            {
                if( i < 3 ) {
                    seg1 = seg1 + p[i];
                }
                if( i > 3 ) {
                    seg2 = seg2 + p[i];
                }
                if(i == 3 ) {
                    patronColumna = patronColumna + p[i];
                }
            }
            
        }    
        if( fila > 4 ) {
            for (int i = 0; i < 5; i++)
            {
                if( i < 3 ) {
                    seg3 = seg3 + p[i];
                }
                if( i > 3 ) {
                    seg4 = seg4 + p[i];
                }
                if(i == 3 ) {
                    patronColumna = patronColumna + p[i];
                }
            }
            
        } 
        
        if (fila == 7) {
            patron = patronColumna + patronFila;
        } 
 }

int isPatron( string patron,  Patron arrPatrones[]){ 
    


}

class Segmento {
    string segmento;
    bool estaUsado;

    Segmento(string entrada) {
        segmento = entrada;
    }
};

class Letra {
    string patron = "";
    string segmento1 = "";
    string segmento2 = "";
    string segmento3 = "";
    string segmento4 = "";

<<<<<<< HEAD
=======
template <typename T> class Node {
    public:
    T payload;
    Node <T>*prev;
    Node <T>*next;

    Node () {
        prev=next=nullptr;
    }

};


template <typename T> class List {
    public:
    Node<T> *first;
    Node<T> *last;

    List() {
        this->first=this->last=nullptr;
    }

    void next(Node<T> &*n) {
        if(n!= nullptr){
            n=n->next;
        }
    }
    void prev(Node<T> &*n) {
        if(n!= nullptr){
            n=n->prev;
        }
    }


    void add( T x) {
        Node<T> *p = new Node();
        p-> payload = x;
        if(this->first == nullptr ){
            this->first = p;
            this->last = p;
            return;
        }
        this->last.next = p;
        p->prev=last;
        this->last =p;
    }
    
};


void devolverSegmentos( string p, int fila, string &seg1, string &seg2, string &seg3, string &seg4, string patron ) {
    if( fila < 4 ) {
            for (int i = 0; i < 5; i++)
            {
                if( i < 3 ) {
                    seg1 = seg1 + p[i];
                }
                if( i > 3 ) {
                    seg2 = seg2 + p[i];
                }
            }
            
        }    
        if( fila > 4 ) {
            for (int i = 0; i < 5; i++)
            {
                if( i < 3 ) {
                    seg3 = seg3 + p[i];
                }
                if( i > 3 ) {
                    seg4 = seg4 + p[i];
                }
            }
            
        }    
}

class Segmento {
    string segmento;
    bool estaUsado;

    Segmento(string entrada) {
        segmento = entrada;
    }
};

class Letra {
    string patron;
    string segmento1;
    string segmento2;
    string segmento3;
    string segmento4;

>>>>>>> 62cee2db6f885260e1d83b4f5b0edad04edc10ee

    public:
    Letra() {
        patron = "0";
        for( int i = 0; i < 7; i++) {
            segmento1[i] = 0;
            segmento2[i] = 0;
            segmento3[i] = 0;
            segmento4[i] = 0;
        }
    }
    
    void setPatron(string p) {
        patron = p;
    }

    void setPaquete(string seg1, string seg2, string seg3, string seg4) {
        segmento1 = seg1;
        segmento2 = seg2;
        segmento3 = seg3;
        segmento4 = seg4;
    }


};

List<Letra> entrada () {
    List<Letra> *paquetes = new List<Letra>();
    string digito;
    string seg1;
<<<<<<< HEAD
    string seg2 = "";
    string seg3 = "";
    string seg4 = "";
    string patron = "";
    string patronColumna="";
    string patronFila="";
=======
    string seg2;
    string seg3;
    string seg4;
    string patron;

>>>>>>> 62cee2db6f885260e1d83b4f5b0edad04edc10ee
    int j=1;
    Letra paqueteActual;


    do
    {
        cin >> digito;
        if(digito == "ENJOY") break;
        
        if( j<7) {
<<<<<<< HEAD
            devolverSegmentos(digito, j-1, seg1, seg2, seg3, seg4,patronColumna, patronFila,patron);
            j++;
          }

        else{

            devolverSegmentos(digito, j-1, seg1, seg2, seg3, seg4,patronColumna, patronFila,patron);

=======
            devolverSegmentos(digito, j-1, seg1, seg2, seg3, seg4,patron);

        } else {
            devolverSegmentos(digito, j-1, seg1, seg2, seg3, seg4,patron);

>>>>>>> 62cee2db6f885260e1d83b4f5b0edad04edc10ee
            paquetes->add(paqueteActual);
            
        }

<<<<<<< HEAD
    } while ( digito != "ENJOY");
=======
    } while ( digito == "ENJOY");
>>>>>>> 62cee2db6f885260e1d83b4f5b0edad04edc10ee
    

    return *paquetes;
}

int main () {


    return 0;
}