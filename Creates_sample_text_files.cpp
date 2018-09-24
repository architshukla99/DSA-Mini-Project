#include<bits/stdc++.h>
using namespace std;

void create_file(){
  ofstream obj;
  obj.open("testfile.txt");
  string s="make address all 3d our over remove internet order mail receive will people report addresses free business email you credit your font 000 money hp hpl george 650 lab labs telnet 857 data 415 85 technology 1999 parts pm direct cs meeting original project re edu table conference ; ( [  ! $ # make address all 3d our over remove internet order mail receive will people report addresses free business email you credit your font 000 money hp hpl george 650 lab make address all 3d our over remove internet order mail receive will people report addresses free business email you credit your font 000 money hp hpl george 650 lab";
  obj<<s;
  obj.close();
}

void read_file(){
  ifstream obj;
  map<string,int>m;
  obj.open("testfile.txt");
  string s;
  while(!obj.eof()){
    obj>>s;
    m[s]++;
  }
ofstream o;
o.open("temp.txt");

for(auto i=m.begin();i!=m.end();i++){
  o<<i->second;
  char ch=',';
  o<<ch;
}
s="3.756,61,278";
o<<s;
o.close();
obj.close();
}
void not_spam(){
ofstream  obj;
obj.open("t.txt") ;
int i=0;
char ch='0';
obj<<ch;

while(i<56){
 string s=",0";
  obj<<s;
  i++;
}
obj.close();
}


int main(){
 //create_file();
//read_file();
not_spam();
//c_file();
return 0;
}
