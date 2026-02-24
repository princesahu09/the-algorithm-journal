1class Solution {
2public:
3    bool isValid(string s) {
4
5        stack<char>st;
6        for(auto &i:s)
7        {
8            if(!st.empty()&&(i==')'||i=='}'||i==']'))
9            {
10                char ch=st.top();
11                if(ch=='('&&i==')')
12                {
13                    st.pop();
14                }
15             else   if(ch=='{'&&i=='}')
16                {
17                    st.pop();
18                }
19              else  if(ch=='['&&i==']')
20                {
21                    st.pop();
22                }
23                else
24                {
25                    return false;
26                }
27
28            }
29           else
30           {
31            st.push(i);
32           }
33
34        }
35
36
37        return st.size()==0;
38        
39    }
40};