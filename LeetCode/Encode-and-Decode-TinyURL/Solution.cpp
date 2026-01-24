1class Solution {
2public:
3    unordered_map<string, string> mapping;
4
5    // Encodes a URL to a shortened URL.
6    string encode(string longUrl) {
7        static int index=0;
8
9        string shortUrl = "https://tinyurl.com/" + to_string(index);
10        mapping[shortUrl] = longUrl;
11        index++;
12        return shortUrl;
13    }
14
15    // Decodes a shortened URL to its original URL.
16    string decode(string shortUrl) {
17        return mapping[shortUrl];
18    }
19};
20
21// Your Solution object will be instantiated and called as such:
22// Solution solution;
23// solution.decode(solution.encode(url));