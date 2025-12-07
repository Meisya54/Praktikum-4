#include <iostream>
#include <iomanip> 

using namespace std;
const int UKURAN = 4;

void tampilkanMatriks(int matriks[UKURAN][UKURAN], const string& nama) {
    cout << "Matriks " << nama << ":" << endl;
    for (int i = 0; i < UKURAN; i++) {
        for (int j = 0; j < UKURAN; j++) {
            cout << setw(4) << matriks[i][j];
        }
        cout << endl;
    }
    cout << endl;
}

int main() {

    cout << "Nama : Meisya Rozzaaqy Widya Putri \n";
    cout << "NIM : 25104410054\n";
    cout << "Prodi : Teknik Informatika 1B\n";
    cout << "Tugas Praktikum 4\n\n";
    cout << "=== Program Perkalian Matriks 4x4 ===" << endl;

    int matriksA[UKURAN][UKURAN] = {
        {1, 2, 3, 4},
        {1, 2, 3, 4},
        {2, 1, 4, 3},
        {2, 1, 4, 3}
    };

    int matriksB[UKURAN][UKURAN] = {
        {3, 4, 1, 2},
        {3, 4, 1, 2},
        {4, 3, 2, 1},
        {4, 3, 2, 1}
    };

    int hasilMatriks[UKURAN][UKURAN];

    for (int i = 0; i < UKURAN; i++) {
        for (int j = 0; j < UKURAN; j++) {
            hasilMatriks[i][j] = 0;
        }
    }

    for (int i = 0; i < UKURAN; i++) {
        for (int j = 0; j < UKURAN; j++) {
            for (int k = 0; k < UKURAN; k++) {
                hasilMatriks[i][j] += matriksA[i][k] * matriksB[k][j];
            }
        }
    }

    tampilkanMatriks(matriksA, "A");
    tampilkanMatriks(matriksB, "B");

    cout << "====================================\n";
    cout << "Matriks Hasil Perkalian (A x B):" << endl;
    tampilkanMatriks(hasilMatriks, "A x B");

    return 0;
}