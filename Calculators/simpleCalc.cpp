# include <iostream>
using namespace std;
int main(){
    char operat;
    float num1, num2;
    cout << "Enter number one: ";
    cin >> num1;
    cout << "Enter number two: ";
    cin >> num2;
    cout << "Enter operator either (+*-/): ";
    cin >> operat;
    switch(operat)
    {
        case '+':
            cout << num1+num2;
            break;
        case '*':
            cout << num1*num2;
            break;
        case '-':
            cout << num1-num2;
            break;
        case '/':
            cout << num1/num2;
            break;
    }
    return 0;
}
