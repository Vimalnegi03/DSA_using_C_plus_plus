#include<bits/stdc++.h>
using namespace std;
    class Hashing{
        public:
      vector<list<int>> hashTable; // create a
      int buckets;
      Hashing(int size)
      {
        buckets=size;
        hashTable.resize(size);
      }
      int hashValue(int key)
      {
        return key%buckets;

      }
      void add(int key)
      {
        int indx=hashValue(key);
        hashTable[indx].push_back(key);

      }
      list<int>::iterator search(int  key)
      {
        int indx=hashValue(key);
        return find(hashTable[indx].begin(),hashTable[indx].end(),key);
        
      }
      void delet(int key)
      {
       int indx=hashValue(key);
        if(search(key)!=hashTable[indx].end())
        {
       hashTable[indx];
       hashTable[indx].erase(search(key));
       cout<<"sucessfully deleted"; 
        }
      else
      cout<<"key not present";
      }
    };
int main()
{
    Hashing h(10);
    h.add(45);
    h.add(60);
    h.add(78);
    h.delete(45);

}
