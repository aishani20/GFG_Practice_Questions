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

//APPROACH-2

class Solution{
	public:
	void f(string s,string output, int i,vector<string>&ds){
	    //base case
	    if(i>=s.length()){
	        if(output.length()>0)
	        ds.push_back(output);
	        return;
	    }
	    char element=s[i];
	    output.push_back(element);
	    f(s,output,i+1,ds);
	    
	    output.pop_back();
	    f(s,output,i+1,ds);
	    
	}
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    vector<string>ds;
		    
		    string output="";
		    f(s,output,0,ds);
		    sort(ds.begin(),ds.end());
		    return ds;
		
		}
};