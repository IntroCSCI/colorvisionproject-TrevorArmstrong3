//Author:Trevor Armstrong
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include "color.h"
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
  int y,counter=0,num;
  color color1;
  stringstream what; 
  vector<string> list;
  vector<int> last;
  string filename,line,temp,target("#"),rating="fat";
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
      color1.conversion(list[i], y);
      color1.addgrey(y);
    }
    color1.math(last,num);
    for(int i=0;i<last.size();i++)
    {
      if(((last[i]<=30)&&(last[i]>=1))||((last[i]>=-30)&&(last[i]<=-1)))
      {
        counter=counter+1;
      }
    }
    if(counter>=300){rating="very bad";}
    else if((counter<=300)&&(counter>=201)){rating="bad";}
    else if((counter<=200)&&(counter>=101)){rating="not great";}
    else if((counter<=100)&&(counter>=51)){rating="average";}
    else if((counter<=50)&&(counter>=21)){rating="good";}
    else if((counter<=20)&&(counter>=1)){rating="great";}
    else if(counter==0){rating="perfect";}
    
  cout<<"You have "<<counter<<" problematic color combiniations."<<endl;
  cout<<"Your overall rating is: "<<rating;
  }

  else{cout<<"File could not be opened";}
  return 0;
}