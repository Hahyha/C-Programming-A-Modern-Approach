int fact(int n) {
    int x = 1;
    
    while (n > 1) {
        x *= n;
        n--;
    }
    return x;
}
