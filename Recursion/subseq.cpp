#include<iostream>
#include<vector>
using namespace std;
int subsequence(int index,int arr[],vector<int> &ds)
{
    
    if(index==3)
    { 
        for(auto i : ds )
        {
            cout<<"{"<<i<<"}"<<" ";
        }
        if(ds.size() == 0)
        {
            cout<<"{}"<<endl;
        }
        cout<<endl;
        return 0;
    }
    ds.push_back(arr[index]);
    subsequence(index+1,arr,ds);
    ds.pop_back();
    subsequence(index+1,arr,ds);
    return 0;
    
}
int main()
{
    int arr[3] = { 3,1,2};
    vector<int> ds;
    subsequence(0,arr,ds);
    

}
