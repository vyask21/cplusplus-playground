#include <iostream>

using namespace std;

int main(){
    //declare variables
    int num1, num2, sum;

    //user prompt
    cout<< "Enter the first number: ";
    cin>> num1;

    cout<< "Enter the second number: ";
    cin>> num2;

    sum = num1 + num2;

    //displaying result
    cout<< "Sum of " << num1 << " and " << num2 <<" is: " << sum << endl;

    return 0;

}