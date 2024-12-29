![Banner](31815b2f755e58836c603c02b3c7baad.gif)

> ```py
> Nama : Fachry Yura Pratama
> NIM  : 24343006
> Prodi: Informatika
> ```

---
  <div align="center">
    <img src="https://media.giphy.com/media/dWesBcTLavkZuG35MI/giphy.gif" width="600" height="300"/>
  </div>

# <picture><img src = "https://github.com/7oSkaaa/7oSkaaa/blob/main/Images/about_me.gif?raw=true" width = 50px></picture>    Algoritma_Modul

# <picture><img src = "https://github.com/7oSkaaa/7oSkaaa/blob/main/Images/about_me.gif?raw=true" width = 50px></picture>  Modul 1
#Apa itu Algoritma?
Algoritma adalah serangkaian langkah atau instruksi yang sistematis dan terstruktur untuk menyelesaikan suatu masalah atau mencapai tujuan tertentu. Secara sederhana, algoritma dapat diartikan sebagai prosedur yang jelas dan terarah, yang bisa dijalankan untuk menghasilkan solusi dari suatu masalah.

## Karakteristik Algoritma:
Langkah yang Jelas: Setiap langkah dalam algoritma harus terdefinisi dengan jelas. Instruksi yang diberikan harus mudah dipahami dan dapat diimplementasikan dalam bentuk kode oleh komputer.
Terstruktur: Algoritma harus mengikuti urutan yang logis. Tidak boleh ada langkah yang tumpang tindih atau terlewat dalam proses penyelesaian masalah.
Input dan Output: Algoritma membutuhkan input, yakni data yang akan diproses, dan menghasilkan output, yang merupakan hasil pemrosesan data tersebut.
Titik Akhir yang Jelas: Algoritma harus memiliki akhir yang jelas, artinya proses akan berhenti setelah semua langkah dijalankan.
Efisien: Algoritma yang baik harus mampu menyelesaikan masalah dengan cepat dan menggunakan sumber daya yang minimal.
Contoh Algoritma:
Misalnya, kita ingin mencari nilai maksimum dalam sebuah array (deretan angka):

Input: Sebuah array dengan beberapa angka.
Langkah 1: Tentukan nilai maksimum sementara, misalnya ambil angka pertama dari array.
Langkah 2: Bandingkan nilai maksimum sementara dengan setiap angka dalam array.
Langkah 3: Jika ditemukan angka yang lebih besar, perbarui nilai maksimum sementara.
Langkah 4: Lanjutkan proses ini sampai seluruh angka dalam array diperiksa.
Output: Nilai maksimum dari array.
Dengan mengikuti langkah-langkah ini, algoritma akan menyelesaikan masalah pencarian nilai maksimum dalam array tersebut.
### Modul 1_2
Pada modul ini diminta untuk membuat sebuah program yaitu membuat sebuah printf untuk menampilkan kata "Hello Wolrd!"

# <picture><img src = "https://github.com/7oSkaaa/7oSkaaa/blob/main/Images/about_me.gif?raw=true" width = 50px></picture> Modul 2 Pemograman Dasar C 
Dalam setiap bahasa pemrograman, terdapat aturan penulisan kode yang disebut sintaks. Sintaks ini sangat penting untuk dipahami karena menentukan bagaimana kode ditulis dan diinterpretasikan oleh compiler atau interpreter. Dalam konteks bahasa pemrograman C, struktur dasar program dibagi menjadi dua bagian utama: bagian Include dan blok fungsi Main.

Bagian Include: Di bagian paling awal dari program C, kita menemukan perintah #include. Perintah ini digunakan untuk memasukkan file header yang berisi deklarasi fungsi-fungsi yang sudah didefinisikan sebelumnya. Header file memungkinkan programmer untuk mengakses berbagai fitur tambahan yang tidak secara langsung tersedia dalam program. Misalnya, file header yang umum digunakan adalah stdio.h, yang berisi deklarasi fungsi dasar seperti printf() dan scanf(). Dengan mengimpor file ini, programmer dapat menggunakan fungsi-fungsi tersebut dalam program mereka tanpa perlu mendefinisikan ulang fungsi-fungsi tersebut.

Blok Fungsi Main: Setelah bagian Include, program C biasanya memiliki blok fungsi Main, yang merupakan titik awal eksekusi program. Fungsi Main adalah fungsi yang wajib ada dalam setiap program C, dan di sinilah logika utama dari program ditempatkan. Semua perintah yang ingin dijalankan saat program dieksekusi harus dituliskan di dalam blok fungsi Main.

Secara keseluruhan, pemahaman tentang struktur dasar program C, termasuk bagian Include dan fungsi Main, sangat penting bagi programmer. Dengan memahami cara menggunakan header file dan fungsi-fungsi yang ada di dalamnya, programmer dapat membuat program yang lebih kompleks dan efisien dengan memanfaatkan fungsi-fungsi yang telah tersedia. Hal ini juga membantu dalam menjaga kerapihan dan keterbacaan kode, serta mengurangi kemungkinan kesalahan dalam penulisan kode.

### Modul 2_1
Mengajarakan tentang Program dasar yang mana berisi tentang Program halo siapa nama mu penjelasan sedikit tentang program 

#### Deklarasi variable
char nama[100]; digunakan untuk menyimpan nama lengkap yang dimasukkan oleh pengguna. Ukuran array 100 dipilih untuk memastikan cukup besar untuk menampung nama yang panjang.

#### Input Nama:
Program meminta pengguna untuk menginputkan nama dengan printf("Hello, siapa nama lengkapmu? ");.
Input nama dilakukan dengan fgets(nama, sizeof(nama), stdin);, yang memungkinkan pengguna memasukkan nama lengkap (termasuk spasi).

#### Output:
Setelah mendapatkan input dari pengguna, program akan menampilkan pesan selamat datang dengan printf("Selamat Datang, %s dalam Pemrograman C!\n", nama);.
%s digunakan dalam format string untuk menampilkan nilai yang tersimpan dalam variabel nama.

### Modul_2_2
pada modul ini kita di berikan untuk membuat data secara dinamus dan menghitug nilai akhir sesuai dengan rumus yang telah di berikan 

#### Deklarasi Variabel:

char nama[100], prodi[100], fakultas[100]; untuk menyimpan nama, program studi, dan fakultas dalam bentuk string.
int nim; untuk menyimpan NIM mahasiswa.
float nilaiPraktikum, nilaiUTS, nilaiUAS, nilaiAkhir; untuk menyimpan nilai praktikum, UTS, UAS, dan menghitung nilai akhir.

#### Input Data:

Program meminta input untuk nama, NIM, program studi, fakultas, nilai praktikum, nilai UTS, dan nilai UAS.
Fungsi fgets() digunakan untuk memasukkan string yang mengandung spasi seperti nama, program studi, dan fakultas.
Fungsi scanf() digunakan untuk memasukkan nilai numerik (NIM, nilai praktikum, UTS, dan UAS).

#### Menghitung Nilai Akhir:

Nilai akhir dihitung menggunakan rumus yang diberikan:

Nilai Akhir = (30% * Nilai Praktikum) + (30% * Nilai UTS) + (40% * Nilai UAS)
Perhitungan ini dilakukan dengan mengalikan setiap nilai dengan bobot yang sesuai, yaitu 30% untuk nilai praktikum dan UTS, serta 40% untuk nilai UAS.

#### Menampilkan Hasil: 
Setelah perhitungan selesai, program menampilkan hasil input dan nilai akhir yang dihitung.

### Modul_2_3
Pada modul 2_3 ini memberikan cara yang sederhana dan langsung untuk menghitung luas segitiga dengan memasukan nilai alas dan tinggi 

#### Deklarasi Variabel:

float alas = 8.0; untuk panjang alas segitiga (dalam cm).
float tinggi = 5.0; untuk tinggi segitiga (dalam cm).
float luas; untuk menyimpan hasil perhitungan luas.

#### Perhitungan Luas:
Program menggunakan rumus untuk menghitung luas segitiga:
Luas
```c
= 1  × Alas x Tinggi Luas=  2
​  2                         1 
```
Di dalam program ini, rumus ditulis sebagai luas = 0.5 * alas * tinggi;.

#### Menampilkan Hasil:

Program menampilkan panjang alas, tinggi, dan luas segitiga dalam satuan cm dan cm².

### Modul 2_4
Disini di jelaskan tentang cara sedehana dan langsung untuk menghitung luas persegi panjang dengan memasukan nilai dari panjang dan lebar

#### Deklarasi Variabel:

float panjang = 10.0; untuk panjang persegi panjang (dalam cm).
float lebar = 5.0; untuk lebar persegi panjang (dalam cm).
float luas; untuk menyimpan hasil perhitungan luas.

#### Perhitungan Luas:

Program menggunakan rumus untuk menghitung luas persegi panjang:
Luas = Panjang × Lebar
Luas=Panjang×Lebar
Di dalam program ini, rumus ditulis sebagai luas = panjang * lebar;.

#### Menampilkan Hasil:
Program menampilkan panjang, lebar, dan luas persegi panjang dalam satuan cm dan cm².

## <picture><img src = "https://github.com/7oSkaaa/7oSkaaa/blob/main/Images/about_me.gif?raw=true" width = 50px></picture> Modul 3
Pada modul ini Belajar tentag Variable, Konstata dan Tipe Data
Inti dari sebuah program komputer adalah menerima input, melakukan
pemrosesan, dan menghasilkan output. Nilai input bisa kita dapatkan dari
keyboard, file, kamera, mikrofon, dan sebagainya. Sementara output dapat kita
tampilkan ke monitor, cetak ke dokumen, atau ke dalam sebuah file. Pada tahap pemrosesan, program membutuhkan bantuan variabel untuk menyimpan nilai
sementara. 

### Modul 3_1
Program ini Memungkinkan untuk dapat mengkonversilan nilai rupiah yang berbeda-beda, cukup dengan memasukan jumlah rupiah yang di inginkan

#### Deklarasi Variabel:

float rupiah; untuk menyimpan jumlah uang dalam Rupiah yang ingin dikonversi.
float dollar; untuk menyimpan hasil konversi ke Dollar.
float kurs = 14250.0; adalah nilai tukar (kurs) dari Rupiah ke Dollar (1$ = Rp 14.250).

#### Input Uang dalam Rupiah:

Program meminta pengguna untuk memasukkan jumlah uang dalam Rupiah dengan `scanf("%f", &rupiah);`.

#### Konversi Rupiah ke Dollar:

Uang dalam Rupiah dibagi dengan kurs untuk mendapatkan nilai dalam Dollar: dollar = rupiah / kurs;.

#### Output:

Program menampilkan hasil konversi dalam format Rupiah dan Dollar dengan dua angka di belakang koma menggunakan printf.

### Modul 3_2
Pada Modul ini di sama saja dengan modul 3_1 hanya saja disini mengkonversikan suhu yakni memungkin kan mengkonveresikan suhu ke nilai celcius, nilai suhu bebas di masukan berapa saja yang ingin di masukan oleh pengguna 

#### Deklarasi Variabel:

float celsius; untuk menyimpan suhu yang dimasukkan oleh pengguna dalam Celcius.
float kelvin, fahrenheit, reamur; untuk menyimpan hasil konversi suhu ke Kelvin, Fahrenheit, dan Reamur.

#### Input Suhu dalam Celcius:
Program meminta pengguna untuk memasukkan suhu dalam Celcius menggunakan `scanf("%f", &celsius);`.
Perhitungan Konversi:

#### Konversi ke Kelvin: 
```c
𝐾 = 𝐶 + 273.15
```
#### Konversi ke Fahrenheit: 
```c
𝐹 = ( 𝐶 × 1.8 ) + 32
```
#### Konversi ke Reamur: 
```c
𝑅 = 𝐶 × 0.8
```
#### Menampilkan Hasil:
Program menampilkan hasil konversi suhu ke Kelvin, Fahrenheit, dan Reamur dengan dua angka di belakang koma menggunakan printf.

### Modul 3_3
Pada modul 3_3 ini memberikan cara yang sederhana untuk menghitung Volume dal Luas permukaan bola menggunakan rumus yang telah di tentukan 

#### Konstanta PI:

#define PI 3.14159 mendefinisikan konstanta 
𝜋 π dengan nilai 3.14159, yang digunakan dalam perhitungan.

#### Deklarasi Variabel:

float diameter = 12.0; untuk panjang diameter bola (dalam cm).
float radius = diameter / 2; untuk menghitung jari-jari bola.
float volume, surface_area; untuk menyimpan hasil perhitungan volume dan luas permukaan.

#### Perhitungan Volume:
Rumus volume bola:
```c
Volume = 4  × 𝜋 × 𝑟 3 ​                         
         3
```
Volume dihitung dengan rumus tersebut, menggunakan jari-jari bola.

#### Perhitungan Luas Permukaan:

Rumus luas permukaan bola:
```c
Luas Permukaan = 4 × 𝜋 × 𝑟 2
```
 
Luas permukaan dihitung dengan rumus tersebut, menggunakan jari-jari bola.

#### Menampilkan Hasil:
Program menampilkan hasil diameter, jari-jari, volume, dan luas permukaan bola dengan dua angka di belakang koma.

# <picture><img src = "https://github.com/7oSkaaa/7oSkaaa/blob/main/Images/about_me.gif?raw=true" width = 50px></picture>  Modul 4 Operator 
Modul 4 ini berisi tentang Operator yaitu Operator adalah sebuah simbol. Simbol yang digunakan untuk melakukan
operasi tertentu. Misalnya: Kita ingin menjumlahkan nilai dari variabel x dan y, maka kita bisa menggunakan operator penjumlahan (+).
```c
x + y
```
### Modul 4_1
pada modul ini kita belajar tentang konversi waktu yang di mana di gunakan konversi waktu (Jam) 1 Jam, 1menit, 40Detik, maka rumus yang di gunakan sudah sesuai dengan rumus konversi yang di cantumkan ke dalam program 

#### Deklarasi Variabel:
totalDetik: untuk menyimpan jumlah detik yang dimasukkan pengguna.
jam, menit, dan detik: untuk menyimpan hasil konversi dari detik ke jam, menit, dan detik.

#### Input Jumlah Detik:
Program meminta pengguna untuk memasukkan jumlah detik menggunakan 
```
scanf("%d", &totalDetik);.
```
#### Perhitungan Jam, Menit, dan Detik:

Jam dihitung dengan cara jam = totalDetik / 3600;.
Menit dihitung dengan cara menit = (totalDetik % 3600) / 60;, dimana kita menggunakan sisa detik setelah dihitung jam.
Detik dihitung dengan cara detik = totalDetik % 60; setelah mengurangi jam dan menit.
#### Output:

Program menampilkan hasil konversi dalam format "X Jam, Y Menit, Z Detik".

### Modul 4_2
pada program ini di berikan simulasi mengimplementasi dari sebuah transaksi dengan kasir dengan inputan yang dapat disesuaikan dan output yang mudah di pahami 

#### Deklarasi Variabel:

namaPembeli[100] dan namaBarang[100] adalah array karakter untuk menyimpan nama pembeli dan nama barang.
hargaSatuan adalah variabel bertipe float untuk menyimpan harga per unit barang.
jumlahBarang adalah variabel bertipe int untuk menyimpan jumlah barang yang dibeli.
hargaTotal adalah variabel bertipe float untuk menyimpan total harga yang dihitung.

#### Input Data:

fgets digunakan untuk menerima input yang bisa mengandung spasi (seperti nama pembeli dan nama barang).
scanf digunakan untuk menerima input harga satuan dan jumlah barang.

#### Perhitungan Harga Total:

hargaTotal dihitung dengan cara mengalikan harga satuan dengan jumlah barang: hargaTotal = hargaSatuan * jumlahBarang;.

#### Menampilkan Hasil:

Program mencetak hasil input dan perhitungan total harga dalam format struk pembelian yang sederhana.

### Modul 4_3
Di program ini diajarkan tenatang cara menghitung nilai akhirmahasiswa berdasarkan jumlah nilai yang di berikan secara individu opleh pengguna 

#### Deklarasi Variabel:

Variabel nilaiPresensi, nilaiPraktek, nilaiUTS, dan nilaiUAS masing-masing diisi dengan nilai 85, 65, 80, dan 75.
Variabel nilaiAkhir digunakan untuk menyimpan hasil perhitungan nilai akhir.

#### Perhitungan Nilai Akhir:

Nilai akhir dihitung dengan mengalikan setiap nilai dengan bobotnya:
Nilai Presensi (85) * 10% = 8.5
Nilai Praktek (65) * 20% = 13
Nilai UTS (80) * 30% = 24
Nilai UAS (75) * 40% = 30
Kemudian, hasilnya dijumlahkan untuk mendapatkan nilai akhir: 8.5 + 13 + 24 + 30 = 75.5.

#### Menampilkan Hasil:

Program mencetak hasil nilai akhir yang dihitung dengan format dua angka di belakang koma menggunakan %.2f.

Modul 4_5
Pada modul ini program ini memberikan sebuah solusi yang tepat untuk menghitung total biaya berdasarkan durasi menonton film dengan memperhitungkan tarif berbeda untuk jam dan berikutnya 

##### Deklarasi Variabel:

durasi adalah variabel yang akan menyimpan jumlah jam yang digunakan untuk menonton film.
tarifJamPertama adalah tarif untuk jam pertama (Rp 15.000).
tarifBerikutnya adalah tarif untuk jam-jam berikutnya (50% dari tarif jam pertama).
totalBiaya adalah variabel untuk menyimpan total biaya yang harus dibayar.

#### Perhitungan Total Biaya:

Jika durasi menonton hanya 1 jam, maka biaya yang dikenakan adalah Rp 15.000.
Jika durasi lebih dari 1 jam, biaya pertama adalah Rp 15.000, dan untuk jam-jam berikutnya, dihitung dengan tarif Rp 7.500 per jam.

#### Input dan Output:

Program meminta input durasi menonton film dalam jam, kemudian menghitung total biaya berdasarkan durasi tersebut.
Program menampilkan total biaya yang harus dibayar.

# <picture><img src = "https://github.com/7oSkaaa/7oSkaaa/blob/main/Images/about_me.gif?raw=true" width = 50px></picture> Modul 5 Flow Control: Decisionn Making 
Pada Modul ini diajarkan tentang Flow Control Decision Makiing dimana pada modul ini di ajrakan cara untuk mengubah jalur eksekusi melalui program yang pasti menggunakan bahasa C dimana bahasa C paling cocok/recomended untuk belajar fllow control di dalam modul ini sudah menggunakan fitur if & else yaitu fitur pencabangan yang memiliki 2 pencabangan Dan fitur Switch Case ini sama saja dengan if & else hanya saja switch case adalah bentuk lain dari if else 

### Modul 5_1
Pada modul ini kita diminta  membuat sebuah kalkulator untuk memudahkan pengguna untuk melakukan berbagai operasi matematika dengan memilih sesuatu atau salah satu opsi dalm menu yang di buat dalm program . program akan mengimplemntasikan logika atau menggunnakan switch dan menangani kesalahan pembagian 0 untuk memastikan program tetap berjalan dengan baik

#### Deklarasi Variabel:

angka1 dan angka2: dua bilangan input yang akan digunakan dalam perhitungan.
hasil: untuk menyimpan hasil dari operasi penjumlahan, pengurangan, atau perkalian.
hasilBagi: untuk menyimpan hasil pembagian (dalam bentuk desimal).
pilihan: untuk memilih operasi yang akan dilakukan.

#### Menu Pilihan:

Program menampilkan menu yang meminta pengguna memilih salah satu operasi:
Penjumlahan (1)
Pengurangan (2)
Perkalian (3)
Pembagian (4)
Hasil Bagi (5)

#### Input Angka:

Program meminta pengguna untuk memasukkan dua bilangan yang akan dihitung.
Switch Statement:

Berdasarkan pilihan pengguna, program akan melakukan operasi yang sesuai:
Penjumlahan: Menggunakan operator +.
Pengurangan: Menggunakan operator -.
Perkalian: Menggunakan operator *.
Pembagian: Menggunakan operator /, dan jika pembagi adalah 0, program akan menampilkan pesan error.
Hasil Bagi: Menggunakan operator modulus (%), yang menghasilkan sisa bagi, dan jika pembagi adalah 0, program akan menampilkan pesan error.

#### Output:

Program menampilkan hasil perhitungan sesuai dengan operasi yang dipilih.

### modul 5_2
dari modul ini kita di minta untuk membuat program yang berisi tentang menghitung luas permukaan empaat bentuk geometri yang berbeda, yaitu bola,kubus, balok, dan,tabung. program ini di rancang menggunakan fitur switch case untuk memilih opsi pilihan yang di inginkan dan sudah di rancang menggunakan rumus masing masing.

#### Penggunaan switch-case:

Program menggunakan struktur switch-case untuk memilih rumus berdasarkan pilihan pengguna (1-4). Struktur ini memungkinkan program untuk mengeksekusi blok kode yang berbeda sesuai dengan input yang diberikan.

#### Perhitungan Luas Permukaan Berdasarkan Rumus:

### Bola: Program menghitung luas permukaan bola dengan rumus 
```c
4 𝜋 𝑟 ^2
```
### Kubus: Program menghitung luas permukaan kubus dengan rumus 
```c
6 𝑠 ^2 
```
### Balok: Program menghitung luas permukaan balok dengan rumus 
```c
2 ( 𝑝 × 𝑙 + 𝑝 × 𝑡 + 𝑙 × 𝑡 )
```
### Tabung: Program menghitung luas permukaan tabung dengan rumus  
```c
2 𝜋 𝑟 ( 𝑟 + 𝑡 )
```
#### Interaksi dengan Pengguna:

Program meminta pengguna untuk memasukkan nilai yang diperlukan (misalnya, radius, sisi, panjang, dll.) dan menghitung luas permukaan sesuai dengan input tersebut.
Program memberikan output berupa hasil perhitungan yang telah diformat dengan dua angka di belakang koma.
#### Validasi Pilihan Pengguna:

Jika pengguna memasukkan pilihan yang tidak valid (selain 1-4), program akan menampilkan pesan bahwa pilihan tersebut tidak valid.

#### Penggunaan Fungsi untuk Setiap Rumus:

Setiap rumus luas permukaan dijalankan dalam fungsi terpisah yang menerima parameter sesuai dengan bentuk yang dihitung. Ini membuat program lebih terstruktur dan mudah dipahami.

### Modul 5_4
Pada modul ini di minta untuk membuat program menhitung nilai akhir mahasiswa dengan mempertimbangkan bobot ilai kehadiran, UTS, dan UAs kemudian di tentukan grade dan memberikan pesan kelulusan sesuai dengan grade masing-masing.

Input Nilai:

Program meminta input nilai kehadiran, tugas, UTS, dan UAS dari pengguna dalam rentang 0 hingga 100.

## Menghitung Nilai Akhir:
```c
Nilai akhir dihitung dengan rumus:
Nilai Akhir = ( 0.2 × Nilai Kehadiran ) + ( 0.2 × Nilai Tugas ) + ( 0.25 ×
Nilai UTS ) + ( 0.35 × Nilai UAS )
```
Rumus ini mempertimbangkan bobot dari setiap komponen nilai yang diberikan (Kehadiran: 20%, Tugas: 20%, UTS: 25%, UAS: 35%).

#### Penentuan Rentang Nilai:

Berdasarkan nilai akhir yang dihitung, program menentukan rentang nilai dan menampilkan grade serta pesan kelulusan sesuai dengan rentang nilai yang 
telah ditentukan:

0-44 (E): Tidak lulus
45-55 (D): Tidak lulus
56-65 (C): Lulus, tingkatkan lagi
66-75 (B): Lulus dengan baik, tingkatkan terus
76-80 (B): Lulus dengan baik, tingkatkan terus
81-85 (B+): Lulus dengan baik, tingkatkan terus
86-90 (A): Lulus dengan nilai sangat memuaskan
91-100 (A): Lulus dengan nilai sangat memuaskan

#### Pesan Kelulusan:

Berdasarkan nilai akhir, program akan menampilkan pesan terkait kelulusan dan rekomendasi untuk meningkatkan kinerja jika diperlukan.

# <picture><img src = "https://github.com/7oSkaaa/7oSkaaa/blob/main/Images/about_me.gif?raw=true" width = 50px></picture>   Modul 6 Flow Control Loop (Perulangan)
Pada modul ini di berikan sedikit pembahsan tentang putaran atau perulangan.  dari pembahasan tentang putaran atau perulangan (loop) dalam pemrograman adalah sebagai berikut:

Loop atau perulangan merupakan konstruksi dalam aliran kontrol yang memungkinkan sebuah bagian dari kode untuk dieksekusi berulang kali berdasarkan kondisi tertentu. Penggunaan loop memberikan kemudahan dalam pemrograman, karena memungkinkan kita untuk menghindari penulisan kode yang berulang dan membuat program menjadi lebih ringkas dan efisien. Dengan loop, berbagai tugas yang membutuhkan pengulangan dapat dilakukan dengan lebih cepat dan sederhana, seperti mengolah data dalam array atau melakukan pengecekan yang berulang. Tipe-tipe loop yang umum digunakan dalam pemrograman termasuk for loop, while loop, dan do-while loop, yang masing-masing memiliki karakteristik dan kegunaan yang berbeda.

### Modul 6_1
Pada Modul ini di minta untuk membuat program yang cukup sederhana dan efektif untuk menghasilkan kedua deret bilangan tersebut.

#### Deret Bilangan Genap:

Untuk menghasilkan bilangan genap dari 0 hingga 50, kita mulai dari i = 0 dan menambahkannya dengan 2 pada setiap iterasi (menggunakan i += 2).

#### Deret Bilangan Ganjil:

Untuk menghasilkan bilangan ganjil, kita mulai dari i = 1 dan menambahkannya dengan 2 pada setiap iterasi (menggunakan i += 2).

#### Cara kerja Program 
Program dimulai dengan menampilkan deret bilangan genap dari 0 hingga 50 dengan menggunakan loop for yang memulai dari 0 dan menambah nilai i sebanyak 2 pada setiap iterasi.

Program kemudian melanjutkan untuk menampilkan deret bilangan ganjil dengan cara yang sama, tetapi memulai dari 1 dan juga menambah nilai i sebanyak 2 pada setiap iterasi.

### Modul 6_2
Pada modul ini di minta juga membuat sebuah pola yang di buat melalui program pola tersebut menggunakan bintang lalu bintang tersebut di susun menggunakan program untuk membuat/membentuk segitiga siku siku dengan  jumlah bintang yang bertambah satu pada setiap barisnya 

#### Program ini menggunakan dua loop:
Loop pertama (outer loop): Mengontrol jumlah baris, dimulai dari i = 1 hingga i = 5.
Loop kedua (inner loop): Mengontrol jumlah bintang yang dicetak pada setiap baris. Jumlah bintang yang dicetak di baris ke-i adalah sebanyak i.

Setiap kali loop pertama selesai, program mencetak karakter newline (\n) untuk pindah ke baris baru.

### Modul 6_3
Pada modul 6_3 ini di minta kembali membuat program yang sama dengan modul 6-3 sebelumnya bedanya seblumnya menggunakan bintang sekarang menggunakan angka, angka angka akan muncul dan bertambah 1 pada setiap barisnya sama seperti sebelumnya 

Loop pertama (outer loop): Mengontrol jumlah baris, dimulai dari i = 1 hingga i = 5.

Loop kedua (inner loop): Mengontrol jumlah angka yang dicetak pada setiap baris. Pada baris ke-i, program mencetak angka yang merupakan hasil perkalian i dengan j (dari 1 hingga i).

Pada setiap iterasi loop pertama, program mencetak angka yang merupakan hasil perkalian i dengan j, diikuti oleh spasi. Setelah menyelesaikan satu baris, program mencetak karakter newline (\n) untuk pindah ke baris berikutnya.

### Modul 6_4 
Pada modul ini di minta untuk membuatkan program tentang Program bagaimana ATM berjalan yang mana pengguna dinamakan Hattori, disini hattori memungkinkan untuk melakukan pengecekan saldo,  setoran, dan penarikan dengan aturan saldo minimal 50k 

Cek Saldo: Menampilkan saldo terkini dari akun Hattori.

Setoran: Menambahkan jumlah yang disetor ke saldo.

Penarikan Tunai: Memeriksa apakah saldo yang tersisa setelah penarikan masih lebih dari Rp. 50.000. Jika ya, saldo akan dikurangi dengan jumlah penarikan. Jika tidak, penarikan akan gagal dan menampilkan pesan kesalahan.

Menu ATM: Menyediakan pilihan untuk cek saldo, setoran, penarikan, dan keluar dari program.

# <picture><img src = "https://github.com/7oSkaaa/7oSkaaa/blob/main/Images/about_me.gif?raw=true" width = 50px></picture> Modul 7 Struktur Data: Array
Array adalah sebuah struktur data yang digunakan untuk menyimpan sekumpulan data dengan tipe yang sama dalam satu tempat atau variabel. Di dalam array, setiap elemen atau data yang disimpan memiliki indeks atau posisi tertentu yang dimulai dari angka 0. Dengan adanya indeks ini, kita dapat mengakses atau memanipulasi data dengan mudah.

### Modul 7_1
Pada modul ini di minta untuk membuat program mencari rata rata nilai dari 20 mahasiswa menggunakan array. Program ini meminta kepada pengguna untuk memasaukan nilai mahasiswa satu persatu kemudian program akan menghitung rata rata nilai untuk ke 20 mahasiswa tersebut.

Array nilai_mahasiswa[20]: Array ini digunakan untuk menyimpan nilai-nilai dari 20 mahasiswa.
Loop for: Digunakan untuk meminta input nilai dari setiap mahasiswa. Setiap nilai yang dimasukkan disimpan di dalam array `nilai_mahasiswa` dan ditambahkan ke variabel `total_nilai`.

Menghitung rata-rata: Setelah nilai seluruh mahasiswa dimasukkan, rata-rata dihitung dengan cara membagi `total_nilai` dengan jumlah mahasiswa (20).

Menampilkan hasil: Rata-rata nilai ditampilkan dengan dua angka di belakang koma menggunakan format `%.2f`.

### Modul 7_2 
Pada modul ini di minta  untuk membuat program ini untuk menampung berapa banyak jumlah mahasiswa lalu di minta untuk memasuikan nama mahasiswa sebanyak jumlah ang di berikan pengguna ke program sebelumnya, lalu program akan menampilkan nama anam yang telah di inputkan sesuai urutan yang di masukan di awal.

Input Jumlah Mahasiswa: Program meminta pengguna untuk memasukkan jumlah mahasiswa yang akan diinputkan.

Array nama_mahasiswa: Digunakan untuk menyimpan nama mahasiswa. Array ini memiliki ukuran yang ditentukan oleh jumlah mahasiswa yang dimasukkan. Setiap elemen array adalah string dengan 
panjang maksimum 100 karakter.

Perulangan untuk Input Nama: Menggunakan loop for untuk meminta nama mahasiswa satu per satu. Fungsi `scanf(" %[^\n]", nama_mahasiswa[i])` digunakan untuk membaca nama yang mengandung spasi.
Menampilkan Nama Mahasiswa: Setelah semua nama diinputkan, program akan menampilkan nama mahasiswa dengan menggunakan perulangan `for`.

### Modul 7_3 
Pada modul ini di minta membuat sebuah program yang berisikan halaman login ke sebuah web/aplikasi dimana pengguna menginput username dan password, dan memberikan nontifikasi berhasil login jika username dan password nya benar da password salah untuk username/password salah

#### Deklarasi username dan password yang benar:

Program menetapkan correctUsername dan correctPassword sebagai nilai yang benar.

#### Menerima input dari pengguna:

Program meminta pengguna untuk memasukkan username dan password menggunakan scanf.

#### Memeriksa kecocokan:

Program menggunakan strcmp untuk membandingkan input yang diberikan oleh pengguna dengan nilai yang benar. Fungsi strcmp akan mengembalikan nilai 0 jika kedua string tersebut sama.

#### Notifikasi:

Jika username dan password yang dimasukkan sesuai dengan yang benar, maka program menampilkan "Berhasil login!".
Jika salah, maka program menampilkan "Password salah.".

# <picture><img src = "https://github.com/7oSkaaa/7oSkaaa/blob/main/Images/about_me.gif?raw=true" width = 50px></picture> Modul 8 Fungsi & Prosedur 
Dalam modul ini di berikan materi tentang fungsi dan prosedur 2 hal ini dapat membantu memecahkan program menjadi bagian bagian yang lebih kecil dan terorganisir, funngsi juga dapat mengembalikan nilai setelah proses tertentu sedangkan prosedur sendiri melakukan tugas atau aksi tanpa mengembalikan nilai 

### Modul 8_1
Pada modul ini di mnts untuk membuat program perkalian dua bilangan bulat positif menggunnakann metide penjumlahan bilangan yang dapat mendifinisaikan sebuah fungsi yang akan menjunmlahkan bilangan 

#### Fungsi perkalian (int a, int b):

Fungsi ini menggunakan rekursi untuk menghitung perkalian.
Kondisi dasar: Jika b == 0, maka hasil perkalian adalah 0. Ini adalah kondisi penghentian rekursi.
Rekursi: Jika b != 0, fungsi akan mengembalikan nilai a + perkalian(a, b-1), yang artinya akan menambahkan a sebanyak b kali.

#### Fungsi main():

Program meminta input dari pengguna untuk dua bilangan bulat (angka1 dan angka2).
Fungsi perkalian() dipanggil dengan dua argumen tersebut, dan hasilnya dicetak ke layar.

### Modul 8_2
Pada modull ini si minta membuat program perhitungan aritmatik seperti penjumlahan, penguranngan, perkalian, dan pembagian. Nantinya program akan meminta untuk di inputkan 2 bilangan dan jenis operasi yang dilakukan, lalu memanggil fungsi sesuai untu menghitung hasilnya.

#### Fungsi Aritmetik:

`penjumlahan(float a, float b)`: Mengembalikan hasil penjumlahan `a + b`.
`pengurangan(float a, float b)`: Mengembalikan hasil pengurangan `a - b`.
`perkalian(float a, float b)`: Mengembalikan hasil perkalian `a * b`.
`pembagian(float a, float b)`: Mengembalikan hasil pembagian `a / b`, tetapi terlebih dahulu memeriksa apakah `b` tidak sama dengan 0 untuk menghindari pembagian dengan nol. 

#### Fungsi main():

Program meminta input dua bilangan (`num1` dan `num2`).
Program kemudian meminta input dari pengguna untuk memilih operasi aritmetik (penjumlahan, pengurangan, perkalian, atau pembagian).
Berdasarkan pilihan operasi, program memanggil fungsi yang sesuai dan menampilkan hasilnya.

#### Validasi Pembagian dengan Nol:

Untuk operasi pembagian, ada pengecekan apakah `b` adalah nol. Jika iya, program akan menampilkan pesan error dan tidak melakukan pembagian.

#### Switch-case:

Digunakan untuk memilih operasi yang diinginkan berdasarkan input pengguna. Program akan memanggil fungsi yang sesuai untuk operasi yang dipilih.

## Modul 8_3
Pada modul ini kita diminta untui membuat program menghitung luas dan keliling lingkaran menggunakan fungsi `luas()` dan `keliling ()`.

#### Konstanta PHI :
Program menggunakan konstanta `PHI = 3.14` sebagai nilai perkiraan dari π 
(pi) untuk menghitung luas dan keliling lingkaran.

#### Fungsi luas(float r) :
Fungsi ini menerima parameter `r` (jari-jari lingkaran) dan mengembalikan nilai luas lingkaran dengan rumus 
```
𝜋 𝑟 2 πr 6 ^2
```
#### Fungsi `keliling(float r)` :
Fungsi ini juga menerima parameter r dan mengembalikan nilai keliling lingkaran dengan rumus 
```
2 𝜋 𝑟
```
#### Main Function :
Fungsi main() digunakan untuk mengambil input jari-jari dari pengguna, kemudian memanggil fungsi `luas()` dan `keliling()` untuk menghitung dan menampilkan hasilnya.

## Modul 8_4
Pada modul ini diminta untuk membuat program menhitung besar potongan diskon berdasarkan jumlah pembelian, dengan menggunakan fungsi `potong()` untuk menghitung besar potongan atau untuk menhitung potongan harga karena di beri diskon 

#### Fungsi potong(float total):
-Fungsi ini menerima parameter `total` yang merupakan jumlah pembelian.
-Fungsi akan memeriksa nilai total pembelian dan memberikan diskon sesuai dengan ketentuan:
-Tidak ada diskon jika total kurang dari 1 juta.
-Diskon 20% jika total antara 1 juta dan 3 juta.
-Diskon 35% jika total lebih dari 3 juta.

#### Main Function:
-Mengambil input jumlah pembelian (totalPembelian) dari pengguna.
-Memanggil fungsi potong() untuk menghitung besar potongan diskon.
-Menghitung jumlah yang harus dibayarkan setelah potongan (totalPembelian - diskon).
-Menampilkan besar diskon dan total yang harus dibayarkan.

Jika pengguna memasukan jumlah pembelian 2.5 Juta, maka diskon yang di berikan adalah 20% (500,000). dan total yang harus di bayar adalah 2 juta.

# <picture><img src = "https://github.com/7oSkaaa/7oSkaaa/blob/main/Images/about_me.gif?raw=true" width = 50px></picture>  Modul 9 Pointer 
Pada program komputer, setiap variabel yang dideklarasikan akan disimpan di memori (biasanya RAM) dengan alamat memori tertentu. Alamat memori ini adalah lokasi tempat data variabel disimpan dan bisa dianggap sebagai referensi atau identifikasi untuk variabel tersebut.

Sebagai contoh, dalam program, kita mungkin mendeklarasikan dua variabel: `umur` dan `tinggi`. Variabel ini akan memiliki alamat memori masing-masing. Misalnya, variabel `umur` disimpan pada alamat memori `0001`, dan variabel `tinggi` disimpan pada alamat memori `0002`. Alamat memori ini digunakan oleh sistem untuk mengakses dan memanipulasi data dalam variabel tersebut.

### Modul 9_1
di modul ini diminta membuat program pointer, program ini menggunakan potinter untuk menghasilkan keluaran sesaui yang di minta. Dan juga Program ini menggunakan pointer dan pointer arithmetic untuk mengakses dan mencetak karakter-karakter dari string `BORLAND`.

Deklarasi Pointer untuk String:
```c
char *str = "BORLAND";
```
Di sini, kita mendeklarasikan sebuah pointer `str` yang bertipe data `char*`, yang menunjuk ke string `"BORLAND"`. String ini disimpan di memori secara kontigu, dan pointer str menunjuk ke alamat pertama dari string tersebut.
String `"BORLAND"` terdiri dari karakter-karakter sebagai berikut:
```
B  O  R  L  A  N  D
^  ^  ^  ^  ^  ^  ^
0  1  2  3  4  5  6
```
Misalnya, `str[0]` berisi `'B'`, str[1] berisi `'O'`, dan seterusnya.
Looping dengan Pointer: Program ini menggunakan dua loop untuk mencetak bagian dari string "BORLAND" secara bertahap.

#### Loop pertama (i loop):

```c
for (int i = 0; i < 7; i++) {
```
Loop pertama ini mengontrol berapa banyak karakter yang akan dicetak pada setiap baris. Nilai i dimulai dari 0 dan berakhir di 6 (karena panjang string `"BORLAND"` adalah 7).
Dalam setiap iterasi loop ini, kita akan mulai mencetak substring dari posisi `i` hingga akhir string `"BORLAND"`.

#### Loop kedua (j loop):

```c
for (int j = i; j < 7; j++) {
    printf("%c", *(str + j));
}
```
Di dalam loop pertama, kita memiliki loop kedua yang digunakan untuk mencetak karakter-karakter dari string.

j dimulai dari nilai i (yang meningkat pada setiap iterasi loop pertama) hingga 6, dan kita menggunakan pointer untuk mengakses karakter yang sesuai.

Pointer Arithmetic: `*(str + j)` adalah cara untuk mengakses karakter di posisi ke-j dalam string "BORLAND". `str + j` adalah operasi pointer yang menggeser alamat pointer `str` sebanyak `j` posisi. Dengan kata lain, jika `str` menunjuk ke `'B'`, maka `str + j` menunjuk ke karakter di posisi `j`. Setelah itu, kita dereferensikan pointer dengan `*` untuk mendapatkan nilai karakter di alamat tersebut.

Contoh:

Ketika `i = 0` dan `j = 0`, maka `*(str + 0)` mengakses karakter pertama `'B'`.
Ketika `i = 1` dan `j = 1`, maka `*(str + 1)` mengakses karakter kedua `'O'`.

Output: Setelah loop kedua selesai, kita mencetak karakter-karakter sesuai urutan yang diinginkan dan berlanjut ke baris baru dengan `printf("\n");`. Pada setiap iterasi loop pertama, karakter yang dicetak bertambah, menghasilkan output seperti yang diminta:

```
D
ND
AND
LAND
RLAND
ORLAND
BORLAND
```
#### Penjelasan output secara rinci:

Iterasi 1 (i = 0): Mencetak karakter `'D'` (dimulai dari indeks ke-6).

Iterasi 2 (i = 1): Mencetak karakter `'N'` hingga `'D'` (dimulai dari indeks ke-5).

Iterasi 3 (i = 2): Mencetak karakter `'A'` hingga `'D'` (dimulai dari indeks ke-4).

Iterasi 4 (i = 3): Mencetak karakter `'L'` hingga `'D'` (dimulai dari indeks ke-3).

Iterasi 5 (i = 4): Mencetak karakter `'R'` hingga `'D'` (dimulai dari indeks ke-2).

Iterasi 6 (i = 5): Mencetak karakter `'O'` hingga `'D'` (dimulai dari indeks ke-1).

Iterasi 7 (i = 6): Mencetak seluruh string `'BORLAND'` (dimulai dari indeks ke-0).

### Modul 9_2
pada moudl ini diminta untuk membuat program yang menampilkan kalimat terbalik program ini akan membalikan kalimat yang di masukan oleh pengguna.
secara keseluruhan, program ini bisa di biang memberikan contoh penerapan dasar pemograman bahasa c sperti array, loop, dan manipulasi astring untuk tujuan tertentu.

#### Deklarasi dan Inisialisasi Variabel:
`Lesley` diberi nilai 57082.
`Layla` disamakan dengan `Lesley` (nilai 57082).
`Balmond` dihitung dengan menambahkan 1 pada nilai `Layla`, sehingga `Balmond = 57082 + 1 = 57083`.

#### Output:
Program menampilkan nilai `Layla` dan `Balmond` berdasarkan nilai langsung.

#### Pointer dan Referensi:
`Layla` diset sebagai pointer yang menunjuk ke alamat variabel `Lesley` menggunakan `&Lesley`.
`Balmond` dihitung dengan mengakses nilai yang ditunjuk oleh `Layla` (yaitu nilai `Lesley`), dan kemudian ditambahkan 1. `Balmond = *Layla + 1 = 57082 + 1 = 57083`.

#### output:
Program menampilkan alamat yang disimpan di pointer `Layla` dan nilai `Balmond` yang dihitung berdasarkan dereferensi pointer `Layla`.

#### Hasil Output:
```c
#### Bagian A:
a) Nilai Layla: 57082
b) Nilai Balmond: 57083

#### Bagian B:
a) Nilai Layla (pointer): 0x7ffee1b4e32c  // Alamat memori yang menunjuk ke Lesley
b) Nilai Balmond (pointer): 57083
```
### Penjelasan Hasil:
#### Bagian A:
`Layla` memiliki nilai 57082 (karena disalin dari `Lesley`).
`Balmond` adalah 57083 (nilai `Layla` + 1).

#### Bagian B:
`Layla` adalah pointer yang menyimpan alamat memori dari `Lesley`. Hasil `&Lesley` menunjukkan alamat memori di mana `Lesley` disimpan (alamat ini akan berbeda-beda di setiap eksekusi program).
`Balmond` dihitung sebagai nilai dari `Lesley` yang ditunjuk oleh pointer `Layla` (57082), ditambah 1, sehingga hasilnya adalah 57083.

# <picture><img src = "https://github.com/7oSkaaa/7oSkaaa/blob/main/Images/about_me.gif?raw=true" width = 50px></picture> Modul 10 Enumasi & Structure 
Pada moul ini diajarkan tentang `Enum` atau enumeration adalah tipe data yang berisi sekumpulan nilai konstata yang terdefinisi dengan nama tertentu.
```c
#include <stdio.h>

enum Hari {
    SENIN,    // 0
    SELASA,   // 1
    RABU,     // 2
    KAMIS,    // 3
    JUMAT,    // 4
    SABTU,    // 5
    MINGGU    // 6
};

int main() {
    
    enum Hari hariKerja = SENIN;

    printf("Hari pertama dalam minggu adalah: %d\n", hariKerja);  // Output: 0

    if (hariKerja == SENIN) {
        printf("Hari ini adalah Senin.\n");
    }

    return 0;
}
```

### Modul 10_1
Dalam modul ini digunakan `enum` di mana komputer memilih nomor secara acak antara 1 dan 20, dan Anda harus menebak nomor tersebut.Program ini juga memberikan petunjuk dan memungkinkan Anda untuk bermain lagi setelah berhasil menebak nomor yang benar.

#### Inisialisasi Random:

Fungsi srand`(time(NULL))` digunakan untuk menginisialisasi generator angka acak berdasarkan waktu saat program dijalankan. Ini memastikan bahwa setiap kali program dijalankan, angka yang dihasilkan oleh `rand()` akan berbeda.
Fungsi `rand() % 20 + 1` menghasilkan angka acak antara 1 dan 20.

#### Game Loop:

Fungsi game`()` adalah inti dari permainan. Program akan terus meminta tebakan sampai pemain berhasil menebak angka yang benar.
Jika tebakan lebih kecil dari nomor yang dipilih komputer, program memberi petunjuk bahwa "Nomor saya lebih besar!" dan sebaliknya jika tebakan lebih besar.
#### Percobaan dan Feedback:

Program menghitung jumlah percobaan yang dibutuhkan untuk menebak dengan benar dan menampilkannya setelah tebakan benar.

#### Pemain Bisa Bermain Lagi:

Setelah pemain berhasil menebak dengan benar, mereka ditanya apakah ingin bermain lagi dengan memilih 'y' untuk bermain lagi, atau 'n' untuk berhenti.

### Modul 10_2
Pada modul ini kita di minta untuk membuat program menentukan zodiak berdasarkan tanggal lahir menggunakan array dan struktur. Kita perlu mendifinisikan struktur yang berisi tanggal lahir, seta sebuah array untuk menyimpan tanggal batas masing masing zodiak 

#### struktur Tanggal:
Struktur ini digunakan untuk menyimpan informasi tanggal lahir, terdiri dari hari, bulan, dan tahun.

#### Struktur Zodiak:
Struktur ini mendefinisikan nama zodiak dan rentang tanggal untuk setiap zodiak. Setiap zodiak memiliki bulan dan hari mulai serta bulan dan hari akhir.

#### Array Zodiak:
Array zodiaks[] berisi data untuk masing-masing zodiak, termasuk nama dan rentang tanggalnya.

#### Fungsi tentukanZodiak:
Fungsi ini menerima tanggal lahir dan memeriksa tanggal tersebut untuk menentukan zodiak yang sesuai berdasarkan rentang tanggal yang telah didefinisikan di dalam array zodiaks.
Fungsi ini membandingkan bulan dan hari dari tanggal lahir dengan rentang tanggal masing-masing zodiak. Jika tanggal lahir berada dalam rentang tersebut, maka nama zodiak tersebut akan dikembalikan.

#### Input dan Output:

Program meminta input tanggal lahir dalam format tanggal-bulan-tahun, kemudian menentukan zodiak berdasarkan input tersebut dan menampilkannya.
Contoh Keluaran Program:
```c
Tanggal Lahir Anda [tgl-bln-tahun]: 24-12-1970
Zodiak Anda adalah: CAPRICORN
```
#### Penjelasan Proses:
Jika pengguna memasukkan tanggal 24 Desember 1970, maka tanggal tersebut berada dalam rentang zodiak CAPRICORN, yang berlangsung dari 22 Desember hingga 19 Januari. Program akan menampilkan "CAPRICORN" sebagai hasil.

### Modul 10_3
pada modul ini di minta untuk membuat program Untuk menyimpan data mahasiswa mengunakan struktur program bahasa c. Progaram ini akan  meminta oengguana untuk menginputkan data mahasiswa secara berulang dan akana di simpan di dalam array.

#### Struktur Mahasiswa:
Struktur `Mahasiswa` menyimpan data mahasiswa, yaitu: `npm`, `nama`, `tglLahir`, `alamat`, dan `hp`.
Semua data disimpan dalam tipe data `char` agar bisa menangani string.

#### Fungsi masukkanData:
Fungsi ini meminta input dari pengguna untuk setiap atribut mahasiswa (NPM, nama, tanggal lahir, alamat, dan nomor HP) dan menyimpannya dalam variabel yang sesuai.
Fungsi `fgets` digunakan untuk membaca string yang lebih panjang (seperti nama dan alamat), dan kita menggunakan `strcspn` untuk menghapus karakter newline (`\n`) yang ditambahkan oleh `fgets`.

#### Fungsi tampilkanData:
Fungsi ini digunakan untuk menampilkan data mahasiswa yang sudah dimasukkan ke layar.

#### Array mahasiswa[100]:
Program ini menggunakan array untuk menyimpan data mahasiswa. `jumlahMahasiswa` adalah variabel untuk menghitung berapa banyak data mahasiswa yang telah dimasukkan.

#### Input dan Output:
Program meminta input dari pengguna dan menyimpannya ke dalam array `mahasiswa`. Setelah itu, program akan menanyakan apakah pengguna ingin memasukkan data lagi.
Jika pengguna memilih untuk berhenti (jawab 't' atau 'T'), program akan menampilkan daftar semua mahasiswa yang telah dimasukkan.

# <picture><img src = "https://github.com/7oSkaaa/7oSkaaa/blob/main/Images/about_me.gif?raw=true" width = 50px></picture> Modul 11 File Handing in C
Pada modul ini diajarkan tentang handing in c ini mengacu pada operasi untuk mrmbaca, menulis, membuka, dan menutup file. 

#### Operasi Dasar dalam File Handling di C:
Membuka File (Opening a File): Sebelum kita dapat melakukan operasi lain (seperti membaca atau menulis), kita harus membuka file terlebih dahulu menggunakan fungsi `fopen()`.

Membaca dari File (Reading from a File): Setelah file dibuka, kita dapat membaca data dari file menggunakan fungsi `fscanf()`, `fgets()`, atau `fgetc()`.

Menulis ke File (Writing to a File): Kita bisa menulis data ke file menggunakan fungsi `fprintf()`, `fputs()`, atau `fputc()`.

Menutup File (Closing a File): Setelah selesai melakukan operasi pada file, kita harus menutup file menggunakan fungsi `fclose()`.

### Modul 11_1
Pada modul ini ialah membuat program data mahasiswa  yang bisa di simpan kedalam `datamahasiswa.txt` program ini juga menggunakan perulangan untuk memasukan data mahasiswa sebanyak mungkin.

#### Struktur Mahasiswa:
Program menggunakan struktur `Mahasiswa` untuk menyimpan data mahasiswa, yaitu `nama`, `nim`, `jurusan`, dan `programStudi`.

#### Fungsi simpanDataKeFile:
Fungsi ini bertanggung jawab untuk menulis data mahasiswa ke dalam file `datamahasiswa.txt`.
Fungsi `fprintf` digunakan untuk menulis data mahasiswa ke file dengan format yang rapi.

#### Input Data Mahasiswa:
Program meminta input untuk nama, NIM, jurusan, dan program studi setiap mahasiswa. Fungsi `fgets` digunakan untuk membaca string yang dapat mencakup spasi.
Setelah input, program menulis data mahasiswa ke file.

#### Perulangan:
Program meminta jumlah mahasiswa yang akan dimasukkan. Kemudian, menggunakan perulangan `for`, program akan meminta input untuk setiap mahasiswa dan menuliskannya ke file.

#### Penutupan File:
Setelah semua data dimasukkan, program menutup file dengan `fclose(file)`.

### Modul 11_2
Pada modul ini diminta untuk menunjukan hasil dari output dan data yang masuk ke dalam `datamahasiswa.txt` untuk hasilnya bisa di lihat di screnshoot yang sudah tertera di atas.

# Terima Kasih
