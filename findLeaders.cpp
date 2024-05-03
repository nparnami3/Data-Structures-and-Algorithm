#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#include <iostream>

void Leaders(int arr[], int n) {
    int result[n]; // Temporary array to store leaders
    int max = arr[n - 1];  // Initialize the maximum element from the right
    int count =0;

  nmas
    result[count++] = max;

    // From right to left
    for (int i= n-2; i>= 0; i--) {
        if (arr[i] >= max) {
            result[count++] =arr[i];
            max = arr[i];
        }
    }


    for (int i = count - 1; i >= 0; i--) {
        cout << result[i] << " ";
    }
}

int main() {
    
    
    
    
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    

    Leaders(arr, n);
    cout << endl;

    return 0;
}

