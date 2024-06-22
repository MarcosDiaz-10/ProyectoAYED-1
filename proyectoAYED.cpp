#include<iostream>
using namespace std;
string segmentospatron1[20]={"000100","000000","000001","000010","010000","100000","000001","000010","110000","110000","xxxxxx","xxxxxx","xxxxxx","xxxxxx","xxxxxx","xxxxxx",};



class Segmento {
    public:
    string segmento;
    bool isUsed;

    Segmento() {
        segmento = "";
        isUsed = false;
    }

    Segmento(string entrada) {
        segmento = entrada;
        isUsed = false;
    }

    void changeUsed() {
        isUsed = !isUsed;
    }
    
};




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

    void next(Node<T> *&n) {
        if(n!= nullptr){
            n=n->next;
        }
    }
    void prev(Node<T> *&n) {
        if(n!= nullptr){
            n=n->prev;
        }
    }


    void add( T x) {
        Node<T> *p = new Node<T>();
        p-> payload = x;
        if(this->first == nullptr ){
            this->first = p;
            this->last = p;
            return;
        }
        this->last->next = p;
        p->prev=last;
        this->last =p;
    }

    
    
};

class Patron{
    public:
    string patronn ;
    string *posiblesSeg;
    int numPosiblesSegmentos;
    List<Segmento> *segEntrada;
   

    Patron (string p, string (&segmentosP)[],int numSegmentos){
        segEntrada = new List<Segmento>();
        this->patronn = p;
        this->numPosiblesSegmentos = numSegmentos;
        posiblesSeg=segmentosP;
    }
    

}; 
string arrSegmentos1[4] = {"111010","110110","111110","011110"};
string arrSegmentos2[4] = {"010100","110010","101101","000111"};
Patron arrPatrones[2] = {Patron("100000110000",arrSegmentos1,4), Patron("101100110100",arrSegmentos2,4)};


void devolverSegmentos( string p, int fila, string &seg1, string &seg2, string &seg3, string &seg4, string &patronColumna, string &patronFila ) {

    if( fila == 3 ) {
        patronFila = p;
        patronColumna = patronColumna + p[3];

    }
    if( fila < 3 ) {
            for (int i = 0; i < 5; i++)
            {
                if( i < 2 ) {
                    seg1 = seg1 + p[i];
                }
                if( i > 2 ) {
                    seg2 = seg2 + p[i];
                }
                if(i == 2 ) {
                    patronColumna = patronColumna + p[i];
                }
            }
            
        }    
        if( fila > 3 ) {
            for (int i = 0; i < 5; i++)
            {
                if( i < 2 ) {
                    seg3 = seg3 + p[i];
                }
                if( i > 2 ) {
                    seg4 = seg4 + p[i];
                }
                if(i == 2 ) {
                    patronColumna = patronColumna + p[i];
                }
            }
            
        } 
        
 }

int isPatron( string patron,  Patron arrPatrones[], int numPatrones){ 
    
    int patronEncontrado=-1;
    for (int i = 0; i < numPatrones; i++)
    {
        
        if(arrPatrones[i].patronn == patron){
            patronEncontrado=i+1;
            return patronEncontrado;
        }; 
    }
    return patronEncontrado;

}



void isPatronSegmento( Segmento seg1, Segmento seg2, Segmento seg3, Segmento seg4, Patron ArrPatrones[], int numPatrones) {

    for (int i = 0; i < numPatrones; i++)
    {
        for (int j = 0; j < ArrPatrones[i].numPosiblesSegmentos; j++)
        {
            if(ArrPatrones[i].posiblesSeg[j] == seg1.segmento) {
                ArrPatrones[i].segEntrada->add(seg1);
            } else if(ArrPatrones[i].posiblesSeg[j] == seg2.segmento) {
                ArrPatrones[i].segEntrada->add(seg2);
            } else if( ArrPatrones[i].posiblesSeg[j] == seg3.segmento) {
                ArrPatrones[i].segEntrada->add(seg3);
            } else if(ArrPatrones[i].posiblesSeg[j] == seg4.segmento) {
                ArrPatrones[i].segEntrada->add(seg4);
            }
        }
        
    }
    

}


class Letra {
    public:
    int numPatron;
    char letra;
    string segmento1 = "";
    string segmento2 = "";
    string segmento3 = "";
    string segmento4 = "";


    
    Letra() {
        numPatron = -1;    
        segmento1 = "-1";
        segmento2 = "-1";
        segmento3 = "-1";
        segmento4 = "-1";
    }
    
    void setPatron(int p) {
        numPatron = p;
    }

    void setPaquete(Segmento seg1, Segmento seg2, Segmento seg3, Segmento seg4) {
        segmento1 = seg1.segmento;
        segmento2 = seg2.segmento;
        segmento3 = seg3.segmento;
        segmento4 = seg4.segmento;
    }


};

List<Letra> entrada () {
    List<Letra> *paquetes = new List<Letra>();
    string digito;
    string seg1= "";
    string seg2 = "";
    string seg3 = "";
    string seg4 = "";
    string patron = "";
    string patronColumna="";
    string patronFila="";
    int j=1;
    Letra paqueteActual;


    do
    {
        cin >> digito;
        if(digito == "ENJOY") break;
        
        if( j<7) {
            devolverSegmentos(digito, j-1, seg1, seg2, seg3, seg4,patronColumna, patronFila);
            j++;
          }

        else{

            devolverSegmentos(digito, j-1, seg1, seg2, seg3, seg4,patronColumna, patronFila);
            patron = patronColumna + patronFila;
            Segmento segmento1 = Segmento(seg1);
            Segmento segmento2 = Segmento(seg2);
            Segmento segmento3 = Segmento(seg3);
            Segmento segmento4 = Segmento(seg4);


            int numPatronPaquete = isPatron(patron, arrPatrones,2);
            isPatronSegmento(segmento1,segmento2,segmento3,segmento4,arrPatrones,2);

            paqueteActual.setPatron(numPatronPaquete);
            paquetes->add(paqueteActual);
            
        }

    } while ( digito != "ENJOY");
    

    return *paquetes;
}

void segmentosUsados (Patron &patronLetra) {

    Node<Segmento> *s = patronLetra.segEntrada->first;

    while( s != nullptr) {
        s->payload.changeUsed();
        s = s->next;
    }
}


void backtracking( List<Letra> paquetes, Node<Letra> *p) {
    if( p == nullptr) {
        //Imprimir letras y retorno
        return;
    }

    Patron patronLetraActual = arrPatrones[p->payload.numPatron];
    Node<Segmento> *n = patronLetraActual.segEntrada->first;
    
    

    switch (p->payload.numPatron)
    {
    case 0:
        segmentosUsados(patronLetraActual);
        p->payload.letra = '0';
        backtracking(paquetes,p->next);
        
        break;
    case 3:
        segmentosUsados(patronLetraActual);
        p->payload.letra = '3'; 
        backtracking(paquetes,p->next);

        break;
    
    case 4:
           segmentosUsados(patronLetraActual);
        p->payload.letra = '4';
        backtracking(paquetes,p->next);

        break;
    
    case 5:
        segmentosUsados(patronLetraActual);
        p->payload.letra = '5';
        backtracking(paquetes,p->next);

        break;
    
    case 7:
           segmentosUsados(patronLetraActual);
        p->payload.letra = '7';
        backtracking(paquetes,p->next);

        break;
    
    case 9:
           segmentosUsados(patronLetraActual);
        p->payload.letra = '9';
        backtracking(paquetes,p->next);

        break;
    
    case '<':
           segmentosUsados(patronLetraActual);
        p->payload.letra = '<';
        backtracking(paquetes,p->next);

        break;
    
    case '>':   
           segmentosUsados(patronLetraActual);
        p->payload.letra = '>';
        backtracking(paquetes,p->next);

        break;
    
    case '@':   
           segmentosUsados(patronLetraActual);
        p->payload.letra = '@';
        backtracking(paquetes,p->next);

        break;
    
    case 'A ':
           segmentosUsados(patronLetraActual);
        p->payload.letra = 'A';
        backtracking(paquetes,p->next);

        break;
    
    case 'G':
           segmentosUsados(patronLetraActual);
        p->payload.letra = 'G';
        backtracking(paquetes,p->next);

        break;
    
    case 'H':
           segmentosUsados(patronLetraActual);
        p->payload.letra = 'H';
        backtracking(paquetes,p->next);

        break;
    
    case 'K':
           segmentosUsados(patronLetraActual);
        p->payload.letra = 'K';
        backtracking(paquetes,p->next);

        break;
    
    case 'L':
           segmentosUsados(patronLetraActual);
        p->payload.letra = 'L';
        backtracking(paquetes,p->next);

        break;
    
    case 'M':
           segmentosUsados(patronLetraActual);
        p->payload.letra = 'M';
        backtracking(paquetes,p->next);

        break;
    
    case 'N':
           segmentosUsados(patronLetraActual);
        p->payload.letra = 'N';
        backtracking(paquetes,p->next);

        break;
    
    case 'Q':
           segmentosUsados(patronLetraActual);
        p->payload.letra = 'Q'; 
        backtracking(paquetes,p->next);

        break;
    
    case 'R':
           segmentosUsados(patronLetraActual);
        p->payload.letra = 'R';
        backtracking(paquetes,p->next);

        break;
    
    case 'Y':
           segmentosUsados(patronLetraActual);
        p->payload.letra = 'Y';
        backtracking(paquetes,p->next);

        break;
    
    case 'Z':
           segmentosUsados(patronLetraActual);
        p->payload.letra = 'Z';
        backtracking(paquetes,p->next);

        break;
    
    case '[':
           segmentosUsados(patronLetraActual);
        p->payload.letra = '[';
        backtracking(paquetes,p->next);

        break;
    
    case ']':   
           segmentosUsados(patronLetraActual);
        p->payload.letra = ']';
        backtracking(paquetes,p->next);

        break;
    
    case 'a ':
        segmentosUsados(patronLetraActual);
        p->payload.letra = 'a';
        backtracking(paquetes,p->next);

        break;
    
    case 'b':
           segmentosUsados(patronLetraActual);
        p->payload.letra = 'b';
        backtracking(paquetes,p->next);

        break;
    
    case 'c':
           segmentosUsados(patronLetraActual);
        p->payload.letra = 'c'; 
        backtracking(paquetes,p->next);

        break;
    
    case 'd':
           segmentosUsados(patronLetraActual);
        p->payload.letra = 'd';
        backtracking(paquetes,p->next);

        break;
    
    case 'f':
           segmentosUsados(patronLetraActual);
        p->payload.letra = 'f';
        backtracking(paquetes,p->next);

        break;
    
    case 'h':
           segmentosUsados(patronLetraActual);
        p->payload.letra = 'h';
        backtracking(paquetes,p->next);

        break;
    
    case 'i':
           segmentosUsados(patronLetraActual);
        p->payload.letra = 'i';
        backtracking(paquetes,p->next);

        break;
    
   
    default:
        break;
    }



}







int main () {
    List<Letra> p;

    Node<Letra> *n;
    p = entrada();

    n = p.first;

    return 0;
}