#include <iostream>
#include <fstream>
#include <cstdlib>
#include <time.h>
#include "files/calculusFunctions.cpp"
using namespace std;
float f1(float num){
    return num*num + 2; // f(x) = x^2 +2
}
float differentiate1(float num){
    return (f1(num + 0.001)-f1(num))/0.001;
}
float differentiate2(float num){
    return 2*num;
}
int main()
{
    srand(time(NULL));
    ofstream o;
    o.open("files/rawData.txt");
    createTawData(o);
    o.close();
    
    ifstream i1;
    i1.open("files/RawData.txt");
    differentiate(i1);
    i1.close();
    
    ifstream i2;
    i2.open("files/Differentiated.txt");
    integrate(i2);
    i2.close();
    
    i1.open("files/RawData.txt");
    i2.open("files/Integrated.txt");
    compareFiles(i1,i2);
    i1.close();
    i2.close();
    
    return 0;
}
