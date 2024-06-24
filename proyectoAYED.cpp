#include<iostream>
using namespace std;
string segmentospatron1[20]={"000100","000000","000001","000010","010000","100000","000001","000010","110000","110000","000000","000000","010000","000000","000001","000010","000000","000000","000000","000000"}; //1 I T l |

string segmentospatron2[12]={"000110","100000","101001","010110","111010","100101","101011","010110","111010","110000","101011","000011"}; //6 B y E

string segmentospatron3[8]={"011010","100101","101001","010110","011010","110000","000011","010110"}; // 8 y S

string segmentospatron4[8]={"111010","110000","101010","000000","111010","100101","101010","000000"}; //F y P

string segmentospatron5[8]={"011000","100101","000111","000011","011011","100101","000000","000000"}; //2 y ?

string segmentospatron6[12]={"111010","001001","101011"," 011000","011010","100101","101001","010110","111010","110101","101011","010111"}; //D O y **

string segmentospatron7[8]={"011010","100100","101001","000110","000101","100000","010100","000010"}; //C y {

string segmentospatron8[8]={"000000","111010","001001","101000","010000","101010","000001","101010"}; //J y ]

string segmentospatron9[8]={"000011","000010","111010","100000","000001","000011","010000","110101"}; //p y q

string segmentospatron10[8]={"000010","000010","101010","010101","000010","000010","101010","000000"}; //n y r

string segmentospatron11[8]={"101010","010101","101001","010110","000011","000011","101010","010101"}; //W y m

string segmentospatron12[8]={"101001","010110","011010","100101","001001","000000","000000","100100"}; //X y \

string segmentospatron13[8]={"010101","000001","010101","001001","000010","000001","000110","001001"}; //k y x

string segmentospatron14[16]={"101010","010101","101001","010110","101010","010101","100100","011000","000010","000001","101001","010110","000010"," 000001","100100","011000"}; //U V u v

string segmentospatron15[8]={"000101","000000","010100","000000","000101","000000","010001","000000"}; //: y ;

string segmentospatron16[8]={"000001","000010","111001","110011","000001","000011","010011","110110"}; //e y g

string segmentospatron17[4]={"011010","100111","111001","010110"}; //0

string segmentospatron18[4]={"110000","111000","001001","010110"}; //3

string segmentospatron19[4]={"000001","101010","110000","111010"}; //4

string segmentospatron20[4]={"111011","110010","001001","010110"}; //5

string segmentospatron21[4]={"110000","110110","010101","000000"}; //7

string segmentospatron22[4]={"011010","100101","000001","011000"}; //9

string segmentospatron23[4]={"000001","100000","010000","000010"}; //<

string segmentospatron24[4]={"000011","000011","110000","110000"}; //=

string segmentospatron25[4]={"010000","000010","000001","100000"}; //>

string segmentospatron26[4]={"011000","100101","101001","010110"}; //@

string segmentospatron27[4]={"011010","100101","111010","110101"}; //A

string segmentospatron28[4]={"011010","100100","101001","010111"}; //G

string segmentospatron29[4]={"101010","010101","101010","010101"}; //H

string segmentospatron30[4]={"101010","011000","101010","001001"}; //K

string segmentospatron31[4]={"101010","000000","101011","000011"}; //L

string segmentospatron32[4]={"101110","011101","101010","010101"}; //M

string segmentospatron33[4]={"101011","010101","101010","110101"}; //N

string segmentospatron34[4]={"011010","100101","101001","011001"}; //Q

string segmentospatron35[4]={"111010","100101","101010","001001"}; //R

string segmentospatron36[4]={"101010","010101","000000","000000"}; //Y

string segmentospatron37[4]={"110000","110110","011011","000011"}; //Z

string segmentospatron38[4]={"010101","100000","010101","000010"}; //[


string segmentospatron39[4]={"000001","000010","011001","110111"}; //a

string segmentospatron40[4]={"101010","000000","101011","010110"}; //b

string segmentospatron41[4]={"000001","000011","101001","000011"}; //c

string segmentospatron42[4]={"000000","010101","101001","010111"}; //d

string segmentospatron43[4]={"000000"," 100100","000000","000000"}; //f

string segmentospatron44[4]={"101010","000000","101010","010101"}; //h

string segmentospatron45[4]={"000000","000000","000000","000000"}; //i

string segmentospatron46[4]={"000000","100010","001001","101000"}; //j

string segmentospatron47[4]={"000001","000010","101001","010110"}; //o

string segmentospatron48[4]={"000001","000011","010011","100110"}; //s

string segmentospatron49[4]={"000011","000011","000000","000110"}; //t

string segmentospatron50[4]={"000010","000001","101001","010110"}; //w

string segmentospatron51[4]={"000010","000001","000001","000000"}; //y

string segmentospatron52[4]={"000011","000011","000111","000011"}; //z

string segmentospatron53[4]={"010000","001010","000001","101000"}; //}

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


    Letra(int num, string seg1, string seg2, string seg3, string seg4, char let='-1') {
        numPatron = num;
        this->segmento1= seg1;
        this->segmento2= seg2;
        this->segmento3= seg3;
        this->segmento4= seg4;
        letra=let;
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
    int numLetras;
    List<Segmento> *segEntrada;
    Letra *letras;
   

    Patron (string p, string (&segmentosP)[],int numSegmentos,Letra (&letrasAsig)[], int numLetras){
        segEntrada = new List<Segmento>();
        this->patronn = p;
        this->numPosiblesSegmentos = numSegmentos;
        posiblesSeg=segmentosP;
        letras = letrasAsig;
        this->numLetras = numLetras;
    }
    Patron (string p, string (&segmentosP)[],int numSegmentos){
        segEntrada = new List<Segmento>();
        this->patronn = p;
        this->numPosiblesSegmentos = numSegmentos;
        posiblesSeg=segmentosP;
        
    }
}; 


Letra letrasPatron1[5] = { Letra(1,"000100","000000","000001","000010",'1'), Letra(1,"010000","100000","000001","000010",'I'), Letra(1,"110000","110000","000000","000000",'T'), Letra(1,"010000","000000","000001","000010",'l'),Letra(1,"000000","000000","000000","000000",'|') };
Letra letrasPatron2[3] = { Letra(2,"000110","100000","101001","010110",'6'), Letra(2,"111010","100101","101011","010110",'B'), Letra(2,"111010","110000","101011","000011",'E')};
Letra letrasPatron3[2] = { Letra(3,"011010","100101","101001","010110",'8'), Letra(3,"011010","110000","000011","010110",'S')};
Letra letrasPatron4[2] = { Letra(4,"111010","110000","101010","000000",'F'), Letra(4,"111010","100101","101010","000000",'P')};
Letra letrasPatron5[2] = { Letra(5,"011000","100101","000111","000011",'2'), Letra(5,"011011","100101","000000","000000",   '?')};
Letra letrasPatron6[3] = { Letra(6,"111010","001001","101011","011000",'D'), Letra(6,"011010","100101","101001","010110",   'O'),Letra(6,"111010","110101","101011","010111",'█')};
Letra letrasPatron7[2] = { Letra(7,"011010","100100","101001","000110",'C'), Letra(7,"000101","100000","010100","000010",   '{')};
Letra letrasPatron8[2] = { Letra(8,"000000","111010","001001","101000",'J'), Letra(8,"010000","101010","000001","101010",   ']')};
Letra letrasPatron9[2] = { Letra(9,"000011","000010","111010","100000",'p'), Letra(9,"000001","000011","010000","110101",   'q')};
Letra letrasPatron10[2] = { Letra(10,"000010","000010","101010","010101",'n'), Letra(10,"000010","000010","101010","000000", 'r')};
Letra letrasPatron11[2] = { Letra(11,"101010","010101","101001","010110",'W'), Letra(11,"000011","000011","101010","010101", 'm')};
Letra letrasPatron12[2] = { Letra(12,"101001","010110","011010","100101",'X'), Letra(12,"001001","000000","000000","100100", '/' )};
Letra letrasPatron13[2] = { Letra(13,"010101","000001","010101","001001",'k'), Letra(13,"000010","000001","000110","001001", 'x')};
Letra letrasPatron14[5] = { Letra(14,"101010","010101","101001","010110",'U'), Letra(14,"101010","010101","100100","011000",'V'), Letra(14,"000010","000001","101001","010110",'u'), Letra(14,"000010","000001","100100","011000",'v') };
Letra letrasPatron15[2] = { Letra(15,"000101","000000","010100","000000",':'), Letra(15,"000101","000000","010001","00000", ';')};
Letra letrasPatron16[2] = { Letra(16,"000001","000010","111001","110011",'e'), Letra(16,"000001","000011","010011","110110",'g') };



Patron arrPatrones[53] = { Patron("111111100100",segmentospatron1,20,letrasPatron1,5), Patron("100100111110",segmentospatron2,12,letrasPatron2,3),Patron("100100101110",segmentospatron3,8,letrasPatron3,2),Patron("100100011110",segmentospatron4,8,letrasPatron4,2),Patron("100010100010",segmentospatron5,8,letrasPatron5,2),Patron("100000110001",segmentospatron6,12,letrasPatron6,3),Patron("100000110000",segmentospatron7,8,letrasPatron7,2),Patron("100000100010",segmentospatron8,8,letrasPatron8,2),Patron("001010010001",segmentospatron9,8,letrasPatron9,2),Patron("001000011001",segmentospatron10,8,letrasPatron10,2),Patron("000111010101",segmentospatron11,8,letrasPatron11,2),Patron("000100000100",segmentospatron12,8,letrasPatron12,2),Patron("000010001010",segmentospatron13,8,letrasPatron13,2),Patron("000000110001",segmentospatron14,16,letrasPatron14,5),Patron("011011000000",segmentospatron15,8,letrasPatron15,2),Patron("001010110001",segmentospatron16,8,letrasPatron16,2),Patron("100100110101",segmentospatron17,4),Patron("101000100010",segmentospatron18,4),Patron("010010010010",segmentospatron19,4),Patron("101000100001",segmentospatron20,4),Patron("100100000100",segmentospatron21,4),Patron("100100101111",segmentospatron22,4),Patron("010001010000",segmentospatron23,4),Patron("001010000000",segmentospatron24,4),Patron("010001000001",segmentospatron25,4),Patron("100111101101",segmentospatron26,4),Patron("100010010001",segmentospatron27,4),Patron("100100110111",segmentospatron28,4),Patron("000100011111",segmentospatron29,4),Patron("001010011000",segmentospatron30,4),Patron("000000110000",segmentospatron31,4),Patron("001100010101",segmentospatron32,4),Patron("000100010101",segmentospatron33,4),Patron("100010110001",segmentospatron34,4),Patron("100110011110",segmentospatron35,4),Patron("000011101010",segmentospatron36,4),Patron("100100100100",segmentospatron37,4),Patron("100000101000",segmentospatron38,4),Patron("001010100001",segmentospatron39,4),Patron("000100111110",segmentospatron40,4),Patron("001000110000",segmentospatron41,4),Patron("000100101111",segmentospatron42,4),Patron("011111101110",segmentospatron43,4),Patron("000100011110",segmentospatron44,4),Patron("010111100100",segmentospatron45,4),Patron("000000100010",segmentospatron46,4),Patron("001000110001",segmentospatron47,4),Patron("001010110000",segmentospatron48,4), Patron("111111000100",segmentospatron49,4),Patron("000011010001",segmentospatron50,4),Patron("000011001010",segmentospatron51,4),Patron("001010100010",segmentospatron52,4),Patron("00000100001",segmentospatron53,4) };
 

void devolverSegmentos( string p, int fila, string &seg1, string &seg2, string &seg3, string &seg4, string &patronColumna, string &patronFila ) {

    if( fila == 3 ) {
        patronFila = p;
        patronColumna = patronColumna + p[2];

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
            patronEncontrado=i;
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


            int numPatronPaquete = isPatron(patron, arrPatrones,53);
            isPatronSegmento(segmento1,segmento2,segmento3,segmento4,arrPatrones,53);

            paqueteActual.setPatron(numPatronPaquete);
            paquetes->add(paqueteActual);
            seg1 ="";
            seg2 ="";
            seg3 ="";
            seg4 ="";
            patron = "";
            patronColumna = "";
            patronFila = "";
            j =1;
            paqueteActual=Letra();
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

void marcarDesmarcarSegmento( Node<Segmento> *&s) {
    s->payload.changeUsed();
}

string compararSegmentoValido(Node<Letra> *p) {
    string l = "";
    Patron patronActual = arrPatrones[p->payload.numPatron];

    for (int i = 0; i < patronActual.numLetras ; i++)
    {
        if(patronActual.letras[i].segmento1 == p->payload.segmento1 && patronActual.letras[i].segmento2 == p->payload.segmento2 && patronActual.letras[i].segmento3 == p->payload.segmento3 && patronActual.letras[i].segmento4 == p->payload.segmento4 ){
            l = patronActual.letras[i].letra;
            return l;
        }
    }
    return l;
}


void backtrackingSementos( Node<Letra> *&p,Node<Segmento> *firstNode, Node<Segmento> *n,  bool &ifExistLetra ,int numSeg = 1) {
    
    if ( n == nullptr ) {
        return;
    }

    if(ifExistLetra){
        return;
    }

    n = firstNode;
    while (n != nullptr)
    {
        if ( n->payload.isUsed ) {
            n = n->next;
            continue;
        }
        if(numSeg == 1 ){
            marcarDesmarcarSegmento(n);
            p->payload.segmento1 = n->payload.segmento;
            backtrackingSementos(p,firstNode,n, ifExistLetra,numSeg+1);
            marcarDesmarcarSegmento(n);
            p->payload.segmento1 = "-1";
        }
        if(numSeg == 2 ){
            marcarDesmarcarSegmento(n);
            p->payload.segmento2 = n->payload.segmento;
            backtrackingSementos(p,firstNode,n, ifExistLetra,numSeg+1);
            marcarDesmarcarSegmento(n);
            p->payload.segmento2 = "-1";
        }
        if(numSeg == 3 ){
            marcarDesmarcarSegmento(n);
            p->payload.segmento3 = n->payload.segmento;
            backtrackingSementos(p,firstNode,n, ifExistLetra,numSeg+1);
            marcarDesmarcarSegmento(n);
            p->payload.segmento3 = "-1";
        }
        if(numSeg == 4 ){
           marcarDesmarcarSegmento(n);
            p->payload.segmento4 = n->payload.segmento;
            backtrackingSementos(p,firstNode,n, ifExistLetra,numSeg+1);
            marcarDesmarcarSegmento(n);
            p->payload.segmento4 = "-1";
        }
        if(numSeg == 5 ){
            string l = compararSegmentoValido(p);
            if( p->payload.letra != l[0] && l != "") {
                p->payload.letra = l[0];
                ifExistLetra = true;
                return;
            }

            return;
        }
        n = n->next;
    }
    
    


}

void backtracking( List<Letra> paquetes, Node<Letra> *p) {
    if( p == nullptr) {
        Node<Letra> *pActual = paquetes.first;
        while (pActual!=nullptr)
        {
            cout << pActual->payload.letra;
            pActual = pActual->next;
        }
        
        return;
    }

    Patron patronLetraActual = arrPatrones[p->payload.numPatron];
    Node<Segmento> *n = patronLetraActual.segEntrada->first;
  

   
    if ( p->payload.numPatron + 1 > 16) {
        switch (p->payload.numPatron + 1)
        {
        case 17:
            segmentosUsados(patronLetraActual);
            p->payload.letra = '0';
            backtracking(paquetes,p->next);
            
            break;
        case 18:
            segmentosUsados(patronLetraActual);
            p->payload.letra = '3'; 
            backtracking(paquetes,p->next);

            break;
        
        case 19:
            segmentosUsados(patronLetraActual);
            p->payload.letra = '4';
            backtracking(paquetes,p->next);

            break;
        
        case 20:
            segmentosUsados(patronLetraActual);
            p->payload.letra = '5';
            backtracking(paquetes,p->next);

            break;
        
        case 21:
            segmentosUsados(patronLetraActual);
            p->payload.letra = '7';
            backtracking(paquetes,p->next);

            break;
        
        case 22:
            segmentosUsados(patronLetraActual);
            p->payload.letra = '9';
            backtracking(paquetes,p->next);

            break;
        
        case 23:
            segmentosUsados(patronLetraActual);
            p->payload.letra = '<';
            backtracking(paquetes,p->next);

            break;

        case 24:
            segmentosUsados(patronLetraActual);
            p->payload.letra = '=';
            backtracking(paquetes,p->next);

            break;
        
        case 25:   
            segmentosUsados(patronLetraActual);
            p->payload.letra = '>';
            backtracking(paquetes,p->next);

            break;
        
        case 26:   
            segmentosUsados(patronLetraActual);
            p->payload.letra = '@';
            backtracking(paquetes,p->next);

            break;
        
        case 27:
            segmentosUsados(patronLetraActual);
            p->payload.letra = 'A';
            backtracking(paquetes,p->next);

            break;
        
        case 28:
            segmentosUsados(patronLetraActual);
            p->payload.letra = 'G';
            backtracking(paquetes,p->next);

            break;
        
        case 29:
            segmentosUsados(patronLetraActual);
            p->payload.letra = 'H';
            backtracking(paquetes,p->next);

            break;
        
        case 30:
            segmentosUsados(patronLetraActual);
            p->payload.letra = 'K';
            backtracking(paquetes,p->next);

            break;
        
        case 31:
            segmentosUsados(patronLetraActual);
            p->payload.letra = 'L';
            backtracking(paquetes,p->next);

            break;
        
        case 32:
            segmentosUsados(patronLetraActual);
            p->payload.letra = 'M';
            backtracking(paquetes,p->next);

            break;
        
        case  33:
            segmentosUsados(patronLetraActual);
            p->payload.letra = 'N';
            backtracking(paquetes,p->next);

            break;
        
        case 34:
            segmentosUsados(patronLetraActual);
            p->payload.letra = 'Q'; 
            backtracking(paquetes,p->next);

            break;
        
        case 35:
            segmentosUsados(patronLetraActual);
            p->payload.letra = 'R';
            backtracking(paquetes,p->next);

            break;
        
        case 36:
            segmentosUsados(patronLetraActual);
            p->payload.letra = 'Y';
            backtracking(paquetes,p->next);

            break;
        
        case 37:
            segmentosUsados(patronLetraActual);
            p->payload.letra = 'Z';
            backtracking(paquetes,p->next);

            break;
        
        case 38:
            segmentosUsados(patronLetraActual);
            p->payload.letra = '[';
            backtracking(paquetes,p->next);

            break;
        
        
        case 39:
            segmentosUsados(patronLetraActual);
            p->payload.letra = 'a';
            backtracking(paquetes,p->next);

            break;
        
        case 40:
            segmentosUsados(patronLetraActual);
            p->payload.letra = 'b';
            backtracking(paquetes,p->next);

            break;
        
        case 41:
            segmentosUsados(patronLetraActual);
            p->payload.letra = 'c'; 
            backtracking(paquetes,p->next);

            break;
        
        case 42:
            segmentosUsados(patronLetraActual);
            p->payload.letra = 'd';
            backtracking(paquetes,p->next);

            break;
        
        case 43:
            segmentosUsados(patronLetraActual);
            p->payload.letra = 'f';
            backtracking(paquetes,p->next);

            break;
        
        case 44:
            segmentosUsados(patronLetraActual);
            p->payload.letra = 'h';
            backtracking(paquetes,p->next);

            break;
        
        case 45:
            segmentosUsados(patronLetraActual);
            p->payload.letra = 'i';
            backtracking(paquetes,p->next);

            break;
        case 46:
            segmentosUsados(patronLetraActual);
            p->payload.letra = 'j';
            backtracking(paquetes,p->next);

            break;
        case 47:
            segmentosUsados(patronLetraActual);
            p->payload.letra = 'o';
            backtracking(paquetes,p->next);

            break;
        case 48:
            segmentosUsados(patronLetraActual);
            p->payload.letra = 's';
            backtracking(paquetes,p->next);

            break;
            
        case 49:
            segmentosUsados(patronLetraActual);
            p->payload.letra = 't';
            backtracking(paquetes,p->next);

            break;
            
        case 50:
            segmentosUsados(patronLetraActual);
            p->payload.letra = 'w';
            backtracking(paquetes,p->next);

            break;
        case 51:
            segmentosUsados(patronLetraActual);
            p->payload.letra = 'y';
            backtracking(paquetes,p->next);

            break;
        case 52:
            segmentosUsados(patronLetraActual);
            p->payload.letra = 'z';
            backtracking(paquetes,p->next);

            break;
        case 53:
            segmentosUsados(patronLetraActual);
            p->payload.letra = '}';
            backtracking(paquetes,p->next);

            break;
            
        
    
        default:
            segmentosUsados(patronLetraActual);
            p->payload.letra = '_';
            backtracking(paquetes,p->next);
            break;
        }
    } else {
        bool consiguioLetra = false;
        backtrackingSementos(p,n,n,consiguioLetra,1);
        backtracking(paquetes,p->next);
    }

}







int main () {
    List<Letra> p;

    Node<Letra> *n;
    p = entrada();


    backtracking(p,p.first);

    return 0;
}