1class Bank {
2public:
3vector<long long>arr;
4    Bank(vector<long long>& balance) {
5
6        arr=balance;
7        
8    }
9
10    bool validAccount(int acc)
11    {
12        return acc>=1&&acc<=arr.size();
13    }
14    
15    bool transfer(int account1, int account2, long long money) {
16
17        if(!validAccount(account1)||!validAccount(account2))return false;
18
19        if(arr[account1-1]>=money)
20        {
21            arr[account2-1]+=money;
22            arr[account1-1]-=money;
23            return true;
24        }
25        return false;
26        
27    }
28    
29    bool deposit(int account, long long money) {
30
31        if(money<0)return false;
32        if(!validAccount(account))return false; 
33        arr[account-1]+=money;
34        return true;
35        
36    }
37    
38    bool withdraw(int account, long long money) {
39        if(money<0)return false;
40        if(!validAccount(account))return false;
41        if(arr[account-1]<money)return false;
42        arr[account-1]-=money;
43        return true;
44        
45    }
46};
47
48/**
49 * Your Bank object will be instantiated and called as such:
50 * Bank* obj = new Bank(balance);
51 * bool param_1 = obj->transfer(account1,account2,money);
52 * bool param_2 = obj->deposit(account,money);
53 * bool param_3 = obj->withdraw(account,money);
54 */