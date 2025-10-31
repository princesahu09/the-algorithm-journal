class Solution {
public:
    string add(string s1, string s2) {
        if(s1==""||s2=="")return s1+s2;
        int n1 = s1.size()-1;
        int n2 = s2.size()-1;
        stack<char> number;
        string ans = "";
        int i = n1;
        int j = n2;
        int carry = 0;
        while (i >= 0 || j >= 0) {
           
            if (i >= 0 && j >= 0) {
                int sum = (s1[i] - '0') + (s2[j] - '0') + carry;
                if (sum > 9) {
                    carry = sum / 10;
                } else {
                    carry = 0;
                }
                number.push((sum % 10 + '0'));
                i--;
                j--;

            } else if (i >= 0) {
                int sum = (s1[i] - '0') + carry;
                if (sum > 9) {
                    carry = sum / 10;
                } else {
                    carry = 0;
                }

                number.push(sum % 10 + '0');
                i--;

            } else if (j >= 0) {
                int sum = (s2[j] - '0') + carry;
                if (sum > 9) {
                    carry = sum / 10;
                } else {
                    carry = 0;
                }


                number.push(sum %10 + '0');
                j--;
            }
            
        }
        if(carry>0)
      {  number.push(carry+'0');}
        while (!number.empty()) {
            char top = number.top();
            number.pop();
            ans += top;
        }
        return ans;
    }
    string multiplication(char s1,string s2)
    {
        if(s1=='1')return s2;
        else if(s1=='0')return "0";
        stack<char>number;
        string ans="";
        int i=s2.size()-1   ;
        int carry=0;



        while(i>=0)
        {
            int product=(s2[i]-'0')*(s1-'0')+carry;
            if(product>9)
            {
                carry=product/10;
            }
            else
            {
                carry=0;
            }
            number.push(product%10+'0');
            i--;
            
        }
        if(carry>0)
       { number.push(carry+'0');}
        while(!number.empty())
        {
            char top=number.top();
            number.pop();
            ans+=top;
        }

        return ans;
    }
    string multiply(string num1, string num2) {
        if(num1=="0"||num2=="0")return "0";
        

        string ans="";
        int n1=num1.size()-1;
       int zero=0;
       
        int i=n1;
        while(i>=0)
        {
           string curr=multiplication(num1[i],num2);
           curr.append(zero,'0');
           zero++;
            ans=add(curr,ans);

           
            i--;




        }
        return ans;



    }
};