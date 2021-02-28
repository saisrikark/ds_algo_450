int find_number_set_bits(int num) {
    int bits_set;
    
    bits_set = 0;
    
    while(num) {
        if (num & 1) {
            ++bits_set;
        }
        num >>= 1;
    }

    return bits_set;
}