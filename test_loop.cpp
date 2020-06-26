/*
    Deskripsi Program:
    Program yang meminta jawaban yang akan menulis silang sampai jawaban yang diberikan user adalah jawaban yang benar
    Author(s):
    Lucky Setiawan
*/
#include <iostream>
using namespace std;

int main(){
    bool isBenar = false;
    int jawaban;
    // Loop untuk mengulang sampai jawaban benar
    while(!isBenar){
        cout << "10 - 5 = ";
        cin >> jawaban;
        if(jawaban != 5){ // Jawaban Salah
            // Loop untuk menampilkan pola silang
            for(int i = 0; i < 5; i++){
                for(int j = 0; j < 5; j++){
                    if(i == j || i + j == 4){
                        cout << " * ";
                    }else{
                        cout << "   ";
                    }
                }
                cout << endl;
            }
        }else{ // Jawaban Benar
            cout << "Jawaban anda benar!";
            isBenar = true;
        }
    }
    return 0;
}
