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

void q_sort(int low, int high) {
    int pivot, i, j;
    if (low > high) //langkah 1
        return;

    //Partition the list into two parts
    //One containing element less than or equal to pivot
    //Other containing element greater than pivot
    i = low + 1; //Langkah 3
    j = high; // Langkah 4
    pivot = arr[low] //Langkah 2

        while (i <= j) { //langkah 10
            //search for an element greater than pivot
            while ((arr[i] <= pivot) && (j >= low)) { //langkah 5
                i++; //langkah 6
                cmp_count++;

           }
            cmp_count++
            // search for an element less than or equal to pivot
                while ((arr[j] > pivot) && (j >= low)) { //langkah 7
                    j--;
                    cmp_count++;
                }
            cmp_count++;
            // if the greater element is on the left of the element
            if (i < j) { //langkah 9
                // swap the element at index i with the element at index j
                swap(i, j);
                mov_count;
            }

        }
}

int main()
{
    std::cout << "Hello World!\n";
}

