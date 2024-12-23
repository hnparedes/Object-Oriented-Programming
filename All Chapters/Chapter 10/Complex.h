#ifndef COMPLEX_H
#define COMPLEX_H
class Complex
{
    private:
        double real, img;

    public:
        Complex();
        Complex(double _real, double _img);
        double getReal();
        double getImg();
        void setReal(double _real);
        void setImg(double _img);
        void printComplex();
        Complex addition(Complex &comp);

};

#endif