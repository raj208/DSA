#include<iostream>
#include<vector>
using namespace std;

int countCharacters(vector<string>&words, string chars)
{
    int count = 0;
    for (int i = 0; i < words[i].size(); i++)
    {
        string temp = words[i];
        for (int j = 0; j < chars.size(); j++)
        {
            int tempCount =0;
            if (temp[i] == chars[j])
            {
                tempCount++;
            }
            else
            {
                tempCount = 0;
            }
            count += tempCount;
        }
    }
    return count;
}

int main(){
    string str = "atach";
    int size;
    cout<<"Enter the size of vector"<<endl;
    cin>>size;
    vector<string>words;
    cout<<"Enter the values in vector"<<endl;
    for (int i = 0; i < size; i++)
    {
        string input;
        cin>>input;
        words.push_back(input);
    }

    int result = countCharacters(words,str);
    cout<<result<<endl;
    return 0;
}