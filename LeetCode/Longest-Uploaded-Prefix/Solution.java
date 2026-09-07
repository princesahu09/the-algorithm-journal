1class LUPrefix {
2
3    boolean[] uploaded;
4    int prefix = 0;
5
6    public LUPrefix(int n) {
7
8        uploaded = new boolean[n + 1];
9
10    }
11
12    public void upload(int video) {
13        uploaded[video] = true;
14        while (prefix + 1 < uploaded.length && uploaded[prefix + 1]) {
15            prefix++;
16        }
17
18    }
19
20    public int longest() {
21
22        return prefix;
23
24    }
25}
26
27/**
28 * Your LUPrefix object will be instantiated and called as such:
29 * LUPrefix obj = new LUPrefix(n);
30 * obj.upload(video);
31 * int param_2 = obj.longest();
32 */