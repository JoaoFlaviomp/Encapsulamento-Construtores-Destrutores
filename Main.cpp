#include<iostream>
#include<stdio.h>
#include "String.h"

using namespace std;

int main() 
{
	String S;
    S.setString("SIN 141");
    S.imprimeString();
    
    S.digitaString();
    S.imprimeString();

    String T = S;
    //String T(S);
    T.imprimeString();

    cout << T.comprimento() << endl;
    
    return 0;
}