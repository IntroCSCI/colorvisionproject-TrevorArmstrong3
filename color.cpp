#include <sstream>
#include <string>
#include "color.h"
using namespace std;

int color::rgbtogreyscale(int r, int g, int b,int &y){
  y=0.299*(r) + 0.587*(g) + 0.114*(b);
  return y;
}

int color::hextorgb(string hexi, int &x){
  stringstream ss;
  ss << hex << hexi;
  ss >> x;
  return x;
}

string color::check3(string &hexi)
{ 
  stringstream ss;
  string hex1,hex2,hex3;
  if (hexi.size()==3)
  {
    hex1 = hexi.substr (0,1);
    hex2 = hexi.substr (1,1);
    hex3 = hexi.substr (2,1);
    ss<<hex1<<hex1<<hex2<<hex2<<hex3<<hex3;
    hexi=ss.str();
  }
  return hexi;
}

int color::conversion(string hexi, int &y){
  int r,g,b;
  string hex1,hex2,hex3;
  
  check3(hexi);
  hex1 = hexi.substr (0,2);
  hex2 = hexi.substr (2,2);
  hex3 = hexi.substr (4,2);
  hextorgb(hex1,r);
  hextorgb(hex2,g);
  hextorgb(hex3,b);
  rgbtogreyscale(r, g, b, y);
  return y;
}

vector <int>color::addgrey(int y){
  storedgrey.push_back(y);
  return storedgrey;
}

int color::size(){
  storedgrey.size();
  return 0;
}

void color::math(vector<int>&last,int num){
 for(int i=0;i<storedgrey.size();i++)
  {
    for(int x=0;x<storedgrey.size();x++)
    {
      num=storedgrey[i]-storedgrey[x];
      last.push_back(num);
    }
  }
}
