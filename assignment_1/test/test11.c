int main() {
    // C-style dynamic memory allocation
    int *arr = (int *) malloc(10 * sizeof(int));
    arr[0] = 1;
    arr[1] = 2;

    int *zeroed = (int *) calloc(5, sizeof(int));

    arr = (int *) realloc(arr, 20 * sizeof(int));

    free(arr);
    free(zeroed);

    // C++-style dynamic memory allocation
    int *single = new int;
    int *dynArr = new int[10];
    *single = 42;
    dynArr[0] = 1;

    delete single;
    delete[] dynArr;

    return 0;
}
