//{ Driver Code Starts
// C++ program for implementation of Heap Sort
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// The functions should be written in a way that array become sorted 
// in increasing order when heapSort() is called.

class Solution
{
    public:
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i)  
    { 
        int l=i*2+1;
    	int r=i*2+2;
    	int largest=i;
    	
    	
    	if(l<n && arr[largest]<arr[l])
    		largest=l;
    	if(r<n && arr[largest]<arr[r])
    		largest=r;
    	
    	
    	if(largest!=i)
    	{
    		int temp=arr[i];
    		arr[i]=arr[largest];
    		arr[largest]=temp;
    		
    		heapify(arr,n,largest); 
    	}
    }

    public:
    void buildHeap(int arr[], int n)  
    { 
        for(int i=n/2-1;i>=0;i--)
        {
            heapify(arr,n,i);
        }
    }

    
    public:
    void heapSort(int arr[], int n)
    {
        buildHeap(arr,n);
        
        for(int i=n-1;i>0;i--)
        {
            int temp=arr[i];
            arr[i]=arr[0];
            arr[0]=temp;
            
            heapify(arr,i,0);
        }
    }
};




//{ Driver Code Starts.

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[1000000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    Solution ob;
    ob.heapSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

// } Driver Code Ends