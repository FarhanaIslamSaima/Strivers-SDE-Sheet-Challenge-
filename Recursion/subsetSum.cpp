 class Solution
{
public:
vector<int>subset(int ind,int n,int total,vector<int>&arr,vector<int>&store,vector<int>&sum){
    
   for(auto it:store){
        total+=it;
      
   }
    sum.push_back(total);
    total=0;
    for(int i=ind;i<n;i++){
        store.push_back(arr[i]);
        subset(i+1,n,total,arr,store,sum);
        store.pop_back();
    }
    return sum;
    
  
    
}



    vector<int> subsetSums(vector<int> arr, int N)
    {
        
        vector<int>store;
         vector<int>sum;
         int total=0;
         
        subset(0,N,total,arr,store,sum);
        return sum;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends