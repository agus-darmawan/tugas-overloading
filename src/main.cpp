#include <iostream>
#include <string>
#include "include/rectangular.hpp"

float length, 
    width,
    midpoint_x, 
    midpoint_y;

int main(){
    while(1){
        startProgram();
        std::string option_str;
        int option_int;
        std::cout << "INPUTKAN DATA PERSEGI ATAU PERSEGI PANJANG" << std::endl;
        std::cout << "Persegi panjang 1" << std::endl;
        input();
        persegiPanjang obj1(midpoint_x, midpoint_y, length, width);

        std::cout << "Persegi panjang 2" << std::endl;
        input();
        persegiPanjang obj2(midpoint_x, midpoint_y, length, width);
        persegiPanjang obj3(0,0,0,0);
        clear();

        std::cout << "DATA SEMENTARA ADALAH" << std::endl;
        std::cout << "Persegi panjang 1" << std::endl; 
            obj1.output();
            std::cout << std::endl;
        std::cout << "Persegi panjang 2" << std::endl;
            obj2.output();
            std::cout << std::endl;
        std::cout << "Data yang dimasukan sesuai (y/n) : ";
            std::cin >> option_str;
                if(option_str == "n" || option_str == "N"){
                    main();
                }
        clear();
        
        while(1){
            clear();
            std::cout << std::endl;
            option_int = optionthis();
            std::cout << std::endl;
            switch (option_int){
                case 0:
                    {
                        std::cout << "================= OPERATOR + =====================" << std::endl;
                        obj3 = obj1 + obj2;
                        if (obj1==obj2){
                            obj3.output();
                        }
                    }
                    break;
                case 1:
                    {
                        std::cout << "================ OPERATOR - ======================" << std::endl;
                        obj3 = obj1 - obj2;
                        if (obj1==obj2){
                            obj3.output();
                        }
                    }
                    break;
                case 2:
                    {
                        std::cout << "============ OPERATOR ++ persegi panjang 1 =============" << std::endl;
                        ++obj1;
                        obj1.output();
                        --obj1;
                    }
                    break;
                case 3:
                    {
                        std::cout << "============ OPERATOR -- persegi panjang 1 =============" << std::endl;
                        ++obj2;
                        obj1.output();
                        --obj2;
                    }
                    break;
                case 4:
                    {
                        std::cout << "============ OPERATOR ++ persegi panjang 2 =============" << std::endl;
                        --obj1;
                        obj1.output();
                        ++obj1;
                    }
                    break;
                case 5:
                    {
                        std::cout << "============ OPERATOR -- persegi panjang 2 =============" << std::endl;
                        --obj2;
                        obj1.output();
                        ++obj2;
                    }
                    break;
                case 6:
                    {
                        const char *index[4] = {"xMin", "xMaks", "yMin", "yMaks"};
                        std::cout<<"OPERATOR [] Perbandingan antar objek"<<std::endl;
                        for (int pilihan = 1; pilihan < 5; pilihan++{
                            std::cout << "Nilai " << index[pilihan-1] << " Objek : " << pp1[pilihan] << std::endl;
                            std::cout << "Nilai " << index[pilihan-1] << " Objek : " << pp2[pilihan] << std::endl;
                            if (pp1[pilihan] > pp2[pilihan]){
                                std::std::cout << index[pilihan-1] << " Pp1 lebih besar dari " << index[pilihan-1] << " Pp2" << std::endl;
                            }else if(pp2[pilihan] > pp1[pilihan]){
                                std::std::cout << index[pilihan-1] << " Pp2 lebih besar dari " << index[pilihan-1] << " Pp1" << std::endl;;
                            }else{
                                std::cout << "Kedua " << index[pilihan-1] << " sama" << std::endl;
                            }
                            std::cout<<std::endl;
                        }
                    }
                    break;
                case 7:
                    {
                        std::cout << std::endl << std::endl;
                        std::cout << "==================== OPERATOR == ====================" << std::endl;
                        if (obj1==obj2){
                            std::cout << "Persegi panjang beririsan" << std::endl;
                        }else{
                            std::cout << "Persegi panjang tidak beririsan" << std::endl;
                        }
                    }
                    break;
                }
            std::cout << std::endl<< std::endl;
            std::cout << "Apakah anda ingin mencoba operator lain (y/n) : ";
            std::cin >> option_str;
            if(option_str == "N" || option_str == "n"){
                break;
            }
        }
    clear();
    std::cout << std::endl;
    std::cout << "Apakah anda ingin mencoba demgan objek baru (y/n) :";
        std::cin >> option_str;
        if(option_str == "N" || option_str == "n"){
            break;
        }
}
endProgram();
return 0;
}



void input(){
    std::cout << "Panjang        : "; std::cin >> length;      
    std::cout << "Lebar          : "; std::cin >> width;       
    std::cout << "Titik tengah x : "; std::cin >> midpoint_x;  
    std::cout << "Titik tengah y : "; std::cin >> midpoint_y;  
    std::cout << std::endl;
}
void startProgram(){
    clear();
    std::cout << std::endl;
    std::cout << "======================TUGAS OPERATOR OVERLOADING===================" << std::endl;
    std::cout << "Nama  : I Wayan Agus Darmawan"<<std::endl<< "NRP   : 5024211070"<<std::endl<< "Dept  : Teknik Komputer"<<std::endl<< "Kelas : Pemrograman Lanjut B"<<std::endl;
    std::cout << "===================================================================" << std::endl;
    std::cout << "Klik enter untuk mulai program...";
    std::cin.get();
    clear();
}
void endProgram(){
    std::cout << std::endl;
    std::cout << "Terimakasih telah menggunakan program saya" << std::endl;
    std::cout << "Press Enter to Continue...";
    std::cin.get();
}
void clear(){
    system("clear || CLS");
}
int optionthis(){
    std::cout << std::endl;
    int option_fungsi;
    std::cout << "Pilihlah Operasi yang ingin anda lakukan \n 0. Operator + \n 1. Operator - \n 2. Operator ++ Objek 1 \n 3. Operator -- Objek 1 \n 4. Operator ++ Objek 2 \n 5. Operator -- Objek 2 \n 6. Operator []  \n 7. Operator == \n Masukan pilihan anda : ";
    std::cin >> option_fungsi;
    return option_fungsi;
}
