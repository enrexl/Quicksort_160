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

    cout << "\n=====================" << endl;
    cout << "\n Enter Array Element" << endl;
    cout << "\n=====================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}
//swap the element at index x with the element at index y
void swap(int x, int y) {
    int temp;
    temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}


int main()
{
    std::cout << "Hello World!\n";
}

