#include <iostream> 
#include <cmath>
using namespace std;

int main() {
    
    double num1, num2, result;
    char operation;

    
    cout << "kalkulator gacor" << endl;
    cout << "nomor pertama: ";
    cin >> num1;
    
    
    cout << "plus kurang kali bagi? (+, -, *, /): ";
    cin >> operation;
    
   
    cout << "nomor kedua: ";
    cin >> num2;

    
    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
            break;
        case '/':
            
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
            } else {
                cout << "pembagian 0 tak legal." << endl;
            }
            break;
        default:
            // kalo yg masuk tanda tidak valid
            cout << "operator tidak valid!" << endl;
            break;
    }

    return 0;
}
