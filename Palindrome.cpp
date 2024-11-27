#include <iostream>
#include <Queue>
#include <Stack>
#include <cctype>
#include <string>
using namespace std;

bool isPalindrome(const string &str)
{
    stack<char> s;
    queue<char> q;
    for (size_t i = 0; i<str.length(); i++)
    {
        if (isalpha(str[i]))//check if its an alpha numeric character
        {
            s.push(tolower(str[i]));//turning everything to lowercase
            q.push(tolower(str[i]));
        }
    }
    while (!s.empty())
    {
        if (s.top() != q.front())
        {
            return false;
        }
        s.pop();
        q.pop();
    }
    return true;
}
int main(){
    string str;
    cout<<"Enter a word to check if it is a palindrome: ";
    getline(cin, str);
    if(isPalindrome(str))
    {
        cout<<"The sentence is a palindrome"<<endl;
    }
    else
    {
        cout<<"The sentence is not a palindrome"<<endl;
    }
    return EXIT_SUCCESS;
}