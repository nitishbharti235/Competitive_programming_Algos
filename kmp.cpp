
    LPS calculation
    
    void cal()
    {
    
     int m=pat.length();
      int lps[m];
     int len=0;
     for(int i=1;i<m;)
     {
      if(pat[i]==pat[len])
      {
       len++;
       lps[i++]=len;
      }
      else
      {
       if(len==0)
       {
       lps[i]=0;
       i++;
       }
       else
       {
       len=lps[len-1];
       }
      }
     }
    
    }
    
    
                                                           KMP-ALGORITHM
                                                           
              void kmp()
              {
                int i=0,j=0;
                while(i<N)
                {
                 if(txt[i]==pat[j])
                 {
                  i++;j++;
                 }
                
                
                if(j==M)
                {
                 cout<<"pat found @"<<i-j+1;
                }
                
                else i(i<N && pat[j]!=txt[i])
                {
                 if(j!=0)
                 j=lps[j-1];
                 else
                 i++;
                }
               }
              }
               
               
               
               
               
               
               
               
               
               
               
               
               
               
               
               
               
               
               
               
               
               
