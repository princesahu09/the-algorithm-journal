class Solution {
public:
    string concatHex36(int n) {
        

       
      string hexa="";
      string tri="";
        int s=n*n;
        int c=n*n*n;
         if (s == 0) hexa = "0";
        while(s>0)
        {
            int r=s%16;
            if(r<=9)
            {
               hexa+=(r+'0');

            }
            else
            {
              
              hexa+=('A'+(r-10));
            }
            s/=16;


        }
         if (c == 0) tri = "0";
        while(c>0)
        {

            int r=c%36;
            if(r<=9)
            {
               tri+=(r+'0');
            }
            else
            {
               tri+=('A'+(r-10));
            }
            c/=36;
        }
        reverse(hexa.begin(),hexa.end());
        reverse(tri.begin(),tri.end());


        return (hexa+tri);
        
        
    }
};