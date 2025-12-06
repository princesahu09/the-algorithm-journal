1class Solution {
2public:
3
4string  append(string s)
5{
6    int i=s.size();
7    if(i==1)
8    {
9        s="000"+s;
10    }
11    else if(i==2)
12    {
13        s="00"+s;
14    }
15    else if(i==3)
16    {
17        s="0"+s;
18    }
19   
20    
21    return s;
22}
23    int generateKey(int num1, int num2, int num3) {
24        string a=to_string(num1);
25        string b=to_string(num2);
26        string c=to_string(num3);
27        a=append(a);
28        cout<<a<<endl;
29        b=append(b);
30        cout<<b<<endl;
31
32        c=append(c);
33        cout<<c<<endl;
34
35       string ans="";
36
37        for(int i=0;i<4;i++)
38        {
39
40            ans+=min(a[i],min(b[i],c[i]));
41
42        }
43
44        return stoi(ans);
45
46
47
48
49    }
50};