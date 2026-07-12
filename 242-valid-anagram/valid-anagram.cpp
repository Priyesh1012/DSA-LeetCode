class Solution {
public:
    bool isAnagram(string s, string t) {
    map<string,int> m;
   map<string,int> n;
   bool flag = true;
    int ssize = s.size();
   int tsize = t.size();

   for(int i = 0;i<s.size() or i<t.size();i++){
      if(i<=ssize){
      m[s.substr(i,1)] = m[s.substr(i,1)]+1;
      }
      if(i<=tsize){
      n[t.substr(i,1)] = n[t.substr(i,1)]+1;
      }
   }
   for(int i = 0;i<s.size() or i<t.size();i++){
      if(i<=ssize){
      if(m[s.substr(i,1)] != n[s.substr(i,1)]){
         return false;
      }
      }
      else{
         if(m[t.substr(i,1)] != n[t.substr(i,1)]){
         return false;
      }
      }
      
   }
   return flag;
    }
};