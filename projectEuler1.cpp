#include <iostream>

using namespace std;

int main() {
    
    long unsigned int sum;
    
    for(int i = 1; i < 1000; i++) {
        if(i % 3 == 0 || i % 5 == 0)
            sum += i;   
    }
    
    cout << sum << endl;
}