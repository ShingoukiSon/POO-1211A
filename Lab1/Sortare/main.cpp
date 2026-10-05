#include <iostream>
#include <utility>

// Algoritmul Selection Sort
void selectionSort(int *arr, int n) {
    for (int i = 0; i < n - 1; ++i) {
        int min_idx = i;
        
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        // Daca s-a gasit un element mai mic, le interschimbam
        if (min_idx != i) {
            std::swap(arr[i], arr[min_idx]); // Punct ideal pentru Breakpoint
        }
    }
}

int main() {
    int n = 5;

    // Alocare dinamica in C++
    int *arr = new int[n]{64, 25, 12, 22, 11};

    std::cout << "Tabloul initial: ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    // Apelul functiei de sortare
    selectionSort(arr, n);

    std::cout << "Tabloul sortat:  ";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";

    // Eliberarea memoriei alocate dinamic
    delete[] arr;
    arr = nullptr;

    return 0;
}