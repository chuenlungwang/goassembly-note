long shift_left4_rightn(long x, long n) {
    x <<= 4;
    x >>= n;
    return x;
}

long arith(long x, long y, long z) {
    long t1 = x ^ y;
    long t2 = z * 48;
    long t3 = t1 & 0x0F0F0F0F;
    long t4 = t2 - t3;
    return t4;
}

long arith1(long x, long y, long z) {
    x       = x ^ y;
    long t2 = z * 48;
    long t3 = x & 0x0F0F0F0F;
    t2      = t2 - t3;
    return t2;
}

long arith2(long x, long y, long z) {
    long t1 = x | y;
    long t2 = t1 >> 3;
    long t3 = ~t2;
    long t4 = z - t3;
    return t4;
}
