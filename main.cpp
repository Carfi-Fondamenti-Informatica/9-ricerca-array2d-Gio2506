#include <iostream>
#include "lib.h"

using namespace std;

int main() {
char bid [10][20];
for (int i=0;i<10;i++) {
    char nome[20];
    cout << "inserisci" << " " << "nome";
    cin >> nome;
    bid[i][20] = nome[20];
}

char mono[20];
cin>>mono ;
ArrayNomi (bid,mono);


    return 0;
}
