#include <iostream>

#include "VigenereAscii.h"
using namespace std;

int main()
{
    VigenereAscii a;
    string mensaje="No te rindas";//:3
    string espacios(' ',87);
    string alfabeto="�������������������������������� !\"#$%&'()*+,'./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_�abcdefghijklmnopqrstuvwxyz{|}~ �������������������������������׃�����Ѫ��"+espacios;
    string alfabetoPrueba=" !\"#$%&'()*+,'./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_�abcdefghijklmnopqrstuvwxyz{|}~ �������������������������������׃�����Ѫ��";
    cout<<alfabetoPrueba<<endl;
    a.setAlfabeto(alfabeto);
    cout << a.cifrado(mensaje) << endl;
    a.setAlfabeto(alfabetoPrueba);
    cout << a.cifrado(mensaje) << endl;


    return 0;
}
