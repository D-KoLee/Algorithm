#include <iostream>
#include <math.h>
using namespace std;

int main() {
    unsigned int n;
    cin>>n;
    unsigned int low = 1;
    unsigned int high = n;
    unsigned int mid;
    if(n == 1) {
        cout<<1;
        return 0;
    }
    while (true) {
        mid = (low + high)/ 2;
        if(pow(mid,2) == n) {
            cout<<mid;
            break;
        }
        else if(pow(mid,2) > n)
            high = mid - 1;
        else if(pow(mid,2)<n)
            low = mid + 1;
        else if(low == high) {
            cout<<low;
            break;
        }
    }
}