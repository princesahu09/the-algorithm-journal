class Solution:
    def countGoodTriplets(self, A: List[int], a: int, b: int, c: int) -> int:
        ## z needs to be compatible w/ both x and y
        # y-b <= z <= y+b
        # x-c <= z <= x+c
        # max(x-c, y-b) <= z <= min(x+c, y+b)

        ret = 0

        zs = sorted(A)
        xs = []

        for j,y in enumerate(A):
            zs.remove(y)
            m = len(zs)

            # [L, R)
            L = bisect_left(zs, y-b)
            R = bisect_right(zs, y+b, L)

            # [l, r)
            l = 0
            r = 0

            for x in xs:
                if abs(x-y) <= a:
                    ltarg = x-c
                    rtarg = x+c

                    # l = bisect_left(zs, x-c)
                    while l < m and zs[l] < ltarg:
                        l += 1
                    
                    # r = bisect_right(zs, x+c)
                    while r < m and zs[r] <= rtarg:
                        r += 1
                    
                    lmax = l if l > L else L
                    rmin = r if r < R else R

                    if rmin > lmax:
                        ret += rmin - lmax
            
            insort(xs, y)
        
        return ret