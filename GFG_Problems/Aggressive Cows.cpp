class Solution {
public:
    
    bool check(vector<int> stalls,int n ,int k,int mid){
        int lastPos = stalls[0] ; 
        int cow = 1 ; 
        
        for(int i = 0;i<n ;i++){
            if(stalls[i]-lastPos >= mid){
                cow++ ; 
                if(cow == k) return true ; 
                lastPos = stalls[i] ; 
            }
        }
        return false ; 
    }
    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin() , stalls.end()) ;
        int maxi = stalls[n-1] ;
        int e = maxi ;
        int s = 0 ;
        int ans = -1 ;
        int mid = s+(e-s)/2 ;
        
        while(s<=e){
            if(check(stalls,n,k,mid)){
                ans = mid ;
                s = mid+1 ;
                
            }
            else{
                 e = mid-1 ;
            }
            
            mid = s+(e-s)/2 ;
        }
        return ans ;
    }
    
};