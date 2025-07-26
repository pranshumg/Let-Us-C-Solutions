int checkbits(unsigned int x, int p, int n) {
    int mask = ((1 << n) - 1) << (p - n + 1);
    return (x & mask) == mask;
}
