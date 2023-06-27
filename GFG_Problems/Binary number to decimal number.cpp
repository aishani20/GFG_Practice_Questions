class Solution {
  public:
    int binary_to_decimal(string str) {
        // Code here.
        int n=str.length();
        int base = 1;
        int sum= 0;
        for(int i=n-1;i>=0;i--){
            if (str[i] == '1')
            sum += base;
        base = base * 2;
    }
 
    return sum;
}
};

//2nd approach

class Solution {
  public:
    int binary_to_decimal(string str) {
        // Code here.
        int ans=0;
        for(int i=str.length()-1; i>=0; i--){
            ans=ans+(str[i]-'0')*pow(2,str.length()-i-1);
        }
        return ans;
    }
};