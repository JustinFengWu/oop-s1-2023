double arrayMax(double* ptr, int size) {
    double maxVal = ptr[0];
    for (int i = 1; i < size; ++i) {
        if (ptr[i] > maxVal) {
        maxVal = ptr[i];
        }
    }
    return maxVal;
}