#include <iostream>

using namespace std;

int main() {
    
    int count;
    
    for(int i = 1; i < 1000; i++) {
        if(i % 3 == 0 || i % 5 == 0) {
            count++;   
        }
    }
    
    cout << count << endl;
}