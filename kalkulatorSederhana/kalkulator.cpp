#include <iostream>

using namespace std;

int main() 
{
    float a,b,equal;
    char matematika;

    cout << "Selamat datang di program kalkulator sederhana\n" << endl;

    // Mendapatkan input dari pengguna
    cout << "Masukkan nilai pertama : ";
    cin >> a;
    cout << "Pilih operator +,-,*,/ : ";
    cin >> matematika;
    cout << "Masukkan nilai kedua : ";
    cin >> b;

    // Untuk menggunakan operator
    if (matematika == '+'){
        equal = a + b;
        cout << a << " " << matematika << " " << b << " = " << equal << endl; 
    } else if (matematika == '-'){
        equal = a-b;
        cout << a << " " << matematika << " " << b << " = " << equal << endl; 
    } else if (matematika == '*'){
        equal = a*b;
        cout << a << " " << matematika << " " << b << " = " << equal << endl; 
    } else if (matematika == '/'){
        equal = a/b;
        cout << a << " " << matematika << " " << b << " = " << equal << endl; 
    } else {
        cout << "Operator yang dimasukkan salah" << endl;
    }

    cin.get();
    cin.get();
    return 0;
}