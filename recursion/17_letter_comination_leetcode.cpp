#include<iostream>
#include<vector>
using namespace std;
int cnt=0;
// class Solution {
// private:
//     void letterCombinations(string digits, vector<string>& output, string &temp, vector<string>& pad, int index){
//         if(index == digits.size()){
//             output.push_back(temp);
//             return;
//         }
//         string value = pad[digits[index]-'0'];
        
//         for(int i=0; i<value.size(); i++){
//             temp.push_back(value[i]);
//             letterCombinations(digits, output, temp, pad, index+1);
//             temp.pop_back();
//         }
//     }
// public:
//     vector<string> letterCombinations(string digits) {
//         if(digits.empty()){
//             return {};
//         }
//         vector<string> pad = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
//         vector<string> output;
//         string temp;
//         letterCombinations(digits, output, temp, pad, 0);
//         return output;
//     }
// };
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty()){
            return {};
        }
        vector<string> pad = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> output;
        output.push_back("");
        for(auto key : digits){
            vector<string> temp;
            for(auto candidate : pad[key-'0']){
                for(auto c : output){
                    temp.push_back(c + candidate);
                }
            }
            output.clear();
            output = temp;
        }
        return output;
    }
};
int main(){
    Solution s;
    string digits="234";
    vector<string> ans=s.letterCombinations(digits);
    for(auto i:ans){
        cout<<i<<endl;
    }
    
}