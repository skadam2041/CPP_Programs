#include<iostream>
#include<vector>
using namespace std;
int subsequence(int index,int arr[],vector<int> &ds,int sum,int finalsum )
{
    
    if(index>=3 && sum==finalsum)
    {
        for(auto i : ds )
        {
            cout<<"{"<<i<<"}"<<" ";
        }
        cout<<endl;
        return 0;
    }
    ds.push_back(arr[index]);
    
    sum = sum + arr[index];
    

    subsequence(index+1,arr,ds,sum,finalsum);
   
    sum = sum - arr[index];
    ds.pop_back();
    subsequence(index+1,arr,ds,sum,finalsum);
    return 0;
    
}
int main()
{
    int arr[3] = { 3,1,2};
    vector<int> ds;
    int sum = 0;
    int finalsum = 2;
    subsequence(0,arr,ds,sum,finalsum);
    return 0;
    

}
