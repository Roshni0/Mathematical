#include <iostream>
#include <iomanip>
using namespace std;

int* rationalize(double num){
    int *arr = new int[10];
    int counter = 0;
    arr[0] = (int)num;
    num = num - (int)num;
    counter++;
    for(int j=2;j<1000000 && counter<10;j++){
        double temp=1.0/j;
        if(num>=temp){
            num = num - temp;
            arr[counter++]=j;
        }
    }
    return arr;
}
int main()
{
    cout<<setprecision(10);
    double num = 3.123456789;
    int*arr = rationalize(num);
    double temp = arr[0];
    for(int j = 1; j<10;j++){
        if(arr[j]==0){
            continue;
        }
        cout<<"temp ="<<temp<<", 1.0/"<<arr[j]<<"="<<1.0/arr[j]<<endl;
        temp += 1.0/arr[j];
    }
    cout<<"temp="<<temp<<endl;
    return 0;
}
