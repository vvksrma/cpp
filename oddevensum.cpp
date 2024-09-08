// for even number sum
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    
    int sum = 0;
    
    for(int i = 1; i <= n; i++) {
        if (i % 2 == 0){
            sum += i;
        }
    }
    cout << "The sum of all possible even numbers are : " << sum;
    return 0;
}

// for odd number sum

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    
    int sum = 0;
    
    for(int i = 1; i <= n; i++) {
        if (i % 2 != 0){
            sum += i;
        }
    }
    cout << "The sum of all possible odd numbers are : " << sum;
    return 0;
}
