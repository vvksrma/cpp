#include <iostream>
using namespace std;

int main(){
    int n;   // Taking user input
    cout << "Enter number to check: ";
    cin >> n;
    
    bool isprime = true;    // checking condition
    
    for(int i = 1; i * i <= 1; i++){     // defining logic to find prime number
        if (n%2 == 0){
            isprime = false;
            break;
        }
    }
    if (isprime == true){
        cout << "Prime number\n";
    }else{
        cout << "not prime number\n";
    }
    return 0;
}
