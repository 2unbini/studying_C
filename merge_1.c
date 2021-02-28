#include <stdio.h>
#define MAX_SIZE 8
int sorted[MAX_SIZE]; //추가적인 공간 필요

// 두개의 인접한 배열 list[left...mid], list[mid+1...right]의 합병 과정
// merge 함수 => 숫자들이 정렬되는 과정
void merge(int list[], int left, int mid, int right)
{
    int i, j, k, l; // i: 정렬된 왼쪽 리스트 인덱스, j: 정렬된 오른쪽 리스트 인덱스, k: 정렬될 리스트 인덱스
    i = left;
    j = mid + 1;
    k = left;

    while (i <= mid && j <= right)
    {
        if (list[i] <= list[j])
            sorted[k++] = list[i++];
        else
            sorted[k++] = list[j++];
    }

    if (i > mid)
    {
        for (l = j; l <= right; l++)
            sorted[k++] = list[l];
    }
    else
    {
        for (l = i; l <= mid; l++)
            sorted[k++] = list[l];
    }

    for (l = left; l <= right; l++)
    {
        list[l] = sorted[l];
    }
}

void merge_sort(int list[], int left, int right)
{
    int mid;

    if (left < right)
    {
        mid = (left + right) / 2;
        merge_sort(list, left, mid);
        merge_sort(list, mid + 1, right);
        merge(list, left, mid, right);
    }
}

int main()
{
    int i;
    int n = MAX_SIZE;
    int list[MAX_SIZE] = {
        0,
    };

    for (i = 0; i < n; i++)
        scanf("%d", &list[i]);

    merge_sort(list, 0, n - 1);

    for (i = 0; i < n; i++)
    {
        printf("%d\n", list[i]);
    }
    return 0;
}
