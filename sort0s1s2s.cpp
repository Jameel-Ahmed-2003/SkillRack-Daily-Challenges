//sort 0's 1's 2's dutch national flag algorithm leetcode problem
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void sortColors(vector<int>&a)
    {
        int mid=0;
        int low=0;
        int high=a.size()-1;
        while(mid<=high)
        {
            if(a[mid]==0)
            swap(a[mid++],a[low++]);
            else if(a[mid]==1)
            mid++;
            else
            swap(a[mid],a[high--]);
        }
    }
};
int main()
{
    int n;
    cout<<"Enter the size of vector : ";
    cin>>n;
    cout<<"Enter "<<n<<" elements : ";
    vector<int>nums(n);
    for(size_t i=0;i<nums.size();i++)
    cin>>nums.at(i);
    Solution obj;
    obj.sortColors(nums);
    for(size_t i:nums)
    cout<<i<<" ";
    cout<<endl;
}
