#include <iostream>
using namespace std;

//array of integers untuk menyimpan value
int arr[20];
int cmp_count = 0; //counter perbandingan
int mov_count = 0; //counter pertukaran/swap
int n;

void input() {
    while (true) {
        cout << "Masukkan panjang element array :";
        cin >> n;

        if (n <= 20)
            break;
        else
            cout << "\n Maksimum panjang array adalah 20" << endl;
    }

}

int main()
{
    std::cout << "Hello World!\n";
}

