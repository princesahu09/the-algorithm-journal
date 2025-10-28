class Solution {
    public static String reversePrefix(String word, char ch) {
        if (word.indexOf(ch) == -1) return word;
        Map<Integer, Character> map = new LinkedHashMap<>();
        StringBuilder sb = new StringBuilder();
        int i = 0;
        for (; i < word.length(); i++) {
            char c = word.charAt(i);
            map.put(i, c);
            if (c == ch) {
                for (Character character : map.values())
                    sb.append(character);
                sb.reverse();
                map.clear();
                break;
            }
        }
        if (i < word.length() - 1) {
            Map<Integer, Character> remainingMap = new LinkedHashMap<>();
            for (int j = i + 1; j < word.length(); j++) {
                remainingMap.put(j, word.charAt(j));
            }
            for (Character character : remainingMap.values()) {
                sb.append(character);
            }
        }
        return sb.toString();
    }
}