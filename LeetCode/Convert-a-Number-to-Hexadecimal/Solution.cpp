    char[] hexDigits = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    StringBuilder sb = new StringBuilder();
    
    while (num != 0) {
        int digit = num & 0xf;  // get the last 4 bits of num
        sb.append(hexDigits[digit]);
        num >>>= 4;  // shift num right by 4 bits
    }
    
    String hexString = sb.reverse().toString();
    return hexString.startsWith("0") ? hexString.substring(1) : hexString;
}