<img src="https://github.com/setyacarinaa/Jobsheet-Praktikum-Struktur-Data/blob/main/asset/header%20readme.gif" width="1000" height="260"/>

# Praktikum Struktur Data <img src="https://www.thedataschool.com.au/wp-content/uploads/2022/01/logo-data-structures-algorithms.png" width="34" height="34">
### Laporan praktikum ini berisi penjelasan materi dari jobsheet yang diberikan dosen pengampu lengkap beserta latihan dan tugas.

<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

* __Nama: Setya Carina Rianti__
* __NIM: 23343054__
* __Prodi: Informatika(NK)__
* __Kode Kelas: INF1.62.2014__
* __Seksi: 202323430156__
* __Dosen Pengampu: Randi Proska Sandra, M.Sc__

<img src="https://user-images.githubusercontent.com/73097560/115834477-dbab4500-a447-11eb-908a-139a6edaec5c.gif">

## Uraian Materi📜

</details>
<details><summary><h3>1. Pengenalan Struktur Data</h3></summary>

Pemrograman struktur data menggunakan berbagai macam konsep untuk penyimpanan dan pengaturan data. Dalam pemrograman C, hal ini sering melibatkan penggunaan variable Array, Struktur, dan Linked list. Struktur data adalah cara penyusunan, penyimpanan, dan pengaturan data di dalam komputer untuk penggunaan yang efisien. Data sendiri adalah representasi dari fakta dunia nyata dalam bentuk tulisan, suara, gambar, atau simbol.

Beberapa struktur data standar yang digunakan dalam bidang informatika meliputi:

- List Linear (Linked List) dan variasinya
- Multilist
- Stack (Tumpukan)
- Queue (Antrian)
- Tree (Pohon)
- Graph (Graf)

Setiap struktur data memiliki kegunaan dan aplikasi yang berbeda, sesuai dengan kebutuhan dalam pengembangan program.
    <a href="https://www.embarcadero.com/free-tools/dev-cpp/free-download"><img src="https://img.shields.io/badge/DevC++-purple?style=plastic&logo=DevC++&logoColor=white"/></a>
    <a href="https://code.visualstudio.com/download"><img src="https://img.shields.io/badge/VSCode-purple?style=plastic&logo=VSCode&logoColor=white"/></a>
    <a href="https://sourceforge.net/projects/codeblocks/"><img src="https://img.shields.io/badge/CodeBlocks-purple?style=plastic&logo=CodeBlocks&logoColor=white"/></a>
    <a href="https://netbeans.apache.org/front/main/download/index.html"><img src="https://img.shields.io/badge/NetBeans-purple?style=plastic&logo=NetBeans&logoColor=white"/></a>

</details>
<details><summary><h3>2. Array, Pointer, Structure</h3></summary>

Tentu, berikut adalah parafrase dari teks yang Anda berikan:

- **Array**: Kumpulan nilai dengan tipe data yang sama, diakses melalui indeks dimulai dari 0. Digunakan untuk menyimpan data terstruktur seperti bilangan, string, atau objek.

- **Pointer**: Variabel yang menyimpan alamat memory sebagai nilainya. Berbeda dengan variabel biasa yang menyimpan nilai tertentu, pointer menyimpan alamat. Digunakan tanda (*) untuk mendeklarasikan variabel pointer, dan & untuk mendapatkan alamat memori serta * untuk mendapatkan isi atau nilai dari alamat yang ditunjuk pointer.

- **Structure**: Kumpulan variabel dengan tipe data yang berbeda, dikelompokkan dalam satu objek dengan nama tertentu. Digunakan '.' untuk mengakses anggota struktur dan '->' untuk akses menggunakan pointer pada struktur.

</details>
<details><summary><h3>3. Single Linked List</h3></summary>

Single linked list adalah struktur data linear di mana simpul-simpulnya terhubung menggunakan pointer. Setiap simpul memiliki dua bagian utama: data yang disimpan di dalamnya, dan pointer yang menunjuk ke simpul berikutnya dalam daftar. Pada simpul terakhir, pointer tersebut menunjuk ke nilai null, menandakan akhir dari linked list.

Simpul atau node dalam linked list merupakan objek yang berisi alamat serta data yang disimpan di dalamnya. Penggunaan alokasi memori memungkinkan pembuatan buffer dan array secara dinamis, di mana ruang memori dialokasikan saat program dieksekusi sesuai kebutuhan program.

Dalam konteks penggunaan alokasi memori, perintah sizeof() digunakan untuk mendapatkan ukuran objek dalam byte sebelum melakukan alokasi. Sedangkan perintah malloc() adalah fungsi standar dalam C yang digunakan untuk mengalokasikan memori sesuai dengan jumlah byte yang diberikan sebagai parameter. Fungsi malloc() mengembalikan pointer yang menunjuk ke buffer yang dialokasikan, dan jika alokasi memori gagal, fungsi tersebut mengembalikan pointer NULL.

Linked list tunggal adalah struktur data di mana setiap simpul atau node memiliki alamat yang saling terhubung. Setiap simpul dapat menyimpan data berupa karakter, bilangan bulat, string, atau tipe data lainnya. Tujuan utama dari linked list adalah untuk mengatur dan menghubungkan data secara fleksibel, dengan kemampuan memutuskan urutan data serta menyambungkannya kembali sesuai kebutuhan.

</details>
<details><summary><h3>4. Doubly Linked List</h3></summary>

Doubly linked list (DLL) merupakan struktur data yang memiliki pointer tambahan, yaitu pointer sebelumnya, selain dari pointer berikutnya dan data yang ada dalam daftar tunggal. Mirip dengan single linked list, DLL juga memiliki kepala (head) dan ekor (tail), tetapi perbedaannya terletak pada kemampuan DLL untuk bergerak maju dan mundur, karena setiap simpul memiliki pointer ke simpul sebelumnya dan berikutnya.

Kelebihan dari doubly linked list dibandingkan dengan single linked list adalah:

- Dapat bergerak maju dan mundur, memungkinkan operasi penghapusan dan penambahan simpul yang lebih efisien.
- Operasi penghapusan lebih sederhana karena dapat langsung menggunakan pointer ke simpul yang akan dihapus.
- Proses penambahan simpul lebih efisien karena dapat langsung memanipulasi pointer sebelumnya dan berikutnya.

Namun, kekurangan dari doubly linked list adalah:

- Membutuhkan ruang memori tambahan untuk menyimpan pointer sebelumnya pada setiap simpul.
- Setiap operasi yang dilakukan harus memperhatikan dan memanipulasi pointer sebelumnya.

Proses penambahan simpul dalam doubly linked list meliputi:

- Penambahan simpul di depan.
- Penambahan setelah simpul tertentu.
- Penambahan di ekor.
- Penambahan sebelum simpul tertentu.

</details>
<details><summary><h3>5. Double and Circular Linked List</h3></summary>

Double linked list adalah struktur data di mana setiap elemen terhubung dengan dua pointer dalam satu node. Struktur ini memungkinkan list untuk dilintasi baik ke depan (next) maupun ke belakang (prev). Setiap elemen dalam double linked list terdiri dari tiga bagian: data (info), pointer next yang menunjuk ke elemen berikutnya, dan pointer prev yang menunjuk ke elemen sebelumnya. Head dari double linked list ditandai dengan pointer prev dari elemen pertama yang menunjuk ke NULL, sedangkan tail ditandai dengan pointer next dari elemen terakhir yang menunjuk ke NULL.

Untuk melintasi kembali double linked list, digunakan pointer prev dari elemen yang berurutan dari tail ke head. Double linked list memiliki fleksibilitas lebih tinggi daripada single linked list dalam perpindahan pada list.

Circular linked list, di sisi lain, adalah bentuk lain dari linked list yang memungkinkan elemen-elemen untuk dilewati secara fleksibel. Circular list bisa berupa single linked list atau double linked list, namun tidak memiliki tail. Pada circular list, pointer next dari elemen terakhir menunjuk ke elemen pertama daripada NULL. Pada double linked circular list, pointer prev dari elemen pertama menunjuk ke elemen terakhir.

</details>
<details><summary><h3>6. Stack</h3></summary>

Stack adalah struktur data di mana elemen-elemen data disusun secara vertikal, di mana elemen terbaru diletakkan di atas elemen yang sudah ada. Prinsip yang digunakan dalam stack adalah Last In First Out (LIFO), di mana elemen terakhir yang dimasukkan menjadi elemen pertama yang diambil. Dalam operasi pada stack, penambahan elemen disebut push, sedangkan pengambilan elemen dari posisi teratas disebut pop.

Pada penyajian stack dengan menggunakan array, hal ini bisa dilakukan tetapi dengan catatan bahwa ukuran array bersifat statis sementara jumlah elemen dalam stack bersifat dinamis. Hal ini berarti kita harus memastikan bahwa jumlah elemen dalam stack tidak melebihi ukuran maksimal array untuk menghindari overflow. Ada dua bentuk penyajian stack menggunakan array, yaitu Single stack dan Double stack.

Operasi yang umum dilakukan pada stack meliputi:

- Push: Menambahkan elemen baru ke stack, membuatnya menjadi elemen teratas.
- Pop: Menghapus elemen teratas dari stack.
- Peek: Melihat elemen teratas tanpa menghapusnya.
- isFull: Memeriksa apakah stack sudah penuh sebelum menambahkan elemen baru.
- isEmpty: Memeriksa apakah stack kosong sebelum melakukan operasi pada elemennya.
- Clear: Mengosongkan seluruh isi stack.

</details>
<details><summary><h3>7. Queue</h3></summary>

Queue adalah struktur data yang sangat berguna dalam pemrograman struktur data, dengan prinsip utama FIFO (First In First Out), di mana item yang pertama masuk akan menjadi item yang pertama keluar. Pada queue, proses penambahan item disebut "enqueue" dan penghapusan item disebut "dequeue".

Spesifikasi dari queue, yang juga dikenal sebagai Abstract Data Type (ADT), meliputi:

- Enqueue: Menambahkan elemen ke ujung belakang antrian.
- Dequeue: Menghapus elemen dari ujung depan antrian.
- IsEmpty: Memeriksa apakah antrian kosong.
- IsFull: Memeriksa apakah antrian penuh.
- Peek: Mendapatkan nilai dari ujung depan antrian tanpa menghapusnya.

Cara kerja queue melibatkan dua pointer, yaitu FRONT dan REAR, yang digunakan untuk melacak elemen pertama dan terakhir dalam antrian. Pada awalnya, nilai FRONT dan REAR diatur ke -1. Saat melakukan enqueing, nilai indeks REAR ditingkatkan dan elemen baru ditempatkan di posisi yang ditunjuk oleh REAR. Pada dequeueing, nilai yang ditunjuk oleh FRONT dikembalikan dan nilai FRONT ditingkatkan.

Sebelum melakukan enqueing, dilakukan pemeriksaan apakah antrian sudah penuh. Sebelum dequeueing, dilakukan pemeriksaan apakah antrian sudah kosong. Ketika elemen pertama dibuat, nilai FRONT diatur ke 0, dan saat elemen terakhir dihapus, nilai FRONT dan REAR direset ke -1.

</details>
<details><summary><h3>8. Bubble and Insertion Sort</h3></summary>

Pengurutan data merujuk pada proses menyusun data dalam urutan tertentu sesuai dengan aturan yang ditetapkan, seperti dari nilai terkecil ke terbesar untuk bilangan atau dari A-Z untuk string. Data yang telah diurutkan memudahkan pembacaan dan pemahaman data dalam sebuah laporan atau aplikasi komputer.

Terdapat beberapa teknik pengurutan data yang terkenal, antara lain:

1. Bubble sort: Algoritma pengurutan yang melakukan pertukaran data secara berulang dengan tetangga terdekatnya hingga data terurut.
2. Insertion sort: Algoritma yang mirip dengan cara kita mengurutkan kartu di tangan, dengan meletakkan data pada tempat yang sesuai pada setiap iterasi pengurutan.

Kedua teknik ini merupakan cara pengurutan dasar yang umum digunakan dalam pemrosesan data.

</details>
<details><summary><h3>9. Selection and Merge Sort</h3></summary>

Selection sort merupakan algoritma pengurutan yang mencari elemen terkecil dalam sebuah list yang belum terurut pada setiap iterasi, dan menempatkannya di posisi paling depan dari list data. Cara kerja selection sort dapat dijelaskan sebagai berikut:

1. Tentukan elemen pertama dari list sebagai elemen "minimum".
2. Bandingkan elemen minimum dengan elemen kedua. Jika elemen kedua lebih kecil dari elemen minimum, maka elemen kedua dianggap sebagai minimum.
3. Lanjutkan proses perbandingan minimum dengan elemen-elemen selanjutnya hingga elemen terakhir.
4. Setelah selesai satu iterasi, elemen minimum ditempatkan di posisi paling depan dari list data.
5. Proses ini diulang kembali untuk elemen-elemen yang belum terurut, dengan menggeser indeks awal pada setiap iterasi.

Sementara itu, merge sort adalah teknik pengurutan yang mengadopsi strategi "bagi dan gabung" (divide and conquer). Langkah-langkah dalam merge sort meliputi:

1. Memecah data menjadi sub bagian yang lebih kecil dengan jumlah yang sama.
2. Mengurutkan setiap sub bagian secara terpisah.
3. Menggabungkan kembali sub bagian yang telah terurut menjadi satu list data yang terurut secara keseluruhan.

Strategi Divide and Conquer digunakan untuk memecahkan masalah utama dengan membaginya menjadi sub masalah yang lebih kecil, menyelesaikan setiap sub masalah, dan kemudian menggabungkan solusi sub masalah menjadi solusi untuk masalah utama.

</details>
<details><summary><h3>10. Shell and Quick Sort</h3></summary>

Shell sort adalah algoritma pengurutan yang menggunakan jarak interval untuk membandingkan dan mengurutkan elemen-elemen dalam sebuah array. Prinsip kerjanya mirip dengan insertion sort, namun dengan interval yang dapat diatur. Interval ini semakin kecil setiap kali iterasi pengurutan dilakukan.

Beberapa macam formula urutan yang digunakan dalam Shell sort antara lain:

- Urutan asli Shell: N/2, N/4, ..., 1
- Urutan Knuth: 1, 4, 13, ..., (3k-1)/2
- Urutan Sedgewick: 1, 8, 23, 77, 281, 1073, 4293, 16577, ..., 4j+1+3.2j+1

Cara kerja Shell sort meliputi langkah-langkah berikut:

1. Urutkan array yang ada.
2. Gunakan formula interval Shell (seperti N/2, N/4, ... 1) untuk menentukan interval yang akan digunakan dalam algoritma.
3. Pada fase pertama, bandingkan dan tukar elemen dengan jarak interval yang ditentukan.
4. Lakukan pengurutan dengan interval yang semakin kecil setiap pengulangan, hingga mencapai interval 1 di mana elemen-elemen diposisikan dengan urutan yang benar.

Shell sort digunakan saat diperlukan pengurutan dengan jarak pertukaran elemen yang lebih kecil dibandingkan dengan insertion sort, terutama saat elemen-elemen yang berdekatan memiliki jarak yang jauh.

Quick sort, di sisi lain, adalah algoritma pengurutan yang juga menggunakan strategi divide and conquer. Quick sort memilih sebuah elemen sebagai pivot, kemudian memisahkan array berdasarkan pivot tersebut. Terdapat beberapa versi dalam memilih pivot, seperti selalu memilih elemen pertama, terakhir, acak, atau tengah sebagai pivot.

Kunci dari proses quick sort adalah fungsi partisi, di mana array dipartisi berdasarkan pivot sehingga elemen-elemen yang lebih kecil dari pivot ditempatkan sebelum pivot, dan elemen-elemen yang lebih besar ditempatkan setelah pivot.

</details>
<details><summary><h3>11. Linear and Binary Search</h3></summary>

Algoritma penelusuran adalah suatu metode yang menerima suatu nilai kunci dan dengan langkah-langkah tertentu akan mencari rekaman yang memiliki nilai kunci tersebut. Setelah proses penelusuran dilakukan, hasilnya dapat berupa rekaman yang ditemukan atau tidak ditemukan.

Ada dua teknik penelusuran yang umum digunakan, yaitu penelusuran sekuensial (linear search) dan penelusuran biner (binary search). Perbedaan utama antara kedua teknik ini terletak pada keadaan data yang digunakan. Penelusuran biner digunakan ketika data sudah dalam keadaan terurut, sedangkan penelusuran sekuensial digunakan untuk data dalam keadaan acak atau tidak terurut.

Penelusuran sekuensial:

- Penelusuran dimulai dari elemen pertama data, kemudian berlanjut dengan menaikkan indeks data.
- Jika ditemukan data yang sama dengan kunci pencarian, proses penelusuran dihentikan dan nilai pengembalian diberikan berupa "true".
- Jika sampai indeks terakhir data tidak menemukan data yang sesuai, nilai pengembalian diberikan berupa "false".

Algoritma penelusuran sekuensial dapat dituliskan sebagai berikut:

```
i <- 0
ketemu <- false
Selama (tidak ketemu) dan (i <= N)
    Jika(data[i] = x) maka ketemu <- true, jika tidak i <- i + 1
Jika(ketemu) maka i adalah indeks dari data yang dicari, jika tidak data tidak ditemukan.
```

Penelusuran biner:

- Data diambil dari posisi 1 hingga posisi akhir.
- Posisi data tengah dicari dengan rumus (posisi awal + posisi akhir) / 2.
- Data yang dicari dibandingkan dengan data yang berada di posisi tengah untuk menentukan arah pencarian selanjutnya.
- Jika data lebih besar, proses penelusuran dilanjutkan dengan mencari di sebelah kanan data tengah. Jika lebih kecil, dilanjutkan dengan mencari di sebelah kiri data tengah.
- Jika data yang dicari sama dengan data tengah, pencarian dihentikan karena data ditemukan.

Syarat utama untuk menggunakan penelusuran biner adalah data harus sudah dalam keadaan terurut. Algoritma penelusuran biner membantu mengurangi jumlah langkah penelusuran yang dibutuhkan untuk menemukan data.

</details>
<details><summary><h3>12. Tree</h3></summary>

Traversal atau melintasi sebuah pohon data/tree berarti mengunjungi semua simpul yang ada pada pohon tersebut. Ini bisa dilakukan untuk berbagai tujuan, seperti menambah nilai semua data pada pohon atau mencari nilai tertinggi di dalamnya. Untuk melakukan operasi-operasi semacam itu, perlu mengunjungi setiap simpul dari pohon data.

Struktur data linear seperti array, stack/tumpukan, queues/antrian, dan LinkedList hanya memiliki satu cara untuk membaca data. Tapi struktur data yang bentuknya hirarkis seperti tree/pohon dapat dilintasi dengan berbagai cara.

Tujuan dari melintasi dan mendata setiap simpul/node adalah:

1. Mengunjungi semua node/simpul di dalam subtree.
2. Mengunjungi root node atau node paling atas.
3. Mengunjungi node yang ada di subtree kanan.

Berdasarkan urutan tersebut, terdapat tiga cara melintasi tree:

1. Inorder Traversal: Langkah-langkahnya adalah mengunjungi semua nodes/simpul di sebelah kiri subtree, kemudian mengunjungi root node, dan terakhir mengunjungi semua simpul di subtree kanan.
2. Preorder Traversal: Langkah-langkahnya adalah mengunjungi root node terlebih dahulu, kemudian mengunjungi semua node di subtree kiri, dan terakhir mengunjungi semua node di subtree kanan.
3. Postorder Traversal: Langkah-langkahnya adalah mengunjungi semua node di subtree kiri, kemudian mengunjungi semua node di subtree kanan, dan terakhir mengunjungi root node.

Dengan menggunakan salah satu dari tiga cara ini, kita dapat melintasi dan melakukan operasi-operasi yang diperlukan pada tree/pohon data.

</details>
<details><summary><h3>13. Graphs</h3></summary>

Depth First Search atau Depth First Traversal adalah algoritma pencarian rekursif yang digunakan untuk mengunjungi semua titik/simpul pada sebuah graf atau pohon simpul.

Algoritma DFS mengoperasikan dua kategori untuk setiap titik pada graf:

1. Sudah Dikunjungi (Visited)
2. Belum Dikunjungi (Not Visited)

Tujuan dari algoritma ini adalah untuk menandai setiap titik/vertex yang telah dikunjungi sambil menghindari titik yang telah dikunjungi.

Cara kerja algoritma DFS dapat dijelaskan sebagai berikut:

1. Dimulai dengan meletakkan salah satu titik graf di atas sebuah tumpukan.
2. Ambil titik paling atas dari tumpukan dan tambahkan ke daftar titik yang telah dikunjungi.
3. Buat daftar titik yang bertetangga dengan titik tersebut. Tambahkan yang belum dikunjungi ke tumpukan.
4. Ulangi langkah 2 dan 3 sampai tumpukan menjadi kosong.

Dengan demikian, algoritma DFS memastikan semua titik dalam graf terhubung telah dikunjungi secara rekursif.
