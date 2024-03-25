// ucpAlgoritma.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Soal UCP Sorting Tipe 1

//1. insertion sort membandingkan serta menukarkan data dengan mengsortir data sortir terdekat.
 
//2. Selection sort membandingkan serta menukar elemen elemenn dengan cara scan melalui list yg ada, pilih satu data di setiap scan and pindahkan data ke posisi yang tepat pada list. 

//3. dalam algoritma sortir dapat mengetahui jumlah langkah yang dilakukan dengan cara mengindentifikasi sortir data yg akan digunakan

//4. konversi Algoritma:

#include <iostream>
using namespace std;
int mariska[67];                                                    // Membuat Array dengan panjang data 67
int n;                                                          //Membuat variabel inputan n

void input() {                                                  // Procedure Input
    while (true)
    {
        cout << "Masukkan Jumlah Data Pada Array: ";            // Membuat inputan jumlah element Array
        cin >> n;                                               // Memanggil variabel inputan n


        if (n <= 67) {                                           // Membuat kondisi n tidak lebih dari 20
            break;
        }
        else
        {
            cout << "\n Array yang anda masukkan maksimal 67. \n";  // Menampilkan pesan jika data lebih dari 20
        }
    }
    cout << endl;                                   // Membuat jarak per baris program
    cout << "=======================" << endl;       //Membuat tampilan  susunan data element arrray
    cout << "Masukkan Element Array" << endl;
    cout << "=======================" << endl;

    for (int i = 0; i < n; i++)                     // Menggunakan perulangan for untuk menyimpan data pada array
    {
        cout << "Data Ke-" << (i + 1) << ": ";      // Memasukkan atau menginputkan nilai data ke-n
        cin >> mariska[i];                              // Menyimpan nilai data ke-n kedalam arrray arr
    }
}

void insertionsort() {                              // Procedure Insertionsort
    int temp;                                       // Membuat variable data temporer atau penyimpanan sementara
    int i, j;                                       // Membuat variable j sebagai penanda


    for (i = 0; i <= n - 2; i++) {                  // 1. Looping dengan i dimulai dari 0 hingga n-2

        temp = mariska[i];                               // 2. Simpan nilai arr[i] ke variable sementara temp

        j = i - 1;                                  // 3. Setting nilai j sama dengan i-1;

        while (j >= 0 && mariska[j] > temp)             // 4. Loopping while dimana nilai j lebih besar sama dengan 0 dan
                // arr[j] lebih besar daripada temp
        {
            mariska[j + 1] = mariska[j];                    // 4a. Simpan arr[j] ke dalam variable arr[j+1]
            j--;                                    // 4b. Decrement nilai j by 1
        }

        mariska[j + 1] = temp;                          // 5. Simpan nilai temp ke dalam arr[j+1]

        cout << "\nPass " << i << ": ";
        for (int k = 0; k < n; k++) {
            cout << mariska[k] << " ";
        }
    }
}


void display() {                            // Procedure Display
    cout << endl;                           // Output baris kosong
    cout << "\n===============================" << endl;       //Output ke layar
    cout << "Element Array yang telah tersusun" << endl;        // Output ke layar
    cout << "=================================" << endl;        // Output ke layar

    for (int j = 0; j < n; j++) {            // Looping dengan j dimulai dari 0 hingga n-2
        cout << mariska[j] << endl;             // Output ke layar
    }
    cout << endl;                           // Output baris kosong

}

int main()
{

    input();                // Memanggil input
    insertionsort();        // Memanggil insertionsort
    display();              // Memanggil display
}






            


