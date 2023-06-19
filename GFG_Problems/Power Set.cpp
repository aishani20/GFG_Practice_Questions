class Solution{
	public:
	void printsubstring(string s, string output,int i,vector<string>& ans){
	       //base case
		    if(i>=s.length()){
		         if (!output.empty()) { // Exclude empty substring
		         
		        ans.push_back(output);
		         }
		        return;
		    }
		    //exclude
		    printsubstring(s, output,i+1,ans);
		    //include
		    output= output + s[i];
		    printsubstring(s,output,i+1,ans);
	}
		vector<string> AllPossibleStrings(string s){
		    // Code here
		      vector<string>ans;
		      string output;
        //ans.push_back(subset);
        printsubstring(s,output,0,ans);
        sort(ans.begin(),ans.end());
        return ans;
		}
};