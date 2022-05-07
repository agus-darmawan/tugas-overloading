#include <iostream>
#include <cmath>
#include "include/rectangular.hpp"


void persegiPanjang::output(){
    float length = this->x_maks - this->x_min; length = abs(length);
    float width   = this->y_maks - this->y_min; width   = abs (width);
    std::cout << "Titik tengah x   : " << (this->x_maks - this->x_min)/2 + this->x_min; std::cout << std::endl;
    std::cout << "Titik tengah y   : " << (this->y_maks - this->y_min)/2 + this->y_min; std::cout << std::endl;
    std::cout << "Panjang          : " << length; std::cout << std::endl;
    std::cout << "Lebar            : " << width; std::cout << std::endl;
    std::cout << "Nilai x_min      : " << this->x_min; std::cout << std::endl;
    std::cout << "Nilai x_max      : " << this->x_maks; std::cout << std::endl;
    std::cout << "Nilai y_min      : " << this->y_min; std::cout << std::endl;
    std::cout << "Nilai y_maks     : " << this->y_maks; std::cout << std::endl;
}


persegiPanjang::persegiPanjang(float midpoint_x, float midpoint_y, float length, float width){
    this->x_min = midpoint_x - (length/2);
    this->y_min = midpoint_y - (width/2);
    this->x_maks = midpoint_x + (length/2);
    this->y_maks = midpoint_y + (width/2);
}

bool persegiPanjang::operator==(persegiPanjang const &new_var)const{
    if (this->x_maks > new_var.x_min && this->x_min < new_var.x_maks && this->y_maks > new_var.y_min && this->y_min < new_var.y_maks){
        return true;
    }else{
        return false;
    }
}

persegiPanjang persegiPanjang::operator-(persegiPanjang const &new_var){
    persegiPanjang temp(0,0,0,0);
    if (*this == new_var){
        temp.x_min = std::max(this-> x_min,new_var.x_min);
        temp.y_min = std::max(this-> y_min,new_var.y_min);
        temp.x_maks = std::min(this-> x_maks,new_var.x_maks);
        temp.y_maks = std::min(this-> y_maks,new_var.y_maks);
    }else{
        std::cout << "Kedua bangun tidak beririsan" << std::endl;
    }
    return temp;
}

persegiPanjang persegiPanjang::operator+(persegiPanjang const &new_var){
    persegiPanjang temp(0,0,0,0);
    if (*this == new_var){
        temp.x_min = std::min(this-> x_min,new_var.x_min);
        temp.y_min = std::min(this-> y_min,new_var.y_min);
        temp.x_maks = std::max(this-> x_maks,new_var.x_maks);
        temp.y_maks = std::max(this-> y_maks,new_var.y_maks);
    }else{
        std::cout << "Objek tidak beririsan" << std::endl;
    }
    return temp;
}

void persegiPanjang::operator--(){
    float length = 0, width = 0, midpoint_x = 0, midpoint_y = 0;
    length = this->x_maks - this->x_min; length = abs(length);
    width = this->y_maks - this->y_min; width = abs(width);
    midpoint_x = this->x_min + length/2;
    midpoint_y = this->y_min + width/2;

    length = length / 2;
    width = width / 2;

    this->x_min = midpoint_x - length/2;
    this->y_min = midpoint_y - width/2;
    this->x_maks = midpoint_x + length/2;
    this->y_maks = midpoint_y + width/2;
}

void persegiPanjang::operator++(){
    float length = 0, width = 0, midpoint_x = 0, midpoint_y = 0;
    length = this->x_maks - this->x_min; length = abs(length);
    width = this->y_maks - this->y_min; width = abs(width);
    midpoint_x = this->x_min + length/2;
    midpoint_y = this->y_min + width/2;

    length = length * 2;
    width = width * 2;

    this->x_min = midpoint_x - length/2;
    this->y_min = midpoint_y - width/2;
    this->x_maks = midpoint_x + length/2;
    this->y_maks = midpoint_y + width/2;
}


float persegiPanjang::operator[](int pilihan){
    switch (pilihan){
    case 1:
        return this->x_min;
        break;
    case 2:
        return this->x_maks;
        break;
    case 3:
        return this->y_min;
        break;
    case 4:
        return this->y_maks;
        break;
    }
    return 0;
}