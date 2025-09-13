bool isPowerOfTwo(int n) {
    // Powers of two are always positive, so discard non-positive numbers
    if (n <= 0) {
        return false;
    }

    // Keep dividing n by 2 while it is divisible by 2
    while (n % 2 == 0) {
        n /= 2;   // Divide by 2 (shrink n towards 1 if it's a power of two)
    }

    // After the loop, if n becomes 1 → it was a power of two
    // Otherwise, it had other factors
    return n == 1;
}
