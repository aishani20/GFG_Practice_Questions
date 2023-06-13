First Approachc:-
class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        //code here
        vector<long long> ans(n);
        ans[0] = 1;
        ans[1] = 1;
        for(int i=2;i<n;i++){
            ans[i]=ans[i-1]+ans[i-2];
        }
        return ans;
    }
};




Second Approach:-


class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n){
        vector<long long>v(n);
        for(int i=0;i<n;i++)
        {
            if(i==1||i==0)
            v[i]=1;
            else
               v[i]=(v[i-1]+v[i-2]);
        }
        return v;
    }

   
    
};