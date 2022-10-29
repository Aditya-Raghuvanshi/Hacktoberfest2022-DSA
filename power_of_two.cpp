class Solution {
public:
    bool isPowerOfTwo(int n) {
         if(n<=0)
              return false;
         for(int i=n;i>=1;i=i/2)
         {
             if(i%2==0)
                 continue;
             else if(i!=1)
             {
                 return false;
             }
         }
         return true;
    }
};
