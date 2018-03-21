
#include<string>
#include<queue>


        std::string mirrorString(std::string);

        double myseries( unsigned long n );
        bool bears(int n);
        std::string repeat(std::string s, unsigned int i);
        std::string repeatPow(std::string s, unsigned int i);
        long mult(long j, long k);


        /*
         Write a recursive method that receives a queue of type T. The function pops and OUTPUTS to
         cout the reversed queue.
         */
        template <class T>
        void outRevQueue(std::queue<T> &q) {
            //cannot go undeflow
            if(q.empty())
            {
               return;
            }
            
            T temp=q.front();
            q.pop();
            outRevQueue(q);
            std::cout<<temp;
         
        }

    double futurevalue(double investment, float rate, int years);
    double loanprincipal(double principal, double mpayment,
                         float rate, int months);

        
