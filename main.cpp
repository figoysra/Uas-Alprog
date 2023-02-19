#include <iostream>

int main() {

//    Buatlah program matematika sederhana dengan menggunakan pernyataan SWITCH.
//    Pada program tersebut user diminta untuk memasukan dua buah bilangan, lalu setelah itu program akan memberikan pilihan kepada user untuk memilih angka dari 1 sampai dengan 3 dimana pilihan-pilihannya adalah :
//    •	Angka ’1’ untuk penambahan dari bilangan 1 dan bilangan 2
//    •	Angka ’2’ untuk pengurangan dari bilangan 1 dan bilangan 2
//    •	Angka ’3’ untuk perkalian dari bilangan 1 dan bilangan 2
//    Di akhir program nanti hasil dari proses akan ditampilkan.

    int bil1,bil2,operation, result;
    std::cout << "UAS" << std::endl;
    std::cout << "Bilangan 1 = ";
    std::cin >> bil1;
    std::cout << "Bilangan 2 = ";
    std::cin >> bil2;
    std::cout << "Pilihan 1  = Tambah, Pilihan 2 = Kurang , Pilihan 3 = Kali "<< std::endl;
    std::cout << "Masukan Pilihan" <<std::endl;
    std::cin >> operation;

    switch (operation) {
        // operation = 1
        case 1:
            result = bil1 + bil2;
            break;
        case 2:
            result = bil1 - bil2;
            break;
        case 3:
            result = bil1 * bil2;
            break;
        default:
            result = 0;
            break;
    }

    std::cout << "Hasil   "<<result << std::endl;
}
