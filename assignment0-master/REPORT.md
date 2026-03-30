# Buat Laporan di Sini
cin digunakan untuk input sederhana dari keyboard user
cout digunakan untuk output
getline digunakan untuk input user dari keyboard user, lebih kompleks dari cin
#include <iostream> digunakan untuk input dan output
#include <string> digunakan untuk tipe data string
string nama; variabel untuk menyimpan nama pengguna
cout menampilkan pesan ke layar
getline(cin, nama); membaca input nama (termasuk spasi)
cout << "Hello " << nama; menampilkan sapaan kepada pengguna
Untuk mengubah nama dari myapp menjadi MyApp saat compile kita menentukan nama output g++ main.cpp -o MyApp