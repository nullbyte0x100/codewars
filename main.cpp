#include <iostream>
#include "vector"
#include <sstream>
#include "bits/stdc++.h"
#include <algorithm>
class Solution{
public:
    static int findOdd(std::vector<int> &numbers){
        for (int i=0;i<numbers.size();i++){
            int count{};
            for (int j=0;j<numbers.size();j++){
                if (numbers[i]==numbers[j])
                    count++;
            }
            if (count%2!=0)
                return numbers[i];
        }
        return -1;
    }
    static int getCount(const std::string & inputStr){
        int count{};
        int len=inputStr.length();
        for (int i=0;i<len;i++){
            if (inputStr[i]=='a'||inputStr[i]=='e'||inputStr[i]=='i'||inputStr[i]=='o'||inputStr[i]=='u'){
                count++;
            }
        }
        return count;
    }
    static int find_short(std::string str){
        int strLen{};
        std::vector<int> lengths{};
        std::vector<std::string> tokens{};
        std::stringstream ss(str);
        std::string token{};
        while (getline(ss,token,' ')){
            tokens.push_back(token);
        }
        for (std::string a:tokens){
            int len=a.length();
            lengths.push_back(len);
        }
        return *std::min_element(lengths.begin(),lengths.end());
    }
    static std::string reverse_words(std::string str){
        std::string word{};
        std::stringstream s(str);
        std::vector<std::string> v{};
        while(s>>word){
            reverse(word.begin(),word.end());
            v.push_back(word);
        }
        for (auto x:v){
            return x;
        }
    }
    static std::string revWords(std::string str){

        std::string word;

        std::stringstream s(str);
        std::vector<std::string> ans{};
        while(s >> word){
            reverse(word.begin(),word.end());
            ans.push_back(word);
        }
        for (int i=0;i<ans.size();i++){
            return ans[i];
        }
    }
    static std::vector<int> twoSum(std::vector<int> &array,int target){

        for (int i=0;i<array.size()-1;i++){
            int a=array[i];
            for (int j=i=1;j<array.size();j++){
                int b=array[j];
                if (a+b==target){
                    return {a,b};
                }
            }
        }
        return {};
    }
    static std::string boolean_to_string(bool b){
        if (b==true){
            return  "true";
        }else{
            return "false";
        }
    }
    static std::vector<int> countPositiveSumNegatives(std::vector<int> input){
        int positiveCount{};
        int sumNegative{};
        for (int i:input){
            if (i<0){
                sumNegative+=i;
            }else{
                positiveCount+=1;
            }
        }
        return {positiveCount,sumNegative};
    }
};
int main() {
    std::vector<int> input={1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15};
    std::vector<int> ans=Solution::countPositiveSumNegatives(input);
    for (int i:ans){
        std::cout<<i<<" ";
    }
}