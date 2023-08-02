#ifndef STRING_H
#define STRING_H

class String
{
public:
	String(); // construtor padrao
    String(const char*); // construtor normal
    String(const String&); // construtor de copia
    ~String();
    void setString(const char*);
    char* getString();
    void digitaString();
	int comprimento();
    void imprimeString();
private:
	char* str;

};
#endif