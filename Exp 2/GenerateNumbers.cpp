#include <bits/stdc++.h>
using namespace std;

int main()
{
   ofstream outdata; // outdata is like cin 
   outdata.open("numbers.txt"); // opens the file and clears it initially

   if( !outdata ) { // file couldn't be opened
      cerr << "Error: file could not be opened" << endl;
      exit(1);
   }

   for (int i=0; i<100000; ++i){
      outdata << rand() << " ";
   }
      
   outdata.close();
 
   return 0;
}