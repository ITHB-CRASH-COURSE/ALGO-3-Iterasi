#include <iostream>
using namespace std;

int main(){
    bool isTrue = false;
    int jawaban;
    while(isTrue == false){
        cout << "2 + 2 = ";
        cin >> jawaban;
        if(jawaban == 4){
            cout << "Jawaban anda benar!" << endl;
            isTrue = true;
        }else{
            cout << "Jawaban anda salah!" << endl;
        }
    }
    return 0;
}
