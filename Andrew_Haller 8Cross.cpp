#include <iostream>
#include<cmath>
using namespace std;
bool ok(int cross[], int b){
    static int checkList[8][5] = {
  
  {-1},
  {0,-1},
  {1,-1},
  {0,1,2,-1},
  {1,2,3,-1},
  {2,4,-1},
  {0,3,4,-1},
  {3,4,5,6,-1}};
     //Row Test
    for(int i = 0; i < b; i++) {
       if(cross[b] == cross[i]) { 
         return false;
       }
    }
      //Helping Array test (Adj test)
      int c = 0;
      while(checkList[b][c] != -1){
      
      if (abs(cross[b] - cross[checkList[b][c]]) == 1){
        return false;
      }
         c++;
     
      }
    return true;
}

void print(int cross[],int cap){

  static int count = 0;

cout<<"Solution number: "<< ++count<<endl;

  cout << "  " << cross[1] <<" "<< cross[2]<< endl;
	cout << cross[0] << " "<<cross[3] <<" "<<cross[4] << " "<< cross[5]<<endl;
	cout << "  " << cross[6] <<" "<< cross[7] << endl;
    
  return;

}

int main(){
  int q[8] = {};
  int c = 0;
 
  q[0] = 1;
 
  while (c>=0){
    c++;
   
    if (c==8){
     
      print(q,c);
     
      c--;
     
      if (c==-1) {return 0;}
    }
    else {
      q[c]=0;
    }
    
    while (c>=0){
      q[c]++;
      
      if (q[c]==9){
        c--; }
        
         else if (c==-1) {return 0;}
      
      else {
        
          if  (ok(q,c)) {
        
          break;
            }
          }
        }
      }
    
    return 0;
  }

  
