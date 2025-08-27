#include <iostream>
using namespace std;

long long factorial(int n){
    long long result = 1;
    for (int i = 1; i <= n; i++) result *= i;
    return result;
}

int main(){
    int number = 5;
    cout << "Factorial of " << number << " = " << factorial(number) << endl;
    return 0;
}
