// setya carina rianti 23343054

#include <stdio.h>

struct complex{
	int imag; 
	float real;
};

struct number{
	struct complex comp;
	int integers;
}num1, num2;
//Buatlah nested struct sampai dengan 5 tingkat 

// Struktur pertama
struct level1 {
    int data1;
    // Struktur kedua
    struct level2 {
        float data2;
        // Struktur ketiga
        struct level3 {
            char data3;
            // Struktur keempat
            struct level4 {
                double data4;
                // Struktur kelima
                struct level5 {
                    long data5;
                } nested5;
            } nested4;
        } nested3;
    } nested2;
};

int main() {
    // Inisialisasi struktur sampai level 5
    struct level1 data;

    // Mengakses dan mengatur nilai dalam struktur
    data.nested2.nested3.nested4.data4 = 3.14;
    data.nested2.nested3.nested4.nested5.data5 = 12345;

    // Mencetak nilai
    printf("Nilai dalam nested struct level 5: %ld\n", data.nested2.nested3.nested4.nested5.data5);

    return 0;
}