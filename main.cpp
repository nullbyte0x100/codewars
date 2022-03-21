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
        std::sort(input.begin(),input.end());
        int sum{};
        int count{};
        if (input.empty()){
            return {};
        }else{
            for (int i:input){
                if (i<0){
                    sum+=i;
                }else if(i>0){
                    count+=1;
                }else{

                }
            }
        }
        return {count,sum};
    }
    static std::vector<int> invert(std::vector<int> values) {
        std::vector<int> inverted{};
        for (int i: values) {
            inverted.push_back(-i);
        }
        return inverted;
    }
    static std::string get_middle(std::string s)
    {
        auto pos = s.length() == 0 ? 0 : s.length() / 2 - ( s.length() % 2 == 0 );
        auto n=1+(s.length()%2==0);
        auto j=s.length()%2==0;
if (s.length()%2==0){
    return s.substr(pos,n);
}else{
    return s.substr(pos,j);
}

    }
};
int main() {
    std::cout<<Solution::get_middle("testing");
}