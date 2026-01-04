    for (int n : nums) {
        int count = 0, sumOfDivisors = 0;
        
        for (int i = 1; i*i <= n; i++) {
            if (i*i == n || count > 4)
                break;

            if (n % i == 0) {
                count += 2;
                sumOfDivisors += (i + n/i);
            }
        }

        if (count == 4)
            sumOfFourDivisors += sumOfDivisors;
    }

    return sumOfFourDivisors;
}