#include<bits/stdc++.h>
using namespace std;

void printsubsequences(string input,string output)
{
  if(input.length()==0)
  {cout<<output<<endl;
  return;}

  printsubsequences(input.substr(1),output);
  printsubsequences(input.substr(1),output+input[0]);
  return;

}



int main()
{
  string input;
  cin>>input;
  string output;
  printsubsequences(input,output);
  return 0;
}
