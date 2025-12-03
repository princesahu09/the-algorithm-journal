public char repeatedCharacter(String s) {
    int vector = 0;

    for (final char c : s.toCharArray()) {
        if ((vector & (1 << (c - 'a'))) > 0) {
            return c;
        }

        vector = vector | (1 << (c - 'a'));
    }

    return ' ';
}