#include <iostream>
using namespace std;

#include "monster.h"
#include "thanos.h"

int main(int argc, char* argv[]) {

  int n;
  cout<<"How many monsters?";
  cin>>n;

    monster *m=new monster[n]; //make sure they have hp
    int i;
  for(i=0;i<n;i++)
      m[i].display();// If the hp=0, you do not display"" -->you will see only n/2 monster
  
  m->Attack(m[1]);
  m->Attack(m[2]);
  m[1].Attack(m[0]);
 
  for(i=0;i<n;i++){
       m[i].heal();
      m[i].display();// If the hp=0, you do not display"" -->you will see only n/2 monster
  }
  /* Add some story*/
   Thanos T;
  ++T;
  ++T;
  T.snap_finger(m,n);
  ++T;
  ++T;
  T.snap_finger(m,n);
    ++T;
  ++T;
  T.snap_finger(m,n);//Clear hp n/2(half) of the monster. 

 
  for(i=0;i<n;i++)
      m[i].display();// If the hp=0, you do not display"" -->you will see only n/2 monster
  

  delete [] m;
  }
//call des for T
  
  
