class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        return checksorted(arr,n,0);
    }
        // code here
        bool checksorted(int arr[], int n, int i){
        //base case
        if(i==n-1){
            return true;
        }
        //ek case solve kardo
        if(arr[i+1]<arr[i]){
            return false;
        }
        //baki recurson will see
        return checksorted( arr,n,i+1);
    }
};