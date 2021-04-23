//Author:Trevor Armstrong
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

vector<string> isunique(vector<string> &v,string x)
{
  for(int i=0; i<v.size()-1; i++)
  {
    if(x==v[i])
    {
      v.pop_back();
    }
  }
return v;
}

void hexicheck(string line, int found, vector<char> &hexi)
{
  for (int i = found+1; i < found+7; i++)
  {
    if((line[i]<='F'&&line[i]>='A')||(line[i]<='f'&&line[i]>='a')||
    (line[i]<='9'&&line[i]>='0'))
    {
      hexi.push_back(line[i]);
    }
  else{break;}
  }
}

int main() 
{
  stringstream what; 
  vector<string> list;
  string filename,line,temp,target("#");
  vector<char> hexi(6);
  fstream reader;

  cout.flush(); 
  cout<<"please enter filename:"<<endl;
  cin>>filename;
  reader.open(filename, ios::in);

 if( reader.is_open() ){
    while( !reader.eof() )
    {
      getline(reader,line);
      what.str(string());
      hexi.clear();
      size_t found = line.find(target);
      if (found!=string::npos)
      {
        hexicheck(line,found,hexi);
        if(hexi.size()==3||hexi.size()==6)
        {
          for(int i=0; i<hexi.size(); i++)
          {
            what<<hexi[i];
          }
          temp = what.str();
          list.push_back(temp);
          isunique(list, temp);   
        }      
      }
    }
    for(int i=0; i<list.size(); i++)
    {
      cout<<"#"<<list[i]<<endl;
    }
    cout<<"There are "<<list.size()<<" unique colors.";
  }
  else{cout<<"File could not be opened";}
  return 0;
}
