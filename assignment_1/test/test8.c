int main() {
    int sum = 0;

    // for loop
    for (int i = 0; i < 10; i++) {
        sum = sum + i;
    }

    // while loop already covered elsewhere, do-while here
    int n = 5;
    do {
        n--;
    } while (n > 0);

    // switch-case-default
    int grade = 2;
    switch (grade) {
        case 1:
            sum = sum + 100;
            break;
        case 2:
            sum = sum + 50;
            break;
        default:
            sum = 0;
            break;
    }

    // arrays: integer and char
    int numbers[5] = {1, 2, 3, 4, 5};
    char name[20] = "hello";
    char grades[3] = {'A', 'B', 'C'};

    // multi-dimensional array (bonus, not required but harmless)
    int matrix[3][3];
    matrix[0][0] = 1;

    return sum;
}
