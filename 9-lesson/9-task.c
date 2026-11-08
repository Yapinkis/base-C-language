void swap_negmax_last(int size, int a[]) {
    if (size <= 1) return;

    int max_neg_index = -1;
    
    for (int i = 0; i < size; i++) {
        if (a[i] < 0) {
            if (max_neg_index == -1 || a[i] > a[max_neg_index]) {
                max_neg_index = i;
            }
        }
    }

    if (max_neg_index != -1) {
        int last_index = size - 1;

        int temp = a[max_neg_index];
        a[max_neg_index] = a[last_index];
        a[last_index] = temp;
    }
}
