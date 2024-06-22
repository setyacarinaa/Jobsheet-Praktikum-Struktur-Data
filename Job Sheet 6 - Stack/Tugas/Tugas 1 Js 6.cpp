//Setya Carina Rianti 23343054

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

// Struktur untuk data mahasiswa
typedef struct {
    char nim[20];
    char nama[50];
    float nilai;
} Mahasiswa;

// Struktur untuk stack
typedef struct {
    Mahasiswa data[MAX_SIZE];
    int top;
} Stack;

// Inisialisasi stack
void initStack(Stack *stack) {
    stack->top = -1;
}

// Fungsi untuk mengecek apakah stack kosong
int isEmpty(Stack *stack) {
    return (stack->top == -1);
}

// Fungsi untuk mengecek apakah stack penuh
int isFull(Stack *stack) {
    return (stack->top == MAX_SIZE - 1);
}

// Fungsi untuk menambahkan data ke dalam stack (push)
void push(Stack *stack, Mahasiswa mhs) {
    if (isFull(stack)) {
        printf("\nStack penuh, tidak dapat menambahkan data.\n\n");
        return;
    }
    stack->data[++(stack->top)] = mhs;
}

// Fungsi untuk menghapus data dari stack (pop)
Mahasiswa pop(Stack *stack) {
    Mahasiswa temp;
    if (isEmpty(stack)) {
        printf("\nStack kosong, tidak dapat mengambil data.\n\n");
        strcpy(temp.nim, "");
        strcpy(temp.nama, "");
        temp.nilai = 0;
        return temp;
    }
    temp = stack->data[(stack->top)--];
    return temp;
}

// Fungsi untuk menukar dua data Mahasiswa
void swap(Mahasiswa *a, Mahasiswa *b) {
    Mahasiswa temp = *a;
    *a = *b;
    *b = temp;
}

// Fungsi untuk sorting (pengurutan) data mahasiswa berdasarkan nilai (bubble sort)
void sort(Stack *stack) {
    for (int i = 0; i <= stack->top; i++) {
        for (int j = 0; j < stack->top - i; j++) {
            if (stack->data[j].nilai > stack->data[j + 1].nilai) {
                swap(&(stack->data[j]), &(stack->data[j + 1]));
            }
        }
    }
}

// Fungsi untuk menampilkan data mahasiswa
void display(Stack *stack) {
    if (isEmpty(stack)) {
        printf("\nStack kosong, tidak ada data untuk ditampilkan.\n\n");
        return;
    }
    printf("\nData mahasiswa:\n");
    for (int i = stack->top; i >= 0; i--) {
        printf("\nNIM: %s, Nama: %s, Nilai: %.2f\n\n", stack->data[i].nim, stack->data[i].nama, stack->data[i].nilai);
    }
}

int main() {
    Stack stack;
    initStack(&stack);

    int choice;
    do {
        printf("\n===MENU===\n");
        printf("1. Tambah Data Mahasiswa\n");
        printf("2. Hapus Data Mahasiswa Teratas\n");
        printf("3. Tampilkan Data Mahasiswa\n");
        printf("4. Urutkan Data Mahasiswa Berdasarkan Nilai\n");
        printf("5. Keluar\n");
        printf("Pilihan: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (!isFull(&stack)) {
                    Mahasiswa mhs;
                    printf("Input NIM: ");
                    scanf("%s", mhs.nim);
                    printf("Input Nama: ");
                    scanf(" %[^\n]s", mhs.nama); // Menerima input string dengan spasi
                    printf("Input Nilai: ");
                    scanf("%f", &mhs.nilai);
                    push(&stack, mhs);
                    printf("Data mahasiswa berhasil ditambahkan.\n\n");
                } else {
                    printf("Stack penuh, tidak dapat menambahkan data.\n\n");
                }
                break;
            case 2:
                if (!isEmpty(&stack)) {
                    Mahasiswa removedMhs = pop(&stack);
                    printf("\nData mahasiswa teratas berhasil dihapus:\n");
                    printf("\nNIM: %s, Nama: %s, Nilai: %.2f\n\n", removedMhs.nim, removedMhs.nama, removedMhs.nilai);
                } else {
                    printf("\nStack kosong, tidak ada data untuk dihapus.\n\n");
                }
                break;
            case 3:
                display(&stack);
                break;
            case 4:
                sort(&stack);
                printf("\nData mahasiswa berhasil diurutkan berdasarkan nilai.\n\n");
                break;
            case 5:
                printf("\nProgram selesai.\n\n");
                break;
            default:
                printf("\nPilihan tidak valid.\n\n");
        }
    } while (choice != 5);

    return 0;
}