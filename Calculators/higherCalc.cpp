#include <iostream>
#include <string>
using namespace std;
int add(int a, int b){
    return a+b;
}
int negative(int a){
    return -1*a;
}
int subtract(int a, int b){
    return add(a,negative(b));
}
int multiply(int a, int b){
    int answer = 0;
    for(int j=0; j<b; j++){
        answer=  add(answer,a);
    }
    return answer;
}
int divide(int a, int b){
    int counter=0;
    int temp = a;
    while(temp>=b&& b!=0){
        temp = subtract(temp,b);
        counter = add(counter,1);
    }
    return counter;
}
int mod(int a, int b){
    int temp = a;
    while (temp>=b && b!=0){
        temp = subtract(temp,b);
    }
    return temp;
}
int power(int a,int b){
    int answer =1;
    for(int j=0;j<b;j++){
        answer = multiply(answer,a);
    }
    return answer;
}
int root(int a, int b){
    int temp = a;
    int counter = 0;
    while(temp>=b && b!=0){
        temp = divide(temp,b);
        counter = add(counter,1);
    }
    return counter;
}
bool isPrime(int a){
    bool flag = true;
    for (int j = 2; j<divide(a,2);j++){
        if (mod(a,j)==0){
            flag = false;
            break;
        }
    }
    return flag;
}
int factorial(int a){
    int answer = 1;
    for(int j=a;j>0;j--){
        answer = multiply(answer,j);
    }
    return answer;
}
int logorithm(int a, int base){
    for(int j=0; j<a;j++){
        if(power(base,j)>a){
            return subtract(j,1);
        }
    }
}
string stringify(int num){
    string outputStr = "";
    int lengthNum = add(logorithm(num,10),1);
    int temp = num;
    for(int j = lengthNum-1; j>=0;j--){
        int currentNum = divide(temp,power(10,j));
        cout<<"currentNum = "<<currentNum<<", temp = "<<temp<<endl;
        temp = mod(temp,power(10,j));
        outputStr= outputStr + (char)(currentNum+48);
    }
    return outputStr;
}
int numberfy(string str){
    int answer=0;
    for(int j = 0; j<str.length();j++){
        int digit = (int)(str[j]-48)*power(10,(str.length()-j-1));
        cout<<"Digit = "<<digit<<", answer = "<<answer<<endl;
        answer = answer + digit;
    }
    return answer;
}
int main()
{
    cout<<"3-2="<<subtract(3,2)<<endl;
    cout<<"3+2="<<add(3,2)<<endl;
    cout<<"3*2="<<multiply(3,2)<<endl;
    cout<<"6/2="<<divide(6,2)<<endl;
    cout<<"8 MOD 3="<<mod(8,3)<<endl;
    cout<<"2^3="<<power(2,3)<<endl;
    cout<<"Sqrt(4)="<<root(4,2)<<endl;
    //cout<<"log10(1000)="<<logarithm(1000,10)<<endl;
    cout<<"12 is prime "<<isPrime(12)<<endl;
    cout<<"13 is prime "<<isPrime(13)<<endl;
    cout<<"Factorial of 5 is "<<factorial(5)<<endl;
    cout<<stringify(123456)<<endl;
    cout<<numberfy("123455")<<endl;
    return 0;
}
