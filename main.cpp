#include <iostream>
#include "lib.h"

using namespace std;

int ArrayNomi (char bid[10][20], char nome[]);



int main() {
    char bid [10][20]={0};
    char nome [20]={0};

    cout<<"inserisci i 10 nomi"<<endl;
    for (size_t i=0; i<10;i++)
        cin >>bid[i];
    cout <<"inserisci nome da cercare "<<endl;
    nome[20];
    for ( int j=0; j<20;j++)
        nome[j];
    cin>>nome;
    int posizione= ArrayNomi (bid,nome);
    if (posizione >= 0){
        cout<< " presente nella posizione="<< posizione<< endl;
    }else{
        cout << "non presente"<< endl;
    }
}

