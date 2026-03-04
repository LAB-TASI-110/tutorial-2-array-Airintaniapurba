#include <stdio.h>   // Untuk fungsi input/output seperti printf dan scanf
#include <limits.h>  // Untuk INT_MAX dan INT_MIN

// Fungsi utama program
int main() {
    int n;          // Variabel untuk menyimpan jumlah bilangan yang akan dimasukkan
    int num;        // Variabel sementara untuk menyimpan setiap bilangan yang diinput
    int min_val;    // Variabel untuk menyimpan nilai terkecil
    int max_val;    // Variabel untuk menyimpan nilai terbesar
    
    // Inisialisasi min_val dengan nilai integer maksimum yang mungkin.
    // Ini memastikan bahwa bilangan pertama yang dimasukkan akan selalu lebih kecil
    // dari INT_MAX dan akan menjadi min_val pertama.
    min_val = INT_MAX;
    
    // Inisialisasi max_val dengan nilai integer minimum yang mungkin.
    // Ini memastikan bahwa bilangan pertama yang dimasukkan akan selalu lebih besar
    // dari INT_MIN dan akan menjadi max_val pertama.
    max_val = INT_MIN;

    // Membaca input pertama: jumlah bilangan (n)
    printf("Masukkan jumlah bilangan (n): "); // Pesan panduan untuk pengguna
    if (scanf("%d", &n) != 1 || n < 0) { // Validasi dasar: memastikan input adalah angka dan tidak negatif
        printf("Input jumlah bilangan tidak valid. Harap masukkan bilangan bulat positif atau nol.\n");
        return 1; // Keluar dengan kode error
    }

    if (n == 0) {
        // Jika tidak ada bilangan yang dimasukkan, tidak ada min/max yang bisa ditentukan.
        // Sesuai dengan spesifikasi, kita tidak menampilkan apa-apa jika n=0 (atau bisa juga pesan khusus).
        // Karena contoh output tidak menunjukkan output untuk n=0, kita bisa kosongkan atau berikan pesan.
        // Untuk tujuan ini, saya akan keluar tanpa output min/max jika n=0.
        // Tetapi untuk lebih jelas, akan saya tambahkan pesan.
        printf("Tidak ada bilangan untuk diproses.\n");
        return 0;
    }

    printf("Masukkan %d bilangan, setiap bilangan pada baris baru:\n", n);
    // Loop untuk membaca n bilangan berikutnya
    for (int i = 0; i < n; i++) {
        // Membaca setiap bilangan.
        if (scanf("%d", &num) != 1) { // Validasi dasar: memastikan input adalah angka
            printf("Input bilangan ke-%d tidak valid. Harap masukkan bilangan bulat.\n", i + 1);
            return 1; // Keluar dengan kode error
        }

        // Membandingkan dengan nilai terkecil yang sudah ditemukan
        if (num < min_val) {
            min_val = num;
        }

        // Membandingkan dengan nilai terbesar yang sudah ditemukan
        if (num > max_val) {
            max_val = num;
        }
    }

    // Menampilkan hasil nilai terkecil dan terbesar
    // Sesuai contoh keluaran, tidak ada label "Hasil:"
    printf("%d\n", min_val); // Menampilkan nilai terkecil
    printf("%d\n", max_val); // Menampilkan nilai terbesar

    return 0; // Menandakan program berakhir dengan sukses
}