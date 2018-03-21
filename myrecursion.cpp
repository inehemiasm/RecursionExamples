#include<string>
#include<queue>
#include<iostream>
#include "myrecursion.h"
using namespace std;

/*
 Write a recursive method that takes a string as a parameter. It returns a string composed
 of itself, and a mirror image
 of itself(reversed), seperated by a hyphen. Complete this function without the aid of a
 helper function and without the usage of the
 string classes reverse method.
 */
std::string mirrorString(std::string word){
    
    
  
    if (word.length() == 0)
    {
        return  "-";
    }
    else
     {
     return word.at(0) + mirrorString(word.substr(1,word.length())) + word.at(0);
         
     }
}

    

/*
 Write a recursive function to RETURN the nth term from the following SERIES
 { 0, 0.5, 1.5, 3, 5, 7.5 }
 That is, the 0th term is 0, the 1st term is 0.5.
 HINT: Only the 0th term is required to handle the base case. The difference between each
 term depends on the previous
 RULE EXCEPTION: You may use multiplication operator on the recursive step for this one
 */
double Utility(unsigned long n ){
    if(n==0)
        return 0;
    else
        return (n + Utility(n-1)); }
double myseries( unsigned long n ){
    return (Utility(n)/2); }
/*
 A Teddy Bear Picnic
 This question involves a game with teddy bears. The game starts when I give you some bears.
 You can then give back some bears, but you must follow these rules (where n is the number
 of bears that you have):
 If n is even, then you may give back exactly n/2 bears.Hint: To test whether n is even,
 use the expression ((n % 2) == 0).
 If n is divisible by 3 or 4, then you may multiply the last two digits of n and give
 back this many bears. (By the way, the last digit of n is n%10, and the next-to-last digit
 is ((n%100)/10).
 If n is divisible by 5, then you may give back exactly 42 bears.
 The goal of the game is to end up with EXACTLY 42 bears.
 For example, suppose that you start with 250 bears. Then you could make these moves:
 --Start with 250 bears.
 --Since 250 is divisible by 5, you may return 42 of the bears, leaving you with 208 bears.
 --Since 208 is even, you may return half of the bears, leaving you with 104 bears.
 --Since 104 is even, you may return half of the bears, leaving you with 52 bears.
 --Since 52 is divisible by 4, you may multiply the last two digits (resulting in 10) and
 return these 10 bears. This leaves you with 42 bears.
 --You have reached the goal!
 Write a recursive function to meet this specification:
 // Postcondition: A true return value means that it is possible to win
 // the bear game by starting with n bears. A false return value means that
 // it is not possible to win the bear game by starting with n bears.
 // Examples:
 // bears(250) is true (as shown above)
 // bears(42) is true
 // bears(84) is true
 // bears(53) is false
 // bears(41) is false
 */
bool bears(int n){
    //base case
    if(n==42)
    return true;
    
    else if(n<42)
        return false;
  
    else
    {
    if(n%2==0)
        {
            return bears(n/2);
        }

    
     else if((n%5)==0){
        
        return (n-42);
    }
    
        
    else if(n%3==0 || n%4==0){
        return (n-((n%10)*((n%100)/10)));
    }

    return false ;
    }
}
/*
 Write a recursive method that takes as parameters a String s and an integer i and
 returns a String that has s repeated i times.
 For example, if the given string is "Go bears! " and the integer is 3 then the
 return value would be "Go bears! Go bears! Go bears! ".
 (Note that if the integer is 0, then the empty string "" should be returned.)
 */
std::string repeat(std::string s, unsigned int i){

    if(i==0){
    return " ";
    }
    else {
        return s + repeat(s, i-1);
    }

}
/*
 Write a recursive method that takes as parameters a String s and an integer i and
 returns a String that has s repeated 2^i times.
 For example, if the given string is "Go bears! " and the integer is 3 then the
 return value would be
 "Go bears! Go bears! Go bears! Go bears! Go bears! Go bears! Go bears! Go bears!".
 Do not use multiplication or exponentiation in your algorithm. Just double the
 length of the string i times.
 */
std::string repeatPow(std::string s, unsigned int i){
    if (i == 0)
        return s;
    else
        return repeatPow(s + s, i-1);
}
/*
 Write and test a method mult with the following specification without using the
 multiplication operator.
 Write a recursive method that performs the multiplication by repeated addition. Make
 your method work for both positive and
 negative integers, as well as zero.
 Start by calling a separate helper method that assumes both parameters are nonnegative.
 Then, in the calling method,
 make an adjustment afterwards for the case when the signs of the two original
 numbers were different.
 PARAMETERS: integers j and k
 RETURN VALUE: the product j*k
 */
long mult(long j, long k){

   
    if((j==0)||(k==0))
        return 0;
    
    if((k>0)&&(j>0)){
        return (k+mult(k,j-1));
    }
    
    else if(k<0||j<0)
    {
      if(k<0&&j>0)
            return (k+mult(k,j-1));
        
      else if(k>0&&j<0)
            return (-k+mult(k,j+1));
        
      else
            return (-k+mult(k,j+1));
    }
    
    
    return 0;
}

/*
 Write a recursive method that takes as parameters an initial investment amount, an
 annual interest rate, and a number of years.
 The method should return the value of the investment after the given number of
 years, assuming that the interest is compounded annually.
 (For example, if the initial investment is 1000 and the interest rate is 10 percent,
 then after one year the investment will be worth 1100,
 after two years 1210, after three years 1331, etc.)
 */
double futurevalue(double investment, float rate, int years){
    if (years == 0)
        return investment;
    else
        return futurevalue(investment * (1 + rate), rate, years-1);

}

/*
 Write a recursive method that takes as parameters an initial loan amount, an annual
 interest rate, a monthly payment, and a number of months.
 The method should return the amount that is still owed after the given number of
 months, assuming that the interest is compounded monthly.
 (That is, each month 1/12 of the annual interest rate is charged and the monthly
 payment is subtracted from the loan amount.)
 */
double loanprincipal(double principal, double mpayment, float rate, int months){
    if (months == 0)
        return principal;
    else
      return loanprincipal(principal * (1 + rate/12) - mpayment, rate, mpayment, months-1);
}
