class Solution:
    def pickGifts(self, gifts: List[int], k: int) -> int:
        gifts = [-v for v in gifts]
        heapify(gifts)
        for _ in range(k):
            heapreplace(gifts, -isqrt(-gifts[0]))
        return -sum(gifts)