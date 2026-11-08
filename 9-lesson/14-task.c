int sum_between_ab(int from, int to, int size, int a[]) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        int min_border = (from < to) ? from : to;
        int max_border = (from > to) ? from : to;

        if (a[i] >= min_border && a[i] <= max_border) {
            sum += a[i];
        }
    }

    return sum;
}
