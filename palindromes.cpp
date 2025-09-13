// At a national tech event, every participant receives a custom name badge. The event organizers want the names on the badge to look visually appealing by arranging the letters to form a palindrome.
// They can rearrange the letters from the participant’s name (all in lowercase), and their goal is to form the longest possible palindrome using some or all of the letters.
// You are given a string s representing the characters in the participant’s name. Your task is to return the length of the longest palindrome that can be built using those letters.
// ---
// ✏️ Example 1:
// Input:
// s = "abccccdd"
// Output:
// 7
// Explanation:
// One of the longest palindromes that can be formed is "dccaccd". You can use two 'c's and two 'd's on either side, and one odd letter (like 'a' or 'b') in the middle.
// ---
// ✏️ Example 2:
// Input:
// s = "a"
// Output:
// 1
// Explanation:
// Only one character is available, so the palindrome is "a" itself.
// ---
// ✅ Constraints:
// 1 <= s.length <= 2000
// s consists of only lowercase English letters
#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s = "aaaabbbbcccdde";
    map<char, int>m;
    int ans=0;
    for (int i=0;i<s.size();i++) 
    {
        m[s[i]]++;
    }
    int flag=0;
    for(auto i:m)
    {
        if(i.second%2==0)
        {
            ans+=i.second;
        }
        else
        {
            ans+=i.second-1;
            flag=1;
        }
    }
    cout<<ans+flag;
    return 0;
}