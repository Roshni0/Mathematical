#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
void createRawData(ofstream &o){
    for(int j=0;j<100;j++){
        int randNum = rand()%100;
        int sign = rand()%2;
        randNum = sign == 1 ? randNum*-2 : randNum;
        randNum += 10;
        o<<randNum<<endl;
    }
}
void differentiate(ifstream &i){
    ofstream o;
    o.open("files/Differentiated.txt");
    float first = 10;
    float second;
    while(i){
        i>>second;
        float differential = second - first;
        o<<differential<<endl;
        first = second;
    }
    o.close();
}
void integrate(ifstream &i){
    ofstream o;
    o.open("files/Integrated.txt");
    float integrated = 0;
    float temp;
    while(i){
        i>>temp;
        integrated = integrated + temp;
        o<<integrated<<endl;
    }
    o.close();
}
void compareFiles(ifstream &i1,ifstream &i2){
    while(i1 || i2){
        float a,b;
        i1>>a;
        i2>>b;
        cout<<a<<"<<b<<endl;
    }
}
