#include <iostream>
#include <vector>
#include <string>
using namespace std;

void valid_scheduales(int n,vector <string>&cur,string last_activity, int &count) {


   if(cur.size()==n) {
      for(auto it=cur.begin(); it != cur.end() ;++it) {
         cout<< " "<<*it;
      }
      cout<<"\n";
      count++;
      return;
   }
   vector<string> activities= {"Swimming","Running","Football"};
   for(string activity : activities) {
      if(activity != last_activity) {
         cur.push_back(activity);
         valid_scheduales(n,cur,activity,count);
         cur.pop_back();
      }
   }
}

int main() {
int n;
   cin>>n;
   vector<string> cur;
   int count=0;
   valid_scheduales(n,cur,"",count);
   cout<<"CONUT: "<<count;

   return 0;
}