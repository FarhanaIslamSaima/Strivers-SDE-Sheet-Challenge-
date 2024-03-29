//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    bool static compare(Item m1,Item m2){
        
        double r1=(double)m1.value/(double)m1.weight;
        double r2=(double)m2.value/(double)m2.weight;
        return r1>r2;
        
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        int currentWeight=0;
        double currentValue=0.0;
        sort(arr,arr+n,compare);
        for(int i=0;i<n;i++){
            if(currentWeight+arr[i].weight<=W){
                currentValue+=arr[i].value;
                currentWeight+=arr[i].weight;
                
            }
            else{
                int remain=W-currentWeight;
                currentValue+=((double)arr[i].value/(double)arr[i].weight)*(double)remain;
                break;
            }
        }
        
        return currentValue;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends