#include <iostream>
using namespace std;

// Time Complexity: O(log n)
// Space Complexity: O(1)
int solution(int* arr, int n, int k) {

    int l = 0, h = n-1;

    while(l<=h) {
        int mid = (h-l)/2 + l;
        if(arr[mid] == k) {
            return mid;
        }else if(arr[mid] > k) {
            h = mid-1;
        }else{
            l = mid+1;
        }
    }

    return -1;
}


int main() {

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int k = 10;

    cout<<solution(arr, sizeof(arr)/sizeof(arr[0]), k);

   return 0;   
}