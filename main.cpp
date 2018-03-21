//Recursion Lab

#include <iostream>
#include <string>
#include <queue>
#include "myrecursion.h"
using namespace std;

int main() {
    
    string s="Indiana Jones";
    cout <<  mirrorString(s) << endl;
    
    queue<int> fq;
    fq.push(1);
    fq.push(2);
    fq.push(4);
    fq.push(8);

    
    outRevQueue(fq);
    cout << endl;
  
    
    cout << "{ " << myseries( 0  );
    for ( int i = 1 ; i < 10 ; ++i )
        cout << ", " << myseries( i );
    cout << " }" << endl;
    
     cout << repeat("DS!! ",3) << endl;

    
    cout << repeatPow("DS!! ",0) << endl;
    cout << repeatPow("DS!! ",1) << endl;
    cout << repeatPow("DS!! ",2) << endl;
    cout << repeatPow("DS!! ",3) << endl;
    
    
    cout << mult(1,0) << endl;
    cout << mult(1,1) << endl;
    cout << mult(2,4) << endl;
    cout << mult(2,-4) << endl;
    cout << mult(-2,4) << endl;
    cout << mult(-2,-4) << endl;

    /* //cout << futurevalue(1000, .10, 3) << endl;
    //cout << loanprincipal(1000, 10, .10, 15) << endl;
    
    cout << "{ " << myseries( 0  );
    for ( int i = 1 ; i < 10 ; ++i )
        cout << ", " << myseries( i );
    cout << " }" << endl;
    
    cout << repeat("DS!! ",3) << endl;
    cout << repeatPow("DS!! ",0) << endl;
    cout << repeatPow("DS!! ",1) << endl;
    cout << repeatPow("DS!! ",2) << endl;
    cout << repeatPow("DS!! ",3) << endl;
     cout << mult(1,0) << endl;
     cout << mult(1,1) << endl;
     cout << mult(2,4) << endl;
     cout << mult(2,-4) << endl;
     cout << mult(-2,4) << endl;
     cout << mult(-2,-4) << endl;
      */
    cout << "bears(250) is " << ( bears(250) ? "true" : "false" ) << endl;
    cout << "bears(42) is " << ( bears(42) ? "true" : "false" ) << endl;
    cout << "bears(84) is " << ( bears(84) ? "true" : "false" ) << endl;
    cout << "bears(53) is " << ( bears(53) ? "true" : "false" ) << endl;
    cout << "bears(41) is " << ( bears(41) ? "true" : "false" ) << endl;
    
    cout << futurevalue(1000, .10, 3) << endl;
    cout << loanprincipal(1000, 10, .10, 15) << endl;
   
 
    return 0;
}
