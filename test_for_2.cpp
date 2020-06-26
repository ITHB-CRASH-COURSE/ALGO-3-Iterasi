#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Input : ";
    cin >> n;
    cout << "Output : ";

    for(int i = 2; i <= n * 2; i += 2){
        cout << i << endl;
    }
    return 0;
}
