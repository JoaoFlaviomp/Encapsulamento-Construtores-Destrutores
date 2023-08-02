#include <iostream>
#include <string.h>
#include <stdio.h>
#include "String.h"

using namespace std;

    String :: String()
    {
        cout << "Construtor padrao" << endl;
        str = new char[1];
        str[0] = '\0';
    }

    String :: String(const char* s)
    {
        cout << "Construtor normal" << endl;
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    String :: String(const String& obj)
    {
        cout << "Construtor de copia" << endl;
        str = new char[strlen(obj.str) + 1];
        strcpy(str, obj.str);
    }

    String :: ~String()
    {
        cout << "Destrutor" << endl;
        delete [] str;
    }

    void String :: setString(const char* s)
    {
        delete [] str;
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    char* String :: getString()
    {
        return str;
    }

    void String :: digitaString()
    {
        char s[1000];
        printf("Digite sua string: \n");
        //cin.ignore();
        cin.getline(s, 1000);

        delete [] str;
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    int String :: comprimento()
    {
        return strlen(str);
    }
    
    void String :: imprimeString()
    {
        printf("%s\n", str);
        // cout << str << endl;
    }

