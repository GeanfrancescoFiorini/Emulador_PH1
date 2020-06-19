#include <iostream> // Biblioteca padrão do c++
#include <string> // Biblioteca para utilização de strings
#include <fstream> // Biblioteca para trabalhar com arquivos txt
#include <bits/stdc++.h> // Biblioteca utilizada para transformar string em array de char

using namespace std; // pra facilitar o trabalho

void lugarmem(char A, char B, int &C){ //Converte os valores hexadecimais divididos para int para trabalhar
    int valA, valB;
    switch(A)
    {
        case '0':
            valA = 0;
            break;
        case '1':
            valA = 16;
            break;
        case '2':
            valA = 32;
            break;
        case '3':
            valA = 48;
            break;
        case '4':
            valA = 64;
            break;
        case '5':
            valA = 80;
            break;
        case '6':
            valA = 96;
            break;
        case '7':
            valA = 112;
            break;
        case '8':
            valA = 128;
            break;
        case '9':
            valA = 144;
            break;
        case 'A':
            valA = 160;
            break;
        case 'B':
            valA = 176;
            break;
        case 'C':
            valA = 192;
            break;
        case 'D':
            valA = 208;
            break;
        case 'E':
            valA = 224;
            break;
        case 'F':
            valA = 240;
            break;
    }
    switch(B)
    {
        case '0':
            valB = 0;
            break;
        case '1':
            valB = 1;
            break;
        case '2':
            valB = 2;
            break;
        case '3':
            valB = 3;
            break;
        case '4':
            valB = 4;
            break;
        case '5':
            valB = 5;
            break;
        case '6':
            valB = 6;
            break;
        case '7':
            valB = 7;
            break;
        case '8':
            valB = 8;
            break;
        case '9':
            valB = 9;
            break;
        case 'A':
            valB = 10;
            break;
        case 'B':
            valB = 11;
            break;
        case 'C':
            valB = 12;
            break;
        case 'D':
            valB = 13;
            break;
        case 'E':
            valB = 14;
            break;
        case 'F':
            valB = 15;
            break;
    }
    C = valA + valB;
}

void intoper(string A, string B, int &C){ //Converte os valores hexadecimais juntos para int para trabalhar
    int valA, valB;
    if(A == "0")            valA = 0;
    if(A == "1")            valA = 16;
    if(A == "2")            valA = 32;
    if(A == "3")            valA = 48;
    if(A == "4")            valA = 64;
    if(A == "5")            valA = 80;
    if(A == "6")            valA = 96;
    if(A == "7")            valA = 112;
    if(A == "8")            valA = 128;
    if(A == "9")            valA = 144;
    if(A == "A")            valA = 160;
    if(A == "B")            valA = 176;
    if(A == "C")            valA = 192;
    if(A == "D")            valA = 208;
    if(A == "E")            valA = 224;
    if(A == "F")            valA = 240;
    if(B == "0")            valB = 0;
    if(B == "1")            valB = 1;
    if(B == "2")            valB = 2;
    if(B == "3")            valB = 3;
    if(B == "4")            valB = 4;
    if(B == "5")            valB = 5;
    if(B == "6")            valB = 6;
    if(B == "7")            valB = 7;
    if(B == "8")            valB = 8;
    if(B == "9")            valB = 9;
    if(B == "A")            valB = 10;
    if(B == "B")            valB = 11;
    if(B == "C")            valB = 12;
    if(B == "D")            valB = 13;
    if(B == "E")            valB = 14;
    if(B == "F")            valB = 15;
    C = valA + valB;
}

void deciprahexa(int A, string &B){ // converte int pra hexadecimal
    int XI = 0, ZI = 0;
    string X, Z;

    if(A>=16){
        XI = A % 16;
        A /= 16;
    }
    ZI = A;
    switch(XI)
    {
        case 0:
            X = "0";
            break;
        case 1:
            X = "1";
            break;
        case 2:
            X = "2";
            break;
        case 3:
            X = "3";
            break;
        case 4:
            X = "4";
            break;
        case 5:
            X = "5";
            break;
        case 6:
            X = "6";
            break;
        case 7:
            X = "7";
            break;
        case 8:
            X = "8";
            break;
        case 9:
            X = "9";
            break;
        case 10:
            X = "A";
            break;
        case 11:
            X = "B";
            break;
        case 12:
            X = "C";
            break;
        case 13:
            X = "D";
            break;
        case 14:
            X = "E";
            break;
        case 15:
            X = "F";
            break;
    }
    switch(ZI)
    {
        case 0:
            Z = "0";
            break;
        case 1:
            Z = "1";
            break;
        case 2:
            Z = "2";
            break;
        case 3:
            Z = "3";
            break;
        case 4:
            Z = "4";
            break;
        case 5:
            Z = "5";
            break;
        case 6:
            Z = "6";
            break;
        case 7:
            Z = "7";
            break;
        case 8:
            Z = "8";
            break;
        case 9:
            Z = "9";
            break;
        case 10:
            Z = "A";
            break;
        case 11:
            Z = "B";
            break;
        case 12:
            Z = "C";
            break;
        case 13:
            Z = "D";
            break;
        case 14:
            Z = "E";
            break;
        case 15:
            Z = "F";
            break;
    }
    B = X + Z;
}

void note(char A, char B, string &C){ // executa o NOT com o valor hexadecimal

    string X, Z;
    switch(A)
    {
        case '0':
            X = "F";
            break;
        case '1':
            X = "E";
            break;
        case '2':
            X = "D";
            break;
        case '3':
            X = "C";
            break;
        case '4':
            X = "B";
            break;
        case '5':
            X = "A";
            break;
        case '6':
            X = "9";
            break;
        case '7':
            X = "8";
            break;
        case '8':
            X = "7";
            break;
        case '9':
            X = "6";
            break;
        case 'A':
            X = "5";
            break;
        case 'B':
            X = "4";
            break;
        case 'C':
            X = "3";
            break;
        case 'D':
            X = "2";
            break;
        case 'E':
            X = "1";
            break;
        case 'F':
            X = "0";
            break;
    }
    switch(B)
    {
        case '0':
            Z = "F";
            break;
        case '1':
            Z = "E";
            break;
        case '2':
            Z = "D";
            break;
        case '3':
            Z = "C";
            break;
        case '4':
            Z = "B";
            break;
        case '5':
            Z = "A";
            break;
        case '6':
            Z = "9";
            break;
        case '7':
            Z = "8";
            break;
        case '8':
            Z = "7";
            break;
        case '9':
            Z = "6";
            break;
        case 'A':
            Z = "5";
            break;
        case 'B':
            Z = "4";
            break;
        case 'C':
            Z = "3";
            break;
        case 'D':
            Z = "2";
            break;
        case 'E':
            Z = "1";
            break;
        case 'F':
            Z = "0";
            break;
    }
    C = X + Z;
}

void ande(char A, char B, char C, char D, string &CC){ // executa o AND com os valores em hexadecimal
    string X1, X2; //0F 3D
    switch(A) // considera A
    {
        case '0':
            X1 = "0";
            break;
        case '1':
            if(C == '1') X1 = "1";
            if(C == '3') X1 = "1";
            if(C == '5') X1 = "1";
            if(C == '7') X1 = "1";
            if(C == '9') X1 = "1";
            if(C == 'B') X1 = "1";
            if(C == 'D') X1 = "1";
            if(C == 'F') X1 = "1";
            else X1 = "0";
            break;
        case '2':
            if(C == '2') X1 = "2";
            if(C == '3') X1 = "2";
            if(C == '6') X1 = "2";
            if(C == '7') X1 = "2";
            if(C == 'A') X1 = "2";
            if(C == 'B') X1 = "2";
            if(C == 'E') X1 = "2";
            if(C == 'F') X1 = "2";
            else X1 = "0";
            break;
        case '3':
            if(C == '1') X1 = "1";
            if(C == '5') X1 = "1";
            if(C == '9') X1 = "1";
            if(C == 'D') X1 = "1";
            if(C == '2') X1 = "2";
            if(C == '6') X1 = "2";
            if(C == 'A') X1 = "2";
            if(C == 'E') X1 = "2";
            if(C == '3') X1 = "3";
            if(C == '7') X1 = "3";
            if(C == 'B') X1 = "3";
            if(C == 'F') X1 = "3";
            else X1 = "0";
            break;
        case '4':
            if(C == '4') X1 = "4";
            if(C == '5') X1 = "4";
            if(C == '6') X1 = "4";
            if(C == '7') X1 = "4";
            if(C == 'C') X1 = "4";
            if(C == 'D') X1 = "4";
            if(C == 'E') X1 = "4";
            if(C == 'F') X1 = "4";
            else X1 = "0";
            break;
        case '5':
            if(C == '1') X1 = "1";
            if(C == '3') X1 = "1";
            if(C == '9') X1 = "1";
            if(C == 'B') X1 = "1";
            if(C == '4') X1 = "4";
            if(C == '6') X1 = "4";
            if(C == 'C') X1 = "4";
            if(C == 'E') X1 = "4";
            if(C == '5') X1 = "5";
            if(C == '7') X1 = "5";
            if(C == 'D') X1 = "5";
            if(C == 'F') X1 = "5";
            else X1 = "0";
            break;
        case '6':
            if(C == '2') X1 = "2";
            if(C == '3') X1 = "2";
            if(C == 'A') X1 = "2";
            if(C == 'B') X1 = "2";
            if(C == '4') X1 = "4";
            if(C == '5') X1 = "4";
            if(C == 'C') X1 = "4";
            if(C == 'D') X1 = "4";
            if(C == '6') X1 = "6";
            if(C == '7') X1 = "6";
            if(C == 'E') X1 = "6";
            if(C == 'F') X1 = "6";
            else X1 = "0";
            break;
        case '7':
            if(C == '1') X1 = "1";
            if(C == '9') X1 = "1";
            if(C == '2') X1 = "2";
            if(C == 'A') X1 = "2";
            if(C == '3') X1 = "3";
            if(C == 'B') X1 = "3";
            if(C == '4') X1 = "4";
            if(C == 'C') X1 = "4";
            if(C == '5') X1 = "5";
            if(C == 'D') X1 = "5";
            if(C == '6') X1 = "6";
            if(C == 'E') X1 = "6";
            if(C == '7') X1 = "7";
            if(C == 'F') X1 = "7";
            else X1 = "0";
            break;
        case '8':
            if(C == '8') X1 = "8";
            if(C == '9') X1 = "8";
            if(C == 'A') X1 = "8";
            if(C == 'B') X1 = "8";
            if(C == 'C') X1 = "8";
            if(C == 'D') X1 = "8";
            if(C == 'E') X1 = "8";
            if(C == 'F') X1 = "8";
            else X1 = "0";
            break;
        case '9':
            if(C == '1') X1 = "1";
            if(C == '3') X1 = "1";
            if(C == '5') X1 = "1";
            if(C == '7') X1 = "1";
            if(C == '8') X1 = "8";
            if(C == 'A') X1 = "8";
            if(C == 'C') X1 = "8";
            if(C == 'E') X1 = "8";
            if(C == '9') X1 = "9";
            if(C == 'B') X1 = "9";
            if(C == 'D') X1 = "9";
            if(C == 'F') X1 = "9";
            else X1 = "0";
            break;
        case 'A':
            if(C == '2') X1 = "2";
            if(C == '3') X1 = "2";
            if(C == '6') X1 = "2";
            if(C == '7') X1 = "2";
            if(C == '8') X1 = "8";
            if(C == '9') X1 = "8";
            if(C == 'C') X1 = "8";
            if(C == 'D') X1 = "8";
            if(C == 'A') X1 = "A";
            if(C == 'B') X1 = "A";
            if(C == 'E') X1 = "A";
            if(C == 'F') X1 = "A";
            else X1 = "0";
            break;
        case 'B':
            if(C == '1') X1 = "1";
            if(C == '5') X1 = "1";
            if(C == '2') X1 = "2";
            if(C == '6') X1 = "2";
            if(C == '3') X1 = "3";
            if(C == '7') X1 = "3";
            if(C == '8') X1 = "8";
            if(C == 'C') X1 = "8";
            if(C == '9') X1 = "9";
            if(C == 'D') X1 = "9";
            if(C == 'A') X1 = "A";
            if(C == 'A') X1 = "A";
            if(C == 'B') X1 = "B";
            if(C == 'F') X1 = "B";
            else X1 = "0";
            break;
        case 'C':
            if(C == '4') X1 = "4";
            if(C == '5') X1 = "4";
            if(C == '6') X1 = "4";
            if(C == '7') X1 = "4";
            if(C == '8') X1 = "8";
            if(C == '9') X1 = "8";
            if(C == 'A') X1 = "8";
            if(C == 'B') X1 = "8";
            if(C == 'C') X1 = "C";
            if(C == 'D') X1 = "C";
            if(C == 'E') X1 = "C";
            if(C == 'F') X1 = "C";
            else X1 = "0";
            break;
        case 'D':
            if(C == '1') X1 = "1";
            if(C == '3') X1 = "1";
            if(C == '4') X1 = "4";
            if(C == '6') X1 = "4";
            if(C == '5') X1 = "5";
            if(C == '7') X1 = "5";
            if(C == '8') X1 = "8";
            if(C == 'A') X1 = "8";
            if(C == '9') X1 = "9";
            if(C == 'B') X1 = "9";
            if(C == 'C') X1 = "C";
            if(C == 'E') X1 = "C";
            if(C == 'D') X1 = "D";
            if(C == 'F') X1 = "D";
            else X1 = "0";
            break;
        case 'E':
            if(C == '2') X1 = "2";
            if(C == '3') X1 = "2";
            if(C == '4') X1 = "4";
            if(C == '5') X1 = "4";
            if(C == '6') X1 = "6";
            if(C == '7') X1 = "6";
            if(C == '8') X1 = "8";
            if(C == '9') X1 = "8";
            if(C == 'A') X1 = "A";
            if(C == 'B') X1 = "A";
            if(C == 'C') X1 = "C";
            if(C == 'D') X1 = "C";
            if(C == 'E') X1 = "E";
            if(C == 'F') X1 = "E";
            else X1 = "0";
            break;
        case 'F':
            X1 = C;
            break;
    }
    switch(B) // considera B
    {
        case '0':
            X2 = "0";
            break;
        case '1':
            if(D == '1') X2 = "1";
            if(D == '3') X2 = "1";
            if(D == '5') X2 = "1";
            if(D == '7') X2 = "1";
            if(D == '9') X2 = "1";
            if(D == 'B') X2 = "1";
            if(D == 'D') X2 = "1";
            if(D == 'F') X2 = "1";
            else X2 = "0";
            break;
        case '2':
            if(D == '2') X2 = "2";
            if(D == '3') X2 = "2";
            if(D == '6') X2 = "2";
            if(D == '7') X2 = "2";
            if(D == 'A') X2 = "2";
            if(D == 'B') X2 = "2";
            if(D == 'E') X2 = "2";
            if(D == 'F') X2 = "2";
            else X2 = "0";
            break;
        case '3':
            if(D == '1') X2 = "1";
            if(D == '5') X2 = "1";
            if(D == '9') X2 = "1";
            if(D == 'D') X2 = "1";
            if(D == '2') X2 = "2";
            if(D == '6') X2 = "2";
            if(D == 'A') X2 = "2";
            if(D == 'E') X2 = "2";
            if(D == '3') X2 = "3";
            if(D == '7') X2 = "3";
            if(D == 'B') X2 = "3";
            if(D == 'F') X2 = "3";
            else X2 = "0";
            break;
        case '4':
            if(D == '4') X2 = "4";
            if(D == '5') X2 = "4";
            if(D == '6') X2 = "4";
            if(D == '7') X2 = "4";
            if(D == 'C') X2 = "4";
            if(D == 'D') X2 = "4";
            if(D == 'E') X2 = "4";
            if(D == 'F') X2 = "4";
            else X2 = "0";
            break;
        case '5':
            if(D == '1') X2 = "1";
            if(D == '3') X2 = "1";
            if(D == '9') X2 = "1";
            if(D == 'B') X2 = "1";
            if(D == '4') X2 = "4";
            if(D == '6') X2 = "4";
            if(D == 'C') X2 = "4";
            if(D == 'E') X2 = "4";
            if(D == '5') X2 = "5";
            if(D == '7') X2 = "5";
            if(D == 'D') X2 = "5";
            if(D == 'F') X2 = "5";
            else X2 = "0";
            break;
        case '6':
            if(D == '2') X2 = "2";
            if(D == '3') X2 = "2";
            if(D == 'A') X2 = "2";
            if(D == 'B') X2 = "2";
            if(D == '4') X2 = "4";
            if(D == '5') X2 = "4";
            if(D == 'C') X2 = "4";
            if(D == 'D') X2 = "4";
            if(D == '6') X2 = "6";
            if(D == '7') X2 = "6";
            if(D == 'E') X2 = "6";
            if(D == 'F') X2 = "6";
            else X2 = "0";
            break;
        case '7':
            if(D == '1') X2 = "1";
            if(D == '9') X2 = "1";
            if(D == '2') X2 = "2";
            if(D == 'A') X2 = "2";
            if(D == '3') X2 = "3";
            if(D == 'B') X2 = "3";
            if(D == '4') X2 = "4";
            if(D == 'C') X2 = "4";
            if(D == '5') X2 = "5";
            if(D == 'D') X2 = "5";
            if(D == '6') X2 = "6";
            if(D == 'E') X2 = "6";
            if(D == '7') X2 = "7";
            if(D == 'F') X2 = "7";
            else X2 = "0";
            break;
        case '8':
            if(D == '8') X2 = "8";
            if(D == '9') X2 = "8";
            if(D == 'A') X2 = "8";
            if(D == 'B') X2 = "8";
            if(D == 'C') X2 = "8";
            if(D == 'D') X2 = "8";
            if(D == 'E') X2 = "8";
            if(D == 'F') X2 = "8";
            else X2 = "0";
            break;
        case '9':
            if(D == '1') X2 = "1";
            if(D == '3') X2 = "1";
            if(D == '5') X2 = "1";
            if(D == '7') X2 = "1";
            if(D == '8') X2 = "8";
            if(D == 'A') X2 = "8";
            if(D == 'C') X2 = "8";
            if(D == 'E') X2 = "8";
            if(D == '9') X2 = "9";
            if(D == 'B') X2 = "9";
            if(D == 'D') X2 = "9";
            if(D == 'F') X2 = "9";
            else X2 = "0";
            break;
        case 'A':
            if(D == '2') X2 = "2";
            if(D == '3') X2 = "2";
            if(D == '6') X2 = "2";
            if(D == '7') X2 = "2";
            if(D == '8') X2 = "8";
            if(D == '9') X2 = "8";
            if(D == 'C') X2 = "8";
            if(D == 'D') X2 = "8";
            if(D == 'A') X2 = "A";
            if(D == 'B') X2 = "A";
            if(D == 'E') X2 = "A";
            if(D == 'F') X2 = "A";
            else X2 = "0";
            break;
        case 'B':
            if(D == '1') X2 = "1";
            if(D == '5') X2 = "1";
            if(D == '2') X2 = "2";
            if(D == '6') X2 = "2";
            if(D == '3') X2 = "3";
            if(D == '7') X2 = "3";
            if(D == '8') X2 = "8";
            if(D == 'C') X2 = "8";
            if(D == '9') X2 = "9";
            if(D == 'D') X2 = "9";
            if(D == 'A') X2 = "A";
            if(D == 'A') X2 = "A";
            if(D == 'B') X2 = "B";
            if(D == 'F') X2 = "B";
            else X2 = "0";
            break;
        case 'C':
            if(D == '4') X2 = "4";
            if(D == '5') X2 = "4";
            if(D == '6') X2 = "4";
            if(D == '7') X2 = "4";
            if(D == '8') X2 = "8";
            if(D == '9') X2 = "8";
            if(D == 'A') X2 = "8";
            if(D == 'B') X2 = "8";
            if(D == 'C') X2 = "C";
            if(D == 'D') X2 = "C";
            if(D == 'E') X2 = "C";
            if(D == 'F') X2 = "C";
            else X2 = "0";
            break;
        case 'D':
            if(D == '1') X2 = "1";
            if(D == '3') X2 = "1";
            if(D == '4') X2 = "4";
            if(D == '6') X2 = "4";
            if(D == '5') X2 = "5";
            if(D == '7') X2 = "5";
            if(D == '8') X2 = "8";
            if(D == 'A') X2 = "8";
            if(D == '9') X2 = "9";
            if(D == 'B') X2 = "9";
            if(D == 'C') X2 = "C";
            if(D == 'E') X2 = "C";
            if(D == 'D') X2 = "D";
            if(D == 'F') X2 = "D";
            else X2 = "0";
            break;
        case 'E':
            if(D == '2') X2 = "2";
            if(D == '3') X2 = "2";
            if(D == '4') X2 = "4";
            if(D == '5') X2 = "4";
            if(D == '6') X2 = "6";
            if(D == '7') X2 = "6";
            if(D == '8') X2 = "8";
            if(D == '9') X2 = "8";
            if(D == 'A') X2 = "A";
            if(D == 'B') X2 = "A";
            if(D == 'C') X2 = "C";
            if(D == 'D') X2 = "C";
            if(D == 'E') X2 = "E";
            if(D == 'F') X2 = "E";
            else X2 = "0";
            break;
        case 'F':
            X2 = D;
            break;
    }
    CC = X1 + X2;
}

void ore(char A, char B, char C, char D, string &CC){ // executa o OR com os valores em hexadecimal
    string X1, X2; //0F 3D
    switch(A) // considera A
    {
        case '0':
            X1 = C;
            break;
        case '1':
            if(C == '0') X1 = "1";
            if(C == '1') X1 = "1";
            if(C == '2') X1 = "3";
            if(C == '3') X1 = "3";
            if(C == '4') X1 = "5";
            if(C == '5') X1 = "5";
            if(C == '6') X1 = "7";
            if(C == '7') X1 = "7";
            if(C == '8') X1 = "9";
            if(C == '9') X1 = "9";
            if(C == 'A') X1 = "B";
            if(C == 'B') X1 = "B";
            if(C == 'C') X1 = "D";
            if(C == 'D') X1 = "D";
            if(C == 'E') X1 = "F";
            if(C == 'F') X1 = "F";
            break;
        case '2':
            if(C == '0') X1 = "2";
            if(C == '1') X1 = "3";
            if(C == '2') X1 = "2";
            if(C == '3') X1 = "3";
            if(C == '4') X1 = "6";
            if(C == '5') X1 = "7";
            if(C == '6') X1 = "6";
            if(C == '7') X1 = "7";
            if(C == '8') X1 = "A";
            if(C == '9') X1 = "B";
            if(C == 'A') X1 = "A";
            if(C == 'B') X1 = "B";
            if(C == 'C') X1 = "E";
            if(C == 'D') X1 = "F";
            if(C == 'E') X1 = "E";
            if(C == 'F') X1 = "F";
            break;
        case '3':
            if(C == '0') X1 = "3";
            if(C == '1') X1 = "3";
            if(C == '2') X1 = "3";
            if(C == '3') X1 = "3";
            if(C == '4') X1 = "7";
            if(C == '5') X1 = "7";
            if(C == '6') X1 = "7";
            if(C == '7') X1 = "7";
            if(C == '8') X1 = "B";
            if(C == '9') X1 = "B";
            if(C == 'A') X1 = "B";
            if(C == 'B') X1 = "B";
            if(C == 'C') X1 = "F";
            if(C == 'D') X1 = "F";
            if(C == 'E') X1 = "F";
            if(C == 'F') X1 = "F";
            break;
        case '4':
            if(C == '0') X1 = "4";
            if(C == '1') X1 = "5";
            if(C == '2') X1 = "6";
            if(C == '3') X1 = "7";
            if(C == '4') X1 = "4";
            if(C == '5') X1 = "5";
            if(C == '6') X1 = "6";
            if(C == '7') X1 = "7";
            if(C == '8') X1 = "C";
            if(C == '9') X1 = "D";
            if(C == 'A') X1 = "E";
            if(C == 'B') X1 = "F";
            if(C == 'C') X1 = "C";
            if(C == 'D') X1 = "D";
            if(C == 'E') X1 = "E";
            if(C == 'F') X1 = "F";
            break;
        case '5':
            if(C == '0') X1 = "5";
            if(C == '1') X1 = "5";
            if(C == '2') X1 = "7";
            if(C == '3') X1 = "7";
            if(C == '4') X1 = "5";
            if(C == '5') X1 = "5";
            if(C == '6') X1 = "7";
            if(C == '7') X1 = "7";
            if(C == '8') X1 = "D";
            if(C == '9') X1 = "D";
            if(C == 'A') X1 = "F";
            if(C == 'B') X1 = "F";
            if(C == 'C') X1 = "D";
            if(C == 'D') X1 = "D";
            if(C == 'E') X1 = "F";
            if(C == 'F') X1 = "F";
            break;
        case '6':
            if(C == '0') X1 = "6";
            if(C == '1') X1 = "7";
            if(C == '2') X1 = "6";
            if(C == '3') X1 = "7";
            if(C == '4') X1 = "6";
            if(C == '5') X1 = "7";
            if(C == '6') X1 = "6";
            if(C == '7') X1 = "7";
            if(C == '8') X1 = "E";
            if(C == '9') X1 = "F";
            if(C == 'A') X1 = "E";
            if(C == 'B') X1 = "F";
            if(C == 'C') X1 = "E";
            if(C == 'D') X1 = "F";
            if(C == 'E') X1 = "E";
            if(C == 'F') X1 = "F";
            break;
        case '7':
            if(C == '0') X1 = "7";
            if(C == '1') X1 = "7";
            if(C == '2') X1 = "7";
            if(C == '3') X1 = "7";
            if(C == '4') X1 = "7";
            if(C == '5') X1 = "7";
            if(C == '6') X1 = "7";
            if(C == '7') X1 = "7";
            if(C == '8') X1 = "F";
            if(C == '9') X1 = "F";
            if(C == 'A') X1 = "F";
            if(C == 'B') X1 = "F";
            if(C == 'C') X1 = "F";
            if(C == 'D') X1 = "F";
            if(C == 'E') X1 = "F";
            if(C == 'F') X1 = "F";
            break;
        case '8':
            if(C == '0') X1 = "8";
            if(C == '1') X1 = "9";
            if(C == '2') X1 = "A";
            if(C == '3') X1 = "B";
            if(C == '4') X1 = "C";
            if(C == '5') X1 = "D";
            if(C == '6') X1 = "E";
            if(C == '7') X1 = "F";
            if(C == '8') X1 = "8";
            if(C == '9') X1 = "9";
            if(C == 'A') X1 = "A";
            if(C == 'B') X1 = "B";
            if(C == 'C') X1 = "C";
            if(C == 'D') X1 = "D";
            if(C == 'E') X1 = "E";
            if(C == 'F') X1 = "F";
            break;
        case '9':
            if(C == '0') X1 = "9";
            if(C == '1') X1 = "9";
            if(C == '2') X1 = "B";
            if(C == '3') X1 = "B";
            if(C == '4') X1 = "D";
            if(C == '5') X1 = "D";
            if(C == '6') X1 = "F";
            if(C == '7') X1 = "F";
            if(C == '8') X1 = "9";
            if(C == '9') X1 = "9";
            if(C == 'A') X1 = "B";
            if(C == 'B') X1 = "B";
            if(C == 'C') X1 = "D";
            if(C == 'D') X1 = "D";
            if(C == 'E') X1 = "F";
            if(C == 'F') X1 = "F";
            break;
        case 'A':
            if(C == '0') X1 = "A";
            if(C == '1') X1 = "B";
            if(C == '2') X1 = "A";
            if(C == '3') X1 = "B";
            if(C == '4') X1 = "E";
            if(C == '5') X1 = "F";
            if(C == '6') X1 = "E";
            if(C == '7') X1 = "F";
            if(C == '8') X1 = "A";
            if(C == '9') X1 = "B";
            if(C == 'A') X1 = "A";
            if(C == 'B') X1 = "B";
            if(C == 'C') X1 = "E";
            if(C == 'D') X1 = "F";
            if(C == 'E') X1 = "E";
            if(C == 'F') X1 = "F";
            break;
        case 'B':
            if(C == '0') X1 = "B";
            if(C == '1') X1 = "B";
            if(C == '2') X1 = "B";
            if(C == '3') X1 = "B";
            if(C == '4') X1 = "F";
            if(C == '5') X1 = "F";
            if(C == '6') X1 = "F";
            if(C == '7') X1 = "F";
            if(C == '8') X1 = "B";
            if(C == '9') X1 = "B";
            if(C == 'A') X1 = "B";
            if(C == 'B') X1 = "B";
            if(C == 'C') X1 = "F";
            if(C == 'D') X1 = "F";
            if(C == 'E') X1 = "F";
            if(C == 'F') X1 = "F";
            break;
        case 'C':
            if(C == '0') X1 = "C";
            if(C == '1') X1 = "D";
            if(C == '2') X1 = "E";
            if(C == '3') X1 = "F";
            if(C == '4') X1 = "C";
            if(C == '5') X1 = "D";
            if(C == '6') X1 = "E";
            if(C == '7') X1 = "F";
            if(C == '8') X1 = "C";
            if(C == '9') X1 = "D";
            if(C == 'A') X1 = "E";
            if(C == 'B') X1 = "F";
            if(C == 'C') X1 = "C";
            if(C == 'D') X1 = "D";
            if(C == 'E') X1 = "E";
            if(C == 'F') X1 = "F";
            break;
        case 'D':
            if(C == '0') X1 = "D";
            if(C == '1') X1 = "D";
            if(C == '2') X1 = "F";
            if(C == '3') X1 = "F";
            if(C == '4') X1 = "D";
            if(C == '5') X1 = "D";
            if(C == '6') X1 = "F";
            if(C == '7') X1 = "F";
            if(C == '8') X1 = "D";
            if(C == '9') X1 = "D";
            if(C == 'A') X1 = "F";
            if(C == 'B') X1 = "F";
            if(C == 'C') X1 = "D";
            if(C == 'D') X1 = "D";
            if(C == 'E') X1 = "F";
            if(C == 'F') X1 = "F";
            break;
        case 'E':
            if(C == '0') X1 = "E";
            if(C == '1') X1 = "F";
            if(C == '2') X1 = "E";
            if(C == '3') X1 = "F";
            if(C == '4') X1 = "E";
            if(C == '5') X1 = "F";
            if(C == '6') X1 = "E";
            if(C == '7') X1 = "F";
            if(C == '8') X1 = "E";
            if(C == '9') X1 = "F";
            if(C == 'A') X1 = "E";
            if(C == 'B') X1 = "F";
            if(C == 'C') X1 = "E";
            if(C == 'D') X1 = "F";
            if(C == 'E') X1 = "E";
            if(C == 'F') X1 = "F";
            break;
        case 'F':
            if(C == '0') X1 = "F";
            if(C == '1') X1 = "F";
            if(C == '2') X1 = "F";
            if(C == '3') X1 = "F";
            if(C == '4') X1 = "F";
            if(C == '5') X1 = "F";
            if(C == '6') X1 = "F";
            if(C == '7') X1 = "F";
            if(C == '8') X1 = "F";
            if(C == '9') X1 = "F";
            if(C == 'A') X1 = "F";
            if(C == 'B') X1 = "F";
            if(C == 'C') X1 = "F";
            if(C == 'D') X1 = "F";
            if(C == 'E') X1 = "F";
            if(C == 'F') X1 = "F";
            break;
    }
    switch(B) // considera B
    {
        case '0':
            X1 = D;
            break;
        case '1':
            if(D == '0') X2 = "1";
            if(D == '1') X2 = "1";
            if(D == '2') X2 = "3";
            if(D == '3') X2 = "3";
            if(D == '4') X2 = "5";
            if(D == '5') X2 = "5";
            if(D == '6') X2 = "7";
            if(D == '7') X2 = "7";
            if(D == '8') X2 = "9";
            if(D == '9') X2 = "9";
            if(D == 'A') X2 = "B";
            if(D == 'B') X2 = "B";
            if(D == 'C') X2 = "D";
            if(D == 'D') X2 = "D";
            if(D == 'E') X2 = "F";
            if(D == 'F') X2 = "F";
            break;
        case '2':
            if(D == '0') X2 = "2";
            if(D == '1') X2 = "3";
            if(D == '2') X2 = "2";
            if(D == '3') X2 = "3";
            if(D == '4') X2 = "6";
            if(D == '5') X2 = "7";
            if(D == '6') X2 = "6";
            if(D == '7') X2 = "7";
            if(D == '8') X2 = "A";
            if(D == '9') X2 = "B";
            if(D == 'A') X2 = "A";
            if(D == 'B') X2 = "B";
            if(D == 'C') X2 = "E";
            if(D == 'D') X2 = "F";
            if(D == 'E') X2 = "E";
            if(D == 'F') X2 = "F";
            break;
        case '3':
            if(D == '0') X2 = "3";
            if(D == '1') X2 = "3";
            if(D == '2') X2 = "3";
            if(D == '3') X2 = "3";
            if(D == '4') X2 = "7";
            if(D == '5') X2 = "7";
            if(D == '6') X2 = "7";
            if(D == '7') X2 = "7";
            if(D == '8') X2 = "B";
            if(D == '9') X2 = "B";
            if(D == 'A') X2 = "B";
            if(D == 'B') X2 = "B";
            if(D == 'C') X2 = "F";
            if(D == 'D') X2 = "F";
            if(D == 'E') X2 = "F";
            if(D == 'F') X2 = "F";
            break;
        case '4':
            if(D == '0') X2 = "4";
            if(D == '1') X2 = "5";
            if(D == '2') X2 = "6";
            if(D == '3') X2 = "7";
            if(D == '4') X2 = "4";
            if(D == '5') X2 = "5";
            if(D == '6') X2 = "6";
            if(D == '7') X2 = "7";
            if(D == '8') X2 = "C";
            if(D == '9') X2 = "D";
            if(D == 'A') X2 = "E";
            if(D == 'B') X2 = "F";
            if(D == 'C') X2 = "C";
            if(D == 'D') X2 = "D";
            if(D == 'E') X2 = "E";
            if(D == 'F') X2 = "F";
            break;
        case '5':
            if(D == '0') X2 = "5";
            if(D == '1') X2 = "5";
            if(D == '2') X2 = "7";
            if(D == '3') X2 = "7";
            if(D == '4') X2 = "5";
            if(D == '5') X2 = "5";
            if(D == '6') X2 = "7";
            if(D == '7') X2 = "7";
            if(D == '8') X2 = "D";
            if(D == '9') X2 = "D";
            if(D == 'A') X2 = "F";
            if(D == 'B') X2 = "F";
            if(D == 'C') X2 = "D";
            if(D == 'D') X2 = "D";
            if(D == 'E') X2 = "F";
            if(D == 'F') X2 = "F";
            break;
        case '6':
            if(D == '0') X2 = "6";
            if(D == '1') X2 = "7";
            if(D == '2') X2 = "6";
            if(D == '3') X2 = "7";
            if(D == '4') X2 = "6";
            if(D == '5') X2 = "7";
            if(D == '6') X2 = "6";
            if(D == '7') X2 = "7";
            if(D == '8') X2 = "E";
            if(D == '9') X2 = "F";
            if(D == 'A') X2 = "E";
            if(D == 'B') X2 = "F";
            if(D == 'C') X2 = "E";
            if(D == 'D') X2 = "F";
            if(D == 'E') X2 = "E";
            if(D == 'F') X2 = "F";
            break;
        case '7':
            if(D == '0') X2 = "7";
            if(D == '1') X2 = "7";
            if(D == '2') X2 = "7";
            if(D == '3') X2 = "7";
            if(D == '4') X2 = "7";
            if(D == '5') X2 = "7";
            if(D == '6') X2 = "7";
            if(D == '7') X2 = "7";
            if(D == '8') X2 = "F";
            if(D == '9') X2 = "F";
            if(D == 'A') X2 = "F";
            if(D == 'B') X2 = "F";
            if(D == 'C') X2 = "F";
            if(D == 'D') X2 = "F";
            if(D == 'E') X2 = "F";
            if(D == 'F') X2 = "F";
            break;
        case '8':
            if(D == '0') X2 = "8";
            if(D == '1') X2 = "9";
            if(D == '2') X2 = "A";
            if(D == '3') X2 = "B";
            if(D == '4') X2 = "C";
            if(D == '5') X2 = "D";
            if(D == '6') X2 = "E";
            if(D == '7') X2 = "F";
            if(D == '8') X2 = "8";
            if(D == '9') X2 = "9";
            if(D == 'A') X2 = "A";
            if(D == 'B') X2 = "B";
            if(D == 'C') X2 = "C";
            if(D == 'D') X2 = "D";
            if(D == 'E') X2 = "E";
            if(D == 'F') X2 = "F";
            break;
        case '9':
            if(D == '0') X2 = "9";
            if(D == '1') X2 = "9";
            if(D == '2') X2 = "B";
            if(D == '3') X2 = "B";
            if(D == '4') X2 = "D";
            if(D == '5') X2 = "D";
            if(D == '6') X2 = "F";
            if(D == '7') X2 = "F";
            if(D == '8') X2 = "9";
            if(D == '9') X2 = "9";
            if(D == 'A') X2 = "B";
            if(D == 'B') X2 = "B";
            if(D == 'C') X2 = "D";
            if(D == 'D') X2 = "D";
            if(D == 'E') X2 = "F";
            if(D == 'F') X2 = "F";
            break;
        case 'A':
            if(D == '0') X2 = "A";
            if(D == '1') X2 = "B";
            if(D == '2') X2 = "A";
            if(D == '3') X2 = "B";
            if(D == '4') X2 = "E";
            if(D == '5') X2 = "F";
            if(D == '6') X2 = "E";
            if(D == '7') X2 = "F";
            if(D == '8') X2 = "A";
            if(D == '9') X2 = "B";
            if(D == 'A') X2 = "A";
            if(D == 'B') X2 = "B";
            if(D == 'C') X2 = "E";
            if(D == 'D') X2 = "F";
            if(D == 'E') X2 = "E";
            if(D == 'F') X2 = "F";
            break;
        case 'B':
            if(D == '0') X2 = "B";
            if(D == '1') X2 = "B";
            if(D == '2') X2 = "B";
            if(D == '3') X2 = "B";
            if(D == '4') X2 = "F";
            if(D == '5') X2 = "F";
            if(D == '6') X2 = "F";
            if(D == '7') X2 = "F";
            if(D == '8') X2 = "B";
            if(D == '9') X2 = "B";
            if(D == 'A') X2 = "B";
            if(D == 'B') X2 = "B";
            if(D == 'C') X2 = "F";
            if(D == 'D') X2 = "F";
            if(D == 'E') X2 = "F";
            if(D == 'F') X2 = "F";
            break;
        case 'C':
            if(D == '0') X2 = "C";
            if(D == '1') X2 = "D";
            if(D == '2') X2 = "E";
            if(D == '3') X2 = "F";
            if(D == '4') X2 = "C";
            if(D == '5') X2 = "D";
            if(D == '6') X2 = "E";
            if(D == '7') X2 = "F";
            if(D == '8') X2 = "C";
            if(D == '9') X2 = "D";
            if(D == 'A') X2 = "E";
            if(D == 'B') X2 = "F";
            if(D == 'C') X2 = "C";
            if(D == 'D') X2 = "D";
            if(D == 'E') X2 = "E";
            if(D == 'F') X2 = "F";
            break;
        case 'D':
            if(D == '0') X2 = "D";
            if(D == '1') X2 = "D";
            if(D == '2') X2 = "F";
            if(D == '3') X2 = "F";
            if(D == '4') X2 = "D";
            if(D == '5') X2 = "D";
            if(D == '6') X2 = "F";
            if(D == '7') X2 = "F";
            if(D == '8') X2 = "D";
            if(D == '9') X2 = "D";
            if(D == 'A') X2 = "F";
            if(D == 'B') X2 = "F";
            if(D == 'C') X2 = "D";
            if(D == 'D') X2 = "D";
            if(D == 'E') X2 = "F";
            if(D == 'F') X2 = "F";
            break;
        case 'E':
            if(D == '0') X2 = "E";
            if(D == '1') X2 = "F";
            if(D == '2') X2 = "E";
            if(D == '3') X2 = "F";
            if(D == '4') X2 = "E";
            if(D == '5') X2 = "F";
            if(D == '6') X2 = "E";
            if(D == '7') X2 = "F";
            if(D == '8') X2 = "E";
            if(D == '9') X2 = "F";
            if(D == 'A') X2 = "E";
            if(D == 'B') X2 = "F";
            if(D == 'C') X2 = "E";
            if(D == 'D') X2 = "F";
            if(D == 'E') X2 = "E";
            if(D == 'F') X2 = "F";
            break;
        case 'F':
            if(D == '0') X2 = "F";
            if(D == '1') X2 = "F";
            if(D == '2') X2 = "F";
            if(D == '3') X2 = "F";
            if(D == '4') X2 = "F";
            if(D == '5') X2 = "F";
            if(D == '6') X2 = "F";
            if(D == '7') X2 = "F";
            if(D == '8') X2 = "F";
            if(D == '9') X2 = "F";
            if(D == 'A') X2 = "F";
            if(D == 'B') X2 = "F";
            if(D == 'C') X2 = "F";
            if(D == 'D') X2 = "F";
            if(D == 'E') X2 = "F";
            if(D == 'F') X2 = "F";
            break;
    }
    CC = X1 + X2;
}

void xore(char A, char B, char C, char D, string &CC){ // executa o XOR com os valores em hexadecimal
    string X1, X2; //0F 3D
    switch(A) // considera A
    {
        case '0':
            X1 = C;
            break;
        case '1':
            if(C == '0') X1 = "1";
            if(C == '1') X1 = "0";
            if(C == '2') X1 = "3";
            if(C == '3') X1 = "2";
            if(C == '4') X1 = "5";
            if(C == '5') X1 = "4";
            if(C == '6') X1 = "7";
            if(C == '7') X1 = "6";
            if(C == '8') X1 = "9";
            if(C == '9') X1 = "8";
            if(C == 'A') X1 = "B";
            if(C == 'B') X1 = "A";
            if(C == 'C') X1 = "D";
            if(C == 'D') X1 = "C";
            if(C == 'E') X1 = "F";
            if(C == 'F') X1 = "E";
            break;
        case '2':
            if(C == '0') X1 = "2";
            if(C == '1') X1 = "3";
            if(C == '2') X1 = "0";
            if(C == '3') X1 = "1";
            if(C == '4') X1 = "6";
            if(C == '5') X1 = "7";
            if(C == '6') X1 = "4";
            if(C == '7') X1 = "5";
            if(C == '8') X1 = "A";
            if(C == '9') X1 = "B";
            if(C == 'A') X1 = "8";
            if(C == 'B') X1 = "9";
            if(C == 'C') X1 = "E";
            if(C == 'D') X1 = "F";
            if(C == 'E') X1 = "C";
            if(C == 'F') X1 = "D";
            break;
        case '3':
            if(C == '0') X1 = "3";
            if(C == '1') X1 = "2";
            if(C == '2') X1 = "1";
            if(C == '3') X1 = "0";
            if(C == '4') X1 = "7";
            if(C == '5') X1 = "6";
            if(C == '6') X1 = "5";
            if(C == '7') X1 = "4";
            if(C == '8') X1 = "B";
            if(C == '9') X1 = "A";
            if(C == 'A') X1 = "9";
            if(C == 'B') X1 = "8";
            if(C == 'C') X1 = "F";
            if(C == 'D') X1 = "E";
            if(C == 'E') X1 = "D";
            if(C == 'F') X1 = "C";
            break;
        case '4':
            if(C == '0') X1 = "4";
            if(C == '1') X1 = "5";
            if(C == '2') X1 = "6";
            if(C == '3') X1 = "7";
            if(C == '4') X1 = "0";
            if(C == '5') X1 = "1";
            if(C == '6') X1 = "2";
            if(C == '7') X1 = "3";
            if(C == '8') X1 = "C";
            if(C == '9') X1 = "D";
            if(C == 'A') X1 = "E";
            if(C == 'B') X1 = "F";
            if(C == 'C') X1 = "8";
            if(C == 'D') X1 = "9";
            if(C == 'E') X1 = "A";
            if(C == 'F') X1 = "B";
            break;
        case '5':
            if(C == '0') X1 = "5";
            if(C == '1') X1 = "4";
            if(C == '2') X1 = "7";
            if(C == '3') X1 = "6";
            if(C == '4') X1 = "1";
            if(C == '5') X1 = "0";
            if(C == '6') X1 = "3";
            if(C == '7') X1 = "2";
            if(C == '8') X1 = "D";
            if(C == '9') X1 = "C";
            if(C == 'A') X1 = "F";
            if(C == 'B') X1 = "E";
            if(C == 'C') X1 = "9";
            if(C == 'D') X1 = "8";
            if(C == 'E') X1 = "B";
            if(C == 'F') X1 = "A";
            break;
        case '6':
            if(C == '0') X1 = "6";
            if(C == '1') X1 = "7";
            if(C == '2') X1 = "4";
            if(C == '3') X1 = "5";
            if(C == '4') X1 = "2";
            if(C == '5') X1 = "3";
            if(C == '6') X1 = "0";
            if(C == '7') X1 = "1";
            if(C == '8') X1 = "E";
            if(C == '9') X1 = "F";
            if(C == 'A') X1 = "C";
            if(C == 'B') X1 = "D";
            if(C == 'C') X1 = "A";
            if(C == 'D') X1 = "B";
            if(C == 'E') X1 = "8";
            if(C == 'F') X1 = "9";
            break;
        case '7':
            if(C == '0') X1 = "7";
            if(C == '1') X1 = "6";
            if(C == '2') X1 = "5";
            if(C == '3') X1 = "4";
            if(C == '4') X1 = "3";
            if(C == '5') X1 = "2";
            if(C == '6') X1 = "1";
            if(C == '7') X1 = "0";
            if(C == '8') X1 = "F";
            if(C == '9') X1 = "E";
            if(C == 'A') X1 = "D";
            if(C == 'B') X1 = "C";
            if(C == 'C') X1 = "B";
            if(C == 'D') X1 = "A";
            if(C == 'E') X1 = "9";
            if(C == 'F') X1 = "8";
            break;
        case '8':
            if(C == '0') X1 = "8";
            if(C == '1') X1 = "9";
            if(C == '2') X1 = "A";
            if(C == '3') X1 = "B";
            if(C == '4') X1 = "C";
            if(C == '5') X1 = "D";
            if(C == '6') X1 = "E";
            if(C == '7') X1 = "F";
            if(C == '8') X1 = "0";
            if(C == '9') X1 = "1";
            if(C == 'A') X1 = "2";
            if(C == 'B') X1 = "3";
            if(C == 'C') X1 = "4";
            if(C == 'D') X1 = "5";
            if(C == 'E') X1 = "6";
            if(C == 'F') X1 = "7";
            break;
        case '9':
            if(C == '0') X1 = "9";
            if(C == '1') X1 = "8";
            if(C == '2') X1 = "B";
            if(C == '3') X1 = "A";
            if(C == '4') X1 = "D";
            if(C == '5') X1 = "C";
            if(C == '6') X1 = "F";
            if(C == '7') X1 = "E";
            if(C == '8') X1 = "1";
            if(C == '9') X1 = "0";
            if(C == 'A') X1 = "3";
            if(C == 'B') X1 = "2";
            if(C == 'C') X1 = "5";
            if(C == 'D') X1 = "4";
            if(C == 'E') X1 = "7";
            if(C == 'F') X1 = "6";
            break;
        case 'A':
            if(C == '0') X1 = "A";
            if(C == '1') X1 = "B";
            if(C == '2') X1 = "8";
            if(C == '3') X1 = "9";
            if(C == '4') X1 = "E";
            if(C == '5') X1 = "F";
            if(C == '6') X1 = "C";
            if(C == '7') X1 = "D";
            if(C == '8') X1 = "2";
            if(C == '9') X1 = "3";
            if(C == 'A') X1 = "0";
            if(C == 'B') X1 = "1";
            if(C == 'C') X1 = "6";
            if(C == 'D') X1 = "7";
            if(C == 'E') X1 = "4";
            if(C == 'F') X1 = "5";
            break;
        case 'B':
            if(C == '0') X1 = "B";
            if(C == '1') X1 = "A";
            if(C == '2') X1 = "9";
            if(C == '3') X1 = "8";
            if(C == '4') X1 = "F";
            if(C == '5') X1 = "E";
            if(C == '6') X1 = "D";
            if(C == '7') X1 = "C";
            if(C == '8') X1 = "3";
            if(C == '9') X1 = "2";
            if(C == 'A') X1 = "1";
            if(C == 'B') X1 = "0";
            if(C == 'C') X1 = "7";
            if(C == 'D') X1 = "6";
            if(C == 'E') X1 = "5";
            if(C == 'F') X1 = "4";
            break;
        case 'C':
            if(C == '0') X1 = "C";
            if(C == '1') X1 = "D";
            if(C == '2') X1 = "E";
            if(C == '3') X1 = "F";
            if(C == '4') X1 = "8";
            if(C == '5') X1 = "9";
            if(C == '6') X1 = "A";
            if(C == '7') X1 = "B";
            if(C == '8') X1 = "4";
            if(C == '9') X1 = "5";
            if(C == 'A') X1 = "6";
            if(C == 'B') X1 = "7";
            if(C == 'C') X1 = "0";
            if(C == 'D') X1 = "1";
            if(C == 'E') X1 = "2";
            if(C == 'F') X1 = "3";
            break;
        case 'D':
            if(C == '0') X1 = "D";
            if(C == '1') X1 = "C";
            if(C == '2') X1 = "F";
            if(C == '3') X1 = "E";
            if(C == '4') X1 = "9";
            if(C == '5') X1 = "8";
            if(C == '6') X1 = "B";
            if(C == '7') X1 = "A";
            if(C == '8') X1 = "5";
            if(C == '9') X1 = "4";
            if(C == 'A') X1 = "7";
            if(C == 'B') X1 = "6";
            if(C == 'C') X1 = "1";
            if(C == 'D') X1 = "0";
            if(C == 'E') X1 = "3";
            if(C == 'F') X1 = "2";
            break;
        case 'E':
            if(C == '0') X1 = "E";
            if(C == '1') X1 = "F";
            if(C == '2') X1 = "C";
            if(C == '3') X1 = "D";
            if(C == '4') X1 = "A";
            if(C == '5') X1 = "B";
            if(C == '6') X1 = "8";
            if(C == '7') X1 = "9";
            if(C == '8') X1 = "6";
            if(C == '9') X1 = "7";
            if(C == 'A') X1 = "4";
            if(C == 'B') X1 = "5";
            if(C == 'C') X1 = "2";
            if(C == 'D') X1 = "3";
            if(C == 'E') X1 = "0";
            if(C == 'F') X1 = "1";
            break;
        case 'F':
            if(C == '0') X1 = "F";
            if(C == '1') X1 = "E";
            if(C == '2') X1 = "D";
            if(C == '3') X1 = "C";
            if(C == '4') X1 = "B";
            if(C == '5') X1 = "A";
            if(C == '6') X1 = "9";
            if(C == '7') X1 = "8";
            if(C == '8') X1 = "7";
            if(C == '9') X1 = "6";
            if(C == 'A') X1 = "5";
            if(C == 'B') X1 = "4";
            if(C == 'C') X1 = "3";
            if(C == 'D') X1 = "2";
            if(C == 'E') X1 = "1";
            if(C == 'F') X1 = "0";
            break;
    }
    switch(A) // considera A
    {
        case '0':
            X2 = D;
            break;
        case '1':
            if(D == '0') X2 = "1";
            if(D == '1') X2 = "0";
            if(D == '2') X2 = "3";
            if(D == '3') X2 = "2";
            if(D == '4') X2 = "5";
            if(D == '5') X2 = "4";
            if(D == '6') X2 = "7";
            if(D == '7') X2 = "6";
            if(D == '8') X2 = "9";
            if(D == '9') X2 = "8";
            if(D == 'A') X2 = "B";
            if(D == 'B') X2 = "A";
            if(D == 'C') X2 = "D";
            if(D == 'D') X2 = "C";
            if(D == 'E') X2 = "F";
            if(D == 'F') X2 = "E";
            break;
        case '2':
            if(D == '0') X2 = "2";
            if(D == '1') X2 = "3";
            if(D == '2') X2 = "0";
            if(D == '3') X2 = "1";
            if(D == '4') X2 = "6";
            if(D == '5') X2 = "7";
            if(D == '6') X2 = "4";
            if(D == '7') X2 = "5";
            if(D == '8') X2 = "A";
            if(D == '9') X2 = "B";
            if(D == 'A') X2 = "8";
            if(D == 'B') X2 = "9";
            if(D == 'C') X2 = "E";
            if(D == 'D') X2 = "F";
            if(D == 'E') X2 = "C";
            if(D == 'F') X2 = "D";
            break;
        case '3':
            if(D == '0') X2 = "3";
            if(D == '1') X2 = "2";
            if(D == '2') X2 = "1";
            if(D == '3') X2 = "0";
            if(D == '4') X2 = "7";
            if(D == '5') X2 = "6";
            if(D == '6') X2 = "5";
            if(D == '7') X2 = "4";
            if(D == '8') X2 = "B";
            if(D == '9') X2 = "A";
            if(D == 'A') X2 = "9";
            if(D == 'B') X2 = "8";
            if(D == 'C') X2 = "F";
            if(D == 'D') X2 = "E";
            if(D == 'E') X2 = "D";
            if(D == 'F') X2 = "C";
            break;
        case '4':
            if(D == '0') X2 = "4";
            if(D == '1') X2 = "5";
            if(D == '2') X2 = "6";
            if(D == '3') X2 = "7";
            if(D == '4') X2 = "0";
            if(D == '5') X2 = "1";
            if(D == '6') X2 = "2";
            if(D == '7') X2 = "3";
            if(D == '8') X2 = "C";
            if(D == '9') X2 = "D";
            if(D == 'A') X2 = "E";
            if(D == 'B') X2 = "F";
            if(D == 'C') X2 = "8";
            if(D == 'D') X2 = "9";
            if(D == 'E') X2 = "A";
            if(D == 'F') X2 = "B";
            break;
        case '5':
            if(D == '0') X2 = "5";
            if(D == '1') X2 = "4";
            if(D == '2') X2 = "7";
            if(D == '3') X2 = "6";
            if(D == '4') X2 = "1";
            if(D == '5') X2 = "0";
            if(D == '6') X2 = "3";
            if(D == '7') X2 = "2";
            if(D == '8') X2 = "D";
            if(D == '9') X2 = "C";
            if(D == 'A') X2 = "F";
            if(D == 'B') X2 = "E";
            if(D == 'C') X2 = "9";
            if(D == 'D') X2 = "8";
            if(D == 'E') X2 = "B";
            if(D == 'F') X2 = "A";
            break;
        case '6':
            if(D == '0') X2 = "6";
            if(D == '1') X2 = "7";
            if(D == '2') X2 = "4";
            if(D == '3') X2 = "5";
            if(D == '4') X2 = "2";
            if(D == '5') X2 = "3";
            if(D == '6') X2 = "0";
            if(D == '7') X2 = "1";
            if(D == '8') X2 = "E";
            if(D == '9') X2 = "F";
            if(D == 'A') X2 = "C";
            if(D == 'B') X2 = "D";
            if(D == 'C') X2 = "A";
            if(D == 'D') X2 = "B";
            if(D == 'E') X2 = "8";
            if(D == 'F') X2 = "9";
            break;
        case '7':
            if(D == '0') X2 = "7";
            if(D == '1') X2 = "6";
            if(D == '2') X2 = "5";
            if(D == '3') X2 = "4";
            if(D == '4') X2 = "3";
            if(D == '5') X2 = "2";
            if(D == '6') X2 = "1";
            if(D == '7') X2 = "0";
            if(D == '8') X2 = "F";
            if(D == '9') X2 = "E";
            if(D == 'A') X2 = "D";
            if(D == 'B') X2 = "C";
            if(D == 'C') X2 = "B";
            if(D == 'D') X2 = "A";
            if(D == 'E') X2 = "9";
            if(D == 'F') X2 = "8";
            break;
        case '8':
            if(D == '0') X2 = "8";
            if(D == '1') X2 = "9";
            if(D == '2') X2 = "A";
            if(D == '3') X2 = "B";
            if(D == '4') X2 = "C";
            if(D == '5') X2 = "D";
            if(D == '6') X2 = "E";
            if(D == '7') X2 = "F";
            if(D == '8') X2 = "0";
            if(D == '9') X2 = "1";
            if(D == 'A') X2 = "2";
            if(D == 'B') X2 = "3";
            if(D == 'C') X2 = "4";
            if(D == 'D') X2 = "5";
            if(D == 'E') X2 = "6";
            if(D == 'F') X2 = "7";
            break;
        case '9':
            if(D == '0') X2 = "9";
            if(D == '1') X2 = "8";
            if(D == '2') X2 = "B";
            if(D == '3') X2 = "A";
            if(D == '4') X2 = "D";
            if(D == '5') X2 = "C";
            if(D == '6') X2 = "F";
            if(D == '7') X2 = "E";
            if(D == '8') X2 = "1";
            if(D == '9') X2 = "0";
            if(D == 'A') X2 = "3";
            if(D == 'B') X2 = "2";
            if(D == 'C') X2 = "5";
            if(D == 'D') X2 = "4";
            if(D == 'E') X2 = "7";
            if(D == 'F') X2 = "6";
            break;
        case 'A':
            if(D == '0') X2 = "A";
            if(D == '1') X2 = "B";
            if(D == '2') X2 = "8";
            if(D == '3') X2 = "9";
            if(D == '4') X2 = "E";
            if(D == '5') X2 = "F";
            if(D == '6') X2 = "C";
            if(D == '7') X2 = "D";
            if(D == '8') X2 = "2";
            if(D == '9') X2 = "3";
            if(D == 'A') X2 = "0";
            if(D == 'B') X2 = "1";
            if(D == 'C') X2 = "6";
            if(D == 'D') X2 = "7";
            if(D == 'E') X2 = "4";
            if(D == 'F') X2 = "5";
            break;
        case 'B':
            if(D == '0') X2 = "B";
            if(D == '1') X2 = "A";
            if(D == '2') X2 = "9";
            if(D == '3') X2 = "8";
            if(D == '4') X2 = "F";
            if(D == '5') X2 = "E";
            if(D == '6') X2 = "D";
            if(D == '7') X2 = "C";
            if(D == '8') X2 = "3";
            if(D == '9') X2 = "2";
            if(D == 'A') X2 = "1";
            if(D == 'B') X2 = "0";
            if(D == 'C') X2 = "7";
            if(D == 'D') X2 = "6";
            if(D == 'E') X2 = "5";
            if(D == 'F') X2 = "4";
            break;
        case 'C':
            if(D == '0') X2 = "C";
            if(D == '1') X2 = "D";
            if(D == '2') X2 = "E";
            if(D == '3') X2 = "F";
            if(D == '4') X2 = "8";
            if(D == '5') X2 = "9";
            if(D == '6') X2 = "A";
            if(D == '7') X2 = "B";
            if(D == '8') X2 = "4";
            if(D == '9') X2 = "5";
            if(D == 'A') X2 = "6";
            if(D == 'B') X2 = "7";
            if(D == 'C') X2 = "0";
            if(D == 'D') X2 = "1";
            if(D == 'E') X2 = "2";
            if(D == 'F') X2 = "3";
            break;
        case 'D':
            if(D == '0') X2 = "D";
            if(D == '1') X2 = "C";
            if(D == '2') X2 = "F";
            if(D == '3') X2 = "E";
            if(D == '4') X2 = "9";
            if(D == '5') X2 = "8";
            if(D == '6') X2 = "B";
            if(D == '7') X2 = "A";
            if(D == '8') X2 = "5";
            if(D == '9') X2 = "4";
            if(D == 'A') X2 = "7";
            if(D == 'B') X2 = "6";
            if(D == 'C') X2 = "1";
            if(D == 'D') X2 = "0";
            if(D == 'E') X2 = "3";
            if(D == 'F') X2 = "2";
            break;
        case 'E':
            if(D == '0') X2 = "E";
            if(D == '1') X2 = "F";
            if(D == '2') X2 = "C";
            if(D == '3') X2 = "D";
            if(D == '4') X2 = "A";
            if(D == '5') X2 = "B";
            if(D == '6') X2 = "8";
            if(D == '7') X2 = "9";
            if(D == '8') X2 = "6";
            if(D == '9') X2 = "7";
            if(D == 'A') X2 = "4";
            if(D == 'B') X2 = "5";
            if(D == 'C') X2 = "2";
            if(D == 'D') X2 = "3";
            if(D == 'E') X2 = "0";
            if(D == 'F') X2 = "1";
            break;
        case 'F':
            if(D == '0') X2 = "F";
            if(D == '1') X2 = "E";
            if(D == '2') X2 = "D";
            if(D == '3') X2 = "C";
            if(D == '4') X2 = "B";
            if(D == '5') X2 = "A";
            if(D == '6') X2 = "9";
            if(D == '7') X2 = "8";
            if(D == '8') X2 = "7";
            if(D == '9') X2 = "6";
            if(D == 'A') X2 = "5";
            if(D == 'B') X2 = "4";
            if(D == 'C') X2 = "3";
            if(D == 'D') X2 = "2";
            if(D == 'E') X2 = "1";
            if(D == 'F') X2 = "0";
            break;
    }
    CC = X1 + X2;
}

void strprachar(char &A, char &B, string C) // Separa a string junta
{
    char charvalues[2];
    strcpy(charvalues, C.c_str());
    A = charvalues[0];
    B = charvalues[1];
}

int main(){ // vai executar o programa
    int PC = -1; // Programcounter
    string AC; // Acumulador
    int instrucao = 0; // Define que nenhuma instrução foi executada
    string rdm; // vai receber as instruções
    string Ficou; // será utilizado para converter o valor de PC para Hexadecimal
    string memoria[256]; // memória principal
    ifstream Arquivo;
    string nome, Linha, val, X, Z; // serão usados para a leitura do arquivo
    char chares[5], A, B, D, E; // Servirá para dividir a linha em chars
    string enderecos[256]; // onde será guardados os endereços que serão alterados para mostrar na memory
    int numeroend = -1; // irá auxiliar na saida dos valores que foram alterados na memória guardados em enderecos

    while(nome == ""){ // Leitura do arquivo
        cout << "Digite o nome do arquivo: ";
        cin >> nome;
        Arquivo.open(nome);
        if(Arquivo.is_open()){
            while(getline(Arquivo, Linha)){
                strcpy(chares, Linha.c_str());
                int C;
                A = chares[0];
                B = chares[1];
                D = chares[3];
                E = chares[4];
                lugarmem(A, B, C); // Usa os chars em hexa para definir o lugar da memória em INT
                X = D;
                Z = E;
                val = X + Z; // Valor depois do lugar da memória em hexadecimal
                memoria[C] = val; // Coloca na memória o valor na sua posição para a leitura
                }
            break;
            }
        nome = ""; // Zera o nome para ser redigitado caso não seja informado corretamente
        }
    cout << "Input file: " << nome << "\n" <<endl; // Saida com nome do arquivo

    while(true){ //cout << memoria[i] << endl;
        PC++;
        rdm = memoria[PC];
        if(rdm == "00"){ // Execução da instrução NOP
            instrucao++;
            cout << "NOP ;" << endl;}
        else if(rdm == "10"){ // Execução da instrução LDR
            instrucao++;
            PC++;
            char A, B;
            int endereco;
            string ende = memoria[PC];
            strprachar(A, B, ende);
            lugarmem(A, B, endereco);
            AC = memoria[endereco];
            cout << "LDR " << ende << " ; AC <- MEM[" << ende << "]" << endl;}
        else if(rdm == "20"){ // Execução da instrução STR
            instrucao++;
            PC++;
            char A, B;
            int endereco;
            string ende = memoria[PC];
            strprachar(A, B, ende);
            lugarmem(A, B, endereco);
            memoria[endereco] = AC;
            enderecos[++numeroend] = ende + " " + AC;
            cout << "STR " << ende << " ; " << "MEM[" << ende << "] <- AC" << endl;}
        else if(rdm == "30"){ // Execução da instrução ADD
            instrucao++;
            PC++;
            char AAC, BAC, AMEM, BMEM;
            int resAC, resMEM;
            char A, B;
            int endereco;
            string ende = memoria[PC];
            strprachar(A, B, ende);
            lugarmem(A, B, endereco);
            string valor = memoria[endereco];
            strprachar(AAC, BAC, AC);
            strprachar(AMEM, BMEM, valor);
            lugarmem(AAC, BAC, resAC);
            lugarmem(AMEM, BMEM, resMEM);
            int ACE = resAC + resMEM;
            deciprahexa(ACE, AC);
            cout << "ADD " << ende << " ; " << "AC <- AC + MEM[" << ende << "]" << endl;}
        else if(rdm == "40"){ // Execução da instrução SUB
            instrucao++;
            PC++;
            char AAC, BAC, AMEM, BMEM;
            int resAC, resMEM;
            char A, B;
            int endereco;
            string ende = memoria[PC];
            strprachar(A, B, ende);
            lugarmem(A, B, endereco);
            string valor = memoria[endereco];
            strprachar(AAC, BAC, AC);
            strprachar(AMEM, BMEM, valor);
            lugarmem(AAC, BAC, resAC);
            lugarmem(AMEM, BMEM, resMEM);
            int ACE = resAC - resMEM;
            deciprahexa(ACE, AC);
            cout << "SUB " << ende << " ; " << "AC <- AC - MEM [" << ende << "]" << endl;}
        else if(rdm == "50"){ // Execução da instrução MUL
            instrucao++;
            PC++;
            char AAC, BAC, AMEM, BMEM;
            int resAC, resMEM;
            char A, B;
            int endereco;
            string ende = memoria[PC];
            strprachar(A, B, ende);
            lugarmem(A, B, endereco);
            string valor = memoria[endereco];
            strprachar(AAC, BAC, AC);
            strprachar(AMEM, BMEM, valor);
            lugarmem(AAC, BAC, resAC);
            lugarmem(AMEM, BMEM, resMEM);
            int ACE = resAC * resMEM;
            deciprahexa(ACE, AC);
            cout << "MUL " << ende << " ; " << "AC <- AC * MEM [" << ende << "]" << endl;}
        else if(rdm == "60"){ // Execução da instrução DIV
            instrucao++;
            PC++;
            char AAC, BAC, AMEM, BMEM;
            int resAC, resMEM;
            char A, B;
            int endereco;
            string ende = memoria[PC];
            strprachar(A, B, ende);
            lugarmem(A, B, endereco);
            string valor = memoria[endereco];
            strprachar(AAC, BAC, AC);
            strprachar(AMEM, BMEM, valor);
            lugarmem(AAC, BAC, resAC);
            lugarmem(AMEM, BMEM, resMEM);
            int ACE = resAC / resMEM;
            deciprahexa(ACE, AC);
            cout << "DIV " << ende << " ; " << "AC <- AC / MEM [" << ende << "]" << endl;}
        else if(rdm == "70"){ // Execução da instrução NOT
            instrucao++;
            char AAC, BAC;
            strprachar(AAC, BAC, AC);
            note(AAC, BAC, AC);
            cout << "NOT ; AC <- !AC" << endl;}
        else if(rdm == "80"){ // Execução da instrução  AND
            instrucao++;
            PC++;
            char AC1, AC2, MEM1, MEM2;
            int endereco;
            string result;
            string ende = memoria[PC];
            strprachar(A, B, ende);
            lugarmem(A, B, endereco);
            string valor = memoria[endereco];
            strprachar(AC1, AC2, AC);
            strprachar(MEM1, MEM2, valor);
            ande(AC1, AC2, MEM1, MEM2, result);
            AC = result;
            cout << "AND " << ende << " ; AC <- AC & MEM[" << ende << "]" << endl;}
        else if(rdm == "90"){ // Execução da instrução OR
            instrucao++;
            PC++;
            char AC1, AC2, MEM1, MEM2;
            int endereco;
            string result;
            string ende = memoria[PC];
            strprachar(A, B, ende);
            lugarmem(A, B, endereco);
            string valor = memoria[endereco];
            strprachar(AC1, AC2, AC);
            strprachar(MEM1, MEM2, valor);
            ore(AC1, AC2, MEM1, MEM2, result);
            AC = result;
            cout << "OR " << ende << " ; AC <- AC | MEM[" << ende << "]" << endl;}
        else if(rdm == "A0"){ // Execução da instrução XOR
            instrucao++;
            PC++;
            char AC1, AC2, MEM1, MEM2;
            int endereco;
            string result;
            string ende = memoria[PC];
            strprachar(A, B, ende);
            lugarmem(A, B, endereco);
            string valor = memoria[endereco];
            strprachar(AC1, AC2, AC);
            strprachar(MEM1, MEM2, valor);
            xore(AC1, AC2, MEM1, MEM2, result);
            AC = result;
            cout << "XOR " << ende << " ; AC <- AC ^ MEM[" << ende << "]" << endl;}
        else if(rdm == "B0"){ // Execução da instrução JMP
            instrucao++;
            int endereco;
            string ende = memoria[PC];
            strprachar(A, B, ende);
            lugarmem(A, B, endereco);
            PC = endereco;
            PC--;
            cout << "JMP " << ende << " ; PC <- " << ende << endl;}
        else if(rdm == "C0"){ // Execução da instrução JEQ
            instrucao++;
            int valorAC;
            strprachar(A, B, AC);
            lugarmem(A, B, valorAC);
            PC++;
            int endereco;
            string ende = memoria[PC];
            strprachar(A, B, ende);
            lugarmem(A, B, endereco);
            cout << "JEQ " << ende << " ; Se AC==0 entao PC <- " << ende << endl;
            if(valorAC == 0){
                PC = endereco;
                PC--;
            }
            else PC++;}
        else if(rdm == "D0"){ // Execução da instrução JG
            instrucao++;
            int valorAC;
            strprachar(A, B, AC);
            lugarmem(A, B, valorAC);
            PC++;
            int endereco;
            string ende = memoria[PC];
            strprachar(A, B, ende);
            lugarmem(A, B, endereco);
            cout << "JG " << ende << " ; Se AC>0 entao PC <- " << ende << endl;
            if(valorAC > 0){
                PC = endereco;
                PC--;
            }
            else PC++;}
        else if(rdm == "E0"){ // Execução da instrução JL
            instrucao++;
            int valorAC;
            strprachar(A, B, AC);
            lugarmem(A, B, valorAC);
            PC++;
            int endereco;
            string ende = memoria[PC];
            strprachar(A, B, ende);
            lugarmem(A, B, endereco);
            cout << "JL " << ende << " ; Se AC<0 entao PC <- " << ende << endl;
            if(valorAC < 0){
                PC = endereco;
                PC--;
            }
            else PC++;}
        else if(rdm == "F0"){ // Execução da instrução HLT
            instrucao++;
            cout << "HLT" << endl;
            break;
        }
    }
    PC++;
    deciprahexa(PC, Ficou);
    // SAIDA DO ARQUIVO
    cout << "\n" << instrucao << " instructions executed\n"<< endl;
    cout << "Registers:" << endl;
    cout << "AC " << AC << endl;
    cout << "PC " << Ficou << endl;
    cout << "\nMemory:" << endl;
    for(int xaxa = 0; xaxa <= numeroend; xaxa++){
        cout << enderecos[xaxa] << endl;
    }
	return 0;
}
