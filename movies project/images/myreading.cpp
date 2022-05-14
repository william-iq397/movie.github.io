#include <iostream>
using namespace std ;
int prime (int c )
  {
  int p = 1 ;
  for (int i = 2 ; i<=c/2 ; i++)
   if  ((c % i )==0 )
  p=0 ;
   return p ;
  
  }
int main ()
  {
    int sd, sp, dn ,pn, num, d, p ;
    sd = 0;
    sp = 0;
    dn = 0;
    pn = 0;

    cout<<"enter the number : "<< endl ;
    cin>>num;

    while (num != 0) {

      d = num % 10;
      dn++;
     // احذف الدالة
      p = prime(d);
      // خلي الشرط d % 2 == 1
      if ( p == 1 ) {
        // odded خلي يطبع 
        cout<< d << " : prime" << endl;
        pn++;
        sp += d;
      }
      else{
        //خلي يطبع even
        cout<< d<< " : not prime " <<endl;
      }

      sd += d;

      num = num / 10;
      
    }
    cout <<pn << " of " << dn <<endl;

    cout <<"sum of prime digits : "<< sp<<endl;

    cout<< "sume of all digits : "<< sd <<endl;


}
    




































    

   // cout<< "enter the number of digits : "<<endl;
   // cin>>a;
   // cout<<"enter the number : "<<endl;
   // cin>>b;




  //   for (int i = 1 ; i<=a ; i++)
  //     {
    
  //       c = dight ( i , b );
  //       d = prime ( c );
  //    if ( d == 1 )
  //         {
  //          cout <<  c <<" = is  prime  " << endl  ;
  //          sum ++ ;
  //          Sum = Sum + c ;
  //         }
  //   else 
  //       cout << c << " = not brime " << endl  ;
  //       max = max + c ;
  //     }
  //   cout << sum << " of "<<a << endl ;
  //   cout << " sum of prime digite = " <<Sum << endl ;
  //   cout << " sum of all digits number = "<< max ;
  // }