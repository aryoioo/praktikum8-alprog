#include <iostream>
using namespace std;

int main(){
    //Membuat array 3 dimensi kosong
    int a[2][3][4];
    
    //Mengisi nilai array 3 dimensi
    a[0][0][0] = 1;     
    a[0][0][1] = 2;
    a[0][0][2] = 3;
    a[0][0][3] = 4;
    a[0][1][0] = 5;
    a[0][1][1] = 6;
    a[0][1][2] = 7;
    a[0][1][3] = 8;
    a[0][2][0] = 9;
    a[0][2][1] = 10;
    a[0][2][2] = 11;
    a[0][2][3] = 12;
    a[1][0][0] = 13;
    a[1][0][1] = 14;
    a[1][0][2] = 15;
    a[1][0][3] = 16;
    a[1][1][0] = 17;
    a[1][1][1] = 18;
    a[1][1][2] = 19;
    a[1][1][3] = 20;
    a[1][2][0] = 21;
    a[1][2][1] = 22;
    a[1][2][2] = 23;
    a[1][2][3] = 24;
    
    //Mencetak salah satu isi array
    cout<<"Nilai index ke-[1][1][1] : "<<a[1][1][1]<<endl;
}