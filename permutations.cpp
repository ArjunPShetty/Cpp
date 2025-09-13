// Count Arrangements of Characters in a String

// You are given a string consisting of only lowercase English letters. Your task is to find and print the total number of distinct arrangements (permutations) of the characters of the string.

// If the string contains repeated characters, treat identical letters as indistinguishable while counting.


// ---

// Input:

// A single string consisting of lowercase letters only.

// Output:

// Print a single integer – the total number of distinct arrangements of the characters.


// ---

// Examples:

// Example 1
// Input:
// abc
// Output:
// 6
// (3! = 6 unique arrangements)

// Example 2
// Input:
// aab
// Output:
// 3
// (3! / 2! = 6 / 2 = 3 unique arrangements)

// Example 3
// Input:
// aaaa
// Output:
// 1
// (All characters are the same)

// Example 4
// Input:
// onion
// Output:
// 30
// (5! / (2! × 2!) = 120 / 4 = 30)

// Example 5
// Input:
// abbba
// Output:
// 10
// (5! / (2! × 3!) = 120 / 12 = 10)
#include<iostream>
#include<map>
#include<string>
#include<algorithm>
using namespace std;
int fact(int);
int main()
{
    string s = "manishshetty";
    map<char, int>m;
    for (int i=0;i<s.size();i++) 
    {
        m[s[i]]++;
    }
    int n=1;
    n=fact(s.size());
    int deno=1;
    for(auto i:m)
    {
        deno*=fact(i.second);
    }
    cout<<n/deno;
}
int fact(int n)
{
    int ans=1;
    for(int i=1;i<=n;i++)
    {
        ans*=i;
    }
    return ans;
}