int array_min(int integers[], int length) {
    if (length < 1) {
        return 0;
    }
    int min = integers[0];
    for (int i = 1; i < length; i++) {
        if (integers[i] < min) {
            min = integers[i];
        }
    }
    return min;
}

int array_max(int integers[], int length){
    if (length < 1) {
        return 0;
    }
    int max = integers[0];
    for (int i = 0; i < length; i++) {
        if (integers[i] > max) {
            max = integers[i];
        }
    }
    return max;
}

int sum_min_max(int integers[], int length) {
    if (length < 1) {
        return 0;
    }
    int sum = array_max(integers, length) + array_min(integers, length);
    return sum;
}