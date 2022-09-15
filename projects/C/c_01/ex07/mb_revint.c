#include <stdio.h>
#include <unistd.h>

void ft_rev_int_tab(int *tab, int size)
{
    int i;
    int temp;

    i = 0;
    while (i < size / 2) //until counter reaches half of the array
    {
        temp = tab[i];
        tab[i] = tab[size - i - 1];
        tab[size - i - 1] = temp;
        i++;
    }
}




int	main(void)
{
    int arr[] = {555, 444, 333, 222, 111, 0, 1, 2, 3, 4, 5};
    int size = 11;
    int c = 0;

    ft_rev_int_tab(arr, size);
    while (c < size)
    {
        printf("%d, ", arr[c]);
        c++;
    }
    printf("\n");
    return 0;

}