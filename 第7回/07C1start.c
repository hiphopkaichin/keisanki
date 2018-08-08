// start (main function only) for 07C1.c

int main (void)
{
    Matrix a = input_matrix();
    Matrix b = input_matrix();
    Matrix r;

    printf("Matrix A:\n");
    output_matrix(a);
    printf("\nMatrix B:\n");
    output_matrix(b);

    r = add_matrix(a, b);
    printf("\nMatrices added:\n");
    output_matrix(r);

    printf("\nMatrices subtracted:\n");
    output_matrix(subtract_matrix(a, b));

    r = multiply_matrix(a, b);
    printf("\nMatrices multiplied:\n");
    output_matrix(r);

    return 0;
}
