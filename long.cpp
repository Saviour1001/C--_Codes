#include <vector>
#include <iostream>

using namespace std;

void factorial(int val)
{
    int carry = 0;       
    vector <int> arr(10000, 0);   
    arr[0] = 1;                   
    int k = 0;                         

    for(int i = 1; i <= val; i++) {
        for(int j = 0;j <= k; j++) {      
            arr[j] = arr[j] * i + carry;
            carry = arr[j] / 10;
            arr[j] = arr[j] % 10;
        }
        while(carry) {        
            k++;
            arr[k] = carry % 10;
            carry /= 10;
        }   
    }
    for(int i = k; i >= 0; i--) {  
        cout<<arr[i];
    }
    cout << "\n";
}
int main() {
    int num;
    cin>>num;
    factorial(num);
    return 0;
}
