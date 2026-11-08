int compression(int a[], int b[], int n) {
    if (n <= 0) return 0;

    int b_index = 0;
    int current_target = 0;

    if (a[0] == 1) {
        b[b_index++] = 0;
        current_target = 1;
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == current_target) {
            count++;
        } else {
            b[b_index++] = count;
            count = 1;
            current_target = 1 - current_target;
        }
    }

    if (count > 0) {
        b[b_index++] = count;
    }

    return b_index;
}