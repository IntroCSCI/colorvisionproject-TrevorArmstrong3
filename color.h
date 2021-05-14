#ifndef color_H
#define color_H
#include <string>
#include <vector>
#include <sstream>
using namespace std;
using std::string;
using std::vector;

class color
{
  private: 
    vector <int> storedgrey;
  public: 
    int rgbtogreyscale(int r, int g, int b,int &y);
    int hextorgb(string hexi, int &x);
    string check3(string &hexi);
    int conversion(string hexi, int &y);
    vector <int>addgrey(int y);
    
    int size();
    void math(vector<int>&x,int y);
};

#endif


