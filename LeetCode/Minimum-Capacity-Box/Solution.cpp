class Solution:
    def minimumIndex(self, capacity: list[int], itemSize: int) -> int:
        result =[]
        test_map = {}
        for i in range(len(capacity)):
            if capacity[i] not in test_map:
                test_map[capacity[i]] = i
        #return test_map
        arr = sorted(test_map.keys())
        #return arr
        
        for key in arr:
            if key >= itemSize:
                return (test_map[key])
            else:
                continue

        return -1
        