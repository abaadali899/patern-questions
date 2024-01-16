1_

#include <iostream>
using namespace std; int main() {
  int n=5;
  for(int row=1; row<=n; row++){
        //for every row run the coulumn
      for(int col=1; col<=row; col++){
           cout<<"*";
       }
       cout<<endl;
   }

    return 0;
}
///
*
**
***
****
*****
2_
#include <iostream>
using namespace std; int main() {
  int n=5;
  for(int row=1; row<=n; row++){
        //for every row run the coulumn
      for(int col=1; col<=n; col++){
           cout<<"*";
       }
       cout<<endl;
   }

    return 0;
}
 /////
****
****
****
****
****
3_
#include <iostream>
using namespace std; int main() {
  int n=5;
  for(int row=n; row>=1; row--){
        //for every row run the coulumn
      for(int col=1; col<=row; col++){
           cout<<"*";
       }
       cout<<endl;
   }

    return 0;
}
////
*****
****
***
**
*