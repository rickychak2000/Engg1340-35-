#include <iostream>
#include "a.h"

using namespace std;

struct customertrolley{
  int order;
  int totalprice;
};

void random50customers(){
  const int custumerno = 50;

  customertrolley customerlist[custumerno];
  int numbergrocery[custumerno];
  srand(time(NULL));
  for (int i=0;i<custumerno;i++){
    numbergrocery[i] = 1+rand()%10;
    customerlist[i].order = i+1;
    customerlist[i].totalprice =0;
  }

  for (int i=0; i<custumerno; i++){
    for (int j=0; j<numbergrocery[i]; j++){
      //int whatgrocery = rand()%12;
      unsigned seed = chrono::steady_clock::now().time_since_epoch().count();
      uniform_int_distribution<int> uniform_dist2(0,11);
      default_random_engine pb1(seed);
      int whatgrocery = uniform_dist2(pb1);
      randomgroceryprice();
      //cout << "whatgrocery= " << whatgrocery <<endl;
      customerlist[i].totalprice+=arr[whatgrocery].random;

    }
  }
  for (int i=0;i<custumerno;i++){
    cout << customerlist[i].order <<" " << customerlist[i].totalprice << endl;
  }
}
