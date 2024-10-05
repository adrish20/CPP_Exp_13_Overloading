//Adrish Purkayastha
//PRN: 23070123011
//EnTC A
//C++ program to study and implement operator overloading
#include <iostream>
using namespace std;
class Complex{
    int real, imag;
    public:
    Complex(int r=0, int i=0){
        real = r;
        imag = i;
    }
    Complex operator-(Complex const& obj){
        Complex res;
        res.real = real - obj.real;
        res.imag = imag - obj.imag;
        return res;
    }
    void print(){
        cout<<real<<" + i"<<imag<<'\n';
    }
};
int main(){
    Complex c1(10,5), c2(2,4);
    Complex c3 = c1-c2;
    c3.print();
}
/*
OUTPUT:
8 + i1
*/