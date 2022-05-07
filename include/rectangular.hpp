#ifndef __RECTANGULAR_HPP__
#define __RECTANGULAR_HPP__
    class persegiPanjang{
        private:
            float x_maks, x_min, y_maks, y_min;
        public:
            persegiPanjang(float midpoint_x, float midpoint_y, float length, float width);
            bool operator== (persegiPanjang const &)const;
            persegiPanjang operator+ (persegiPanjang const &);
            persegiPanjang operator- (persegiPanjang const &);
            void operator++ ();
            void operator++(int);
            void operator-- ();
            void operator--(int);
            float operator[](int pilihan);
            void output();
            
    };
#endif