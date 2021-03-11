//Author:Trevor Armstrong
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

int main()
{
string filename,line;
string target("#");
char hexi[6];
fstream reader;


cout<<"please enter filename:"<<endl;
cin>>filename;
reader.open(filename, ios::in);

 if( reader.is_open() ){
    while( !reader.eof() ){
      getline(reader,line);
      
      size_t found = line.find(target);
        if (found!=string::npos)
      
      for (int i = found+1; i < found+7; i++){
        if((line[i]<='f'&&line[i]>='a')||(line[i]<='9'&&line[i]>='0')){
          
            hexi[i-(found+1)]=line[i];
          }
            else{break;}    
      }
      cout <<'#';
      
      for(int i=0; i<6; i++)
        cout<<hexi[i];
        cout<<endl;
    }
  }
  return 0;
}
