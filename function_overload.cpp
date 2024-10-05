//Adrish Purkayastha
//PRN: 23070123011
//EnTC A
//C++ program to study and implement function overloading 
#include <iostream>
using namespace std;
class Calculate{
    public:
    int sum(int a,int b){
        return a+b;
    }
    int sum(int a, int b, int c){
        return a+b+c;
    }
    float sum(int a, float b){
        return a+b;
    }
};
int main(){
    Calculate c1;
    cout<<c1.sum(2,3)<<endl;
    cout<<c1.sum(12,2,3)<<endl;
    cout<<c1.sum(12,2.2f)<<endl;
}
/*
OUTPUT:
5
17
14.2
*/