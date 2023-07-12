class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        mp[arr[i]]++;
        
        set<int> s;
        for(auto it: mp){
            s.insert(it.second);
        }
        return s.size()==mp.size();
   