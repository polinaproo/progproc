#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* read_file(char* address, size_t* len) {
    FILE* f_in;
    int* arr = 0;
    f_in = fopen(address, "r");
    if (f_in != 0)
    {
        fscanf_s(f_in, "%d", len);
        size_t i = 0;
        arr = (int*)calloc(*len, sizeof(int));
        while (i < *len)
        {
            fscanf_s(f_in, "%d", &arr[i]);
            i++;
        }
        fclose(f_in);
    }
    return arr;
}

void sortik(int* arr, int len)
{
    int i, j, min, ind;
    for (i = 0; i < len; i++)
    {
        min = 999;
        for (j = i; j < len; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                ind = j;
            }
        }
        arr[ind] = arr[i];
        arr[i] = min;
    }
}

void qsortRecursive(int* mas, int size) {
    int i = 0;
    int j = size - 1;
    int mid = mas[size / 2];
    do {
        while (mas[i] < mid) {
            i++;
        }
        while (mas[j] > mid) {
            j--;
        }
        if (i <= j) {
            int tmp = mas[i];
            mas[i] = mas[j];
            mas[j] = tmp;
            i++;
            j--;
        }
    } while (i <= j);
    if (j > 0) {
        qsortRecursive(mas, j + 1);
    }
    if (i < size) {
        qsortRecursive(&mas[i], size - i);
    }
}

int main() {
    char file_in_path[] = "sortik.txt";
    int* arr;
    size_t len;
    size_t i = 0;
    char c;
    arr = read_file(file_in_path, &len);
    if (arr == 0)
    {
        printf("\nCouldn't read file. Closing...");
        return 0;
    }
    printf("\nArray from file: \n");
    for (i = 0; i < len; i++) printf("%d ", arr[i]);
    printf("\nSorted array:\n");
    sortik(arr, len);
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
