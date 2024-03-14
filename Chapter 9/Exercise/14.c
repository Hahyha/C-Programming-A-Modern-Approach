bool has_zero(int a[], int n) {
    int i;
    
    for (i = 0; i < n; i++) {
        if (a[i] == 0) return true;
        else return false;
    }
}
This only examines whether the first element in a is zero or not.

bool has_zero(int a[], int n) {
    int i = 0;
    
    for (i = 0; i < n; i++) if (a[i] == 0) return true;
    return false;
}
It can be modified like this.
