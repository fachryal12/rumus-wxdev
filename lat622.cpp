#include <cstdlib>
#include <iostream>
using namespace std;

int main()
{
    unsigned int bilangan_n;
    unsigned long long nilai_fak = 1;
    
    cout << "masukkan bilangan bulat positif: : ";
    cin >> bilangan_n;
    
    for (int i = 1; i <=bilangan_n; ++i)
    {
        nilai_fak *= i;
    }
    cout << "faktorial " << bilangan_n << " = " << nilai_fak << endl;
    
    system ("PAUSE");
    return 0;
}
    
