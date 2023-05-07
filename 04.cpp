#include <iostream>
using namespace std;

// Time Complexity: O(log n)
// Space Complexity: O(1)
int lower(int* arr, int n, int k) {
    int res = -1;

    int l = 0, h = n-1;

    while(l<=h) {
        int mid = (h-l)/2 + l;
        if(arr[mid] == k) {
            res = mid;
            h = mid - 1;
        }else if(arr[mid] > k) {
            h = mid-1;
        }else{
            l = mid+1;
        }
    }

    return res;
}

// Time Complexity: O(log n)
// Space Complexity: O(1)
int upper(int* arr, int n, int k) {
    int res = -1;

    int l = 0, h = n-1;

    while(l<=h) {
        int mid = (h-l)/2 + l;
        if(arr[mid] == k) {
            res = mid;
            l = mid + 1;
        }else if(arr[mid] > k) {
            h = mid-1;
        }else{
            l = mid+1;
        }
    }

    return res;
}


int main() {

    int arr[] = {1,2,3,4,5,5,5,5,5,6,7,8,9};
    int k = 5;

    cout<<(upper(arr, sizeof(arr)/sizeof(arr[0]), k) < 0 ? 0 : upper(arr, sizeof(arr)/sizeof(arr[0]), k)-lower(arr, sizeof(arr)/sizeof(arr[0]), k)+1);

   return 0;   
}