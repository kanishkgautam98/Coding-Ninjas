#include<bits/stdc++.h>
using namespace std;

int subsequences(string input, string output[])
{
  if(input.empty())
  {
    output[0] = "";
    return 1;
  }

  string smallsubstring = input.substr(1);
  int smalloutput = subsequences(smallsubstring,output);

  for(int i = 0 ; i < smalloutput ; i++)
  {
    output[i+smalloutput] = input[0] + output[i];
  }
  return 2*smalloutput;
}

int main()
{
  string input;
  cin>>input;
  string * output = new string[1000];

  int count = subsequences(input,output);

  for(int i = 0 ; i<count ; i++)
     cout<<output[i]<<endl;
}
