#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

string LongestWord(string sen) { 

  // code goes here   
  string sen2 = "";
  for(int i=0;i<sen.length();i++)
  {
    if(isalpha(sen[i])||sen[i]==' '||'0'<=sen[i]&&sen[i]<='9')
    {
      sen2.append(sen.substr(i,1));
    }
  }
  char* sench = (char*)sen2.c_str();
  string longest = "";
  int longestLen = 0;
  for(const char* pch=strtok(sench," ");pch;pch=strtok(NULL," "))
  {
    if(strlen(pch)>longestLen)
    {
      longest = pch;
      longestLen=strlen(pch);
    }
  }
  return longest; 
            
}

int main() { 
  
  // keep this function call here
  cout << LongestWord(gets(stdin));
  return 0;
    
}