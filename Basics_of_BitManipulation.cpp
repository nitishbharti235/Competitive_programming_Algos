       // Bit- Manipulation
        
        //https://www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/tutorial/
       
      1. how to check power of 2?
       
       bool ispowerof2(int x)
       {
        if(x==0)return true;
        
        else                    //x&x-1 -> flip all bits from rightmost 1
        {
         return !(x&(x-1)==0)
        }
        
       }
       
       2.count number of setbits in O(k) operation :: k=total number of 1's
       
       int totalSetbits(int n)
       {
        int cnt=0;
        while(n)
        {
        n=n&(n-1);
        cnt++;
        }
        return cnt;
       }
       
       3. check ith bit has set bit or not
       
       bool chk(int n)
       {
       if(n&& (1<<i)) //multiplying with 2^i
       return true;
       
       return false;
       }
       
       
       4. x ^ ( x & (x-1)) : Returns the rightmost 1 in binary representation of x.
       x = 10 = (1010)2 ` x & (x-1) = (1010)2 & (1001)2 = (1000)2
       x ^ (x & (x-1)) = (1010)2 ^ (1000)2 = (0010)2


       5. x & (-x) : Returns the rightmost 1 in binary representation of x
       
       
       6. x| (1<<i) : return x with ith position sit bit
       
      7. x & !(1<<i) : unset the ith bit
      
      
      
      
                                            bit-masking
                                            https://www.hackerearth.com/practice/algorithms/dynamic-programming/bit-masking/tutorial/
      
      
      
       
