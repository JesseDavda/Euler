#include <iostream>

using namespace std;

int main() {
    
    long unsigned int prev = 1, curr = 2, sum, temp = curr + prev;
    
    while(temp <= 4000000) {
        if(temp % 2 == 0) {
            sum += temp;
        }
        
        prev = curr;
        curr = temp;
        temp = curr + prev;
    }
    
    cout << sum << endl;
}