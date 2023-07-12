class Solution{
public:	
	
	int f(string &S, int i){
	  
	    if(i>=S.length()/2){
	        return true;
	    }
	    if(S[i]!=S[S.length()-i-1]){
	        return false;
	    }
	    return f(S,i+1);
	    
	}
	    
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    return f(S,0);
}
};