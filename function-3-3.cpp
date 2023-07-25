double weighted_average(int array[], int n) {

    double sum = 0;

    for (int i = 0; i < n; i++) {
        double counter = 0;
        for (int j = 0; j < n; j++) {
            if (array[j] == array[i]) {
                counter++;
            }
        }
        sum += (array[i] * counter / n);
    }

    return sum;
}