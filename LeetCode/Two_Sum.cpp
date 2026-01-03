/*
############################################################
#                    LeetCode | Two Sum                    #
#                  Author: Mohammed Thaha                  #
#                                                          #
# Note:                                                    #
# Comments are written mainly for my own understanding.    #
# Please don’t mind any small grammar mistakes.            #
############################################################
*/

#include<bits/stdc++.h>
using namespace std;
class Mohammed_Thaha{
    public:
       /*The Below program is the brute force approach using two pointer one is starting and another one is moving and 
       concurrently adding outer and inner pointers and check with target if matches found then return the index value of both 
       indices as a result to solve this problem it takes O(n^2) time complexity */
        vector<int> Brute_Force(vector<int> nums,int target){
             int n=nums.size();
             for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(nums[i]+nums[j]==target){
                        return {i,j};
                    }
                }
             }
            return {};
        }
        /*The Below program is the two pass hash table approach using hash table to find the soluiton.
        first we need to put the nums values into hash table as key and store the index value in value
        key-->nums[i];
        value-->i
        now we need to iterate and find the solution for that we need complement 
        using the complement we can easily find the solution .`. complement=target-nums[i]
        it gives the complement and check if does that exist in hashtable or not becoz i explain this concept with example
        if target is 9 first number is 2
        complement=9-2=7 so i need this number if that exist when i add the coplement result and the number whihc go through in 
        i got the original number like that only this concept works 
        so we can easily find the solutioon and time complexity is O(n)
        here we return {i,HT[c]}
        */
        vector<int> Two_Pass_HashTable(vector<int> nums,int target){
            unordered_map<int,int> HT;  //-->HashTable
            int n=nums.size();  
            for(int i=0;i<n;i++){
                HT[nums[i]]=i;     //-->key:value
            }
            for(int i=0;i<n;i++){
                int complement=target-nums[i];
                if(HT.count(complement) && HT[complement]!=i){
                    return {i,HT[complement]};
                }
            }
            return {}; 
        }

        /*The Below program is the one pass hashtable approach it also same like the above concept but here we don't need two loops we can make 
        into one loop and change some statment but here we return {ht[c],i}
        reason: is first we change the repetion using count and if yes then return the that particular value index wiht and current i indices
        */
        vector<int> One_Pass_HashTable(vector<int> nums,int target){
            unordered_map<int,int> HT;    //-->HashTable
            int n=nums.size();
            for(int i=0;i<n;i++){
                int complement=target-nums[i];
                if(HT.count(complement)){
                    return {HT[complement],i};
                }
                HT[nums[i]]=i;
            }
            return {};
        }
         
        void display(vector<int> vec){
            for(auto i:vec){
                cout<<i<<" ";
            }
        }
};

int main(){
    int n;
    cout<<"Enter the Number of Element:";
    cin>>n;
    vector<int> vec;
    cout<<"Enter the Array Element:";
    for(int i=0;i<n;i++){
        int val;cin>>val;
        vec.push_back(val);
    }
    int target;
    cout<<"Enter the Target Element:";
    cin>>target;

    int choice;
    cout<<"\tChoices\n1.Brute Force\n2.Two Pass Hash Table Approach\n3.One Pass Hash Table Approach";
    cout<<"Enter a choice:";
    cin>>choice;

    Mohammed_Thaha solution;
    vector<int> result;
    switch(choice){
        case 1: 
                result=solution.Brute_Force(vec,target);
                solution.display(result);
                break;
        case 2:
                result=solution.Two_Pass_HashTable(vec,target);
                solution.display(result);
                break;
        case 3:
                result=solution.One_Pass_HashTable(vec,target);
                solution.display(result);
                break;
        default:
            cout<<"correct ha choice fill pannanum seriya...";
            break;
    }
    return 0;
}