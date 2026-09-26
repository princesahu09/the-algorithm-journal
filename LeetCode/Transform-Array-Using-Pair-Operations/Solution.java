1class Solution {
2    public boolean canTransform(int[] source, int[] target) {
3
4        return Arrays.stream(source).asLongStream().sum() == Arrays.stream(target).asLongStream().sum();
5
6    }
7}