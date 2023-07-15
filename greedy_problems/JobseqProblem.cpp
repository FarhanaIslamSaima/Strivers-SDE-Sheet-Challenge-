//{ Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


// } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    public:
    bool static compare(Job m1,Job m2){
        return(m1.profit>m2.profit);
    }
    
    
    //Function to find the maximum profit and the number of jobs done.
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        sort(arr,arr+n,compare);
        int MAX=INT_MIN;
        for(int i=0;i<n;i++){
            MAX=max(MAX,arr[i].dead);
        }
        int jobcount=0;
        int jobProfit=0;
        vector<int>store(MAX+1,-1);
        for(int i=0;i<n;i++){
            for(int j=arr[i].dead;j>0;j--){
                if(store[j]==-1){
                    store[j]=i;
                    
                    jobcount++;
                    jobProfit+=arr[i].profit;
                    break;
                }
                
                
            }
        }
        vector<int>store2;
        store2.push_back(jobcount);
         store2.push_back(jobProfit);
        return store2;
    } 
};

//{ Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}



// } Driver Code Ends