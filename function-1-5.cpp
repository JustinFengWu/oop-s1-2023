int count_evens(int number) {

    int evens = 0;

    for (int i = 1; i <= number; i++) {
        if (i % 2 == 0) {
            evens++;
        }
    }

    return evens;
}