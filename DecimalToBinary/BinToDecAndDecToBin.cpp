#include <iostream> 
using namespace std; 
  
int binaryToDecimal(int number) 
{ 
    int num = number; 
    int dec_value = 0; 
    int base = 1; 
    int temp = num; 
    while (temp) { 
        int last_digit = temp % 10; 
        temp = temp / 10; 
        dec_value += last_digit * base; 
        base = base * 2; 
    } 
    return dec_value; 
} 
void decToBinary(int number) 
{ 
    int binaryNum[32]; 
    int i = 0; 
    while (number > 0) { 
        binaryNum[i] = number % 2; 
        number = number / 2; 
        i++; 
    } 
    for (int j = i - 1; j >= 0; j--) 
        cout << binaryNum[j]; 
} 
int main() 
{ 
    int userInput;
    cout<<"Please select which of the following you would like to do:";
    cout<<"1. Convert Denary to Binary (Please write 1)";
    cout<<"2. Convert Binary to Denary (Please write 2)";
    cin >> userInput;
    cout<<"What do you want to convert?";
    int num; 
    cin >> num;
    if (userInput==1){
        cout<< decToBinary(num); 
    }else if (userInput==2){
        cout<< binaryToDecimal(num);
    }
} 
