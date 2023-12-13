#include <cstdlib>
#include <iostream>
using namespace std;

int main(){
    int A,T,L,P,l;
    string rumus;
    cout <<"luas apa yg akan dihitung=  ";
    cin >>rumus;
    if(rumus == "persegi"){
        cout << "masukan panjang : ";
        cin >> P;
        cout << "masukan Lebar : ";
        cin >> L;
        l = P*L;
        cout << "luas = ";
        cout << l << endl;
    }else {
         cout <<"masukan alas = ";  
         cin >>A;
         cout <<"masukan Tinggi = ";
         cin >>T;
         L=(A*T)/2;
         cout <<"luas = ";
         cout << L << endl;
        }
        system ("PAUSE");
        return 0;
    }
    
