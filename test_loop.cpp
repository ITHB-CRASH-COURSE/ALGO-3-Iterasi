#include <iostream>
using namespace std;

int main(){
    bool isBenar = false;
    int jawaban;
    while(!isBenar){
        cout << "10 - 5 = ";
        cin >> jawaban;
        if(jawaban != 5){
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
        }else{
            cout << "Jawaban anda benar!";
            isBenar = true;
        }
    }
    return 0;
}
