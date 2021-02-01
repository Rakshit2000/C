"""
Time complexity: O(m+n)
"""

def merge(a, low, mid, high):
    left = a[low:mid+1]
    right = a[mid+1:high+1]
    i, j = 0, 0
    k = low
    l1 = len(left)
    l2 = len(right)
    while i < l1 and j < l2:
        if left[i] <= right[j]:
            a[k] = left[i]
            i += 1
            k += 1
        else:
            a[k] = right[j]
            j += 1
            k += 1
    while i < l1:
        a[k] = left[i]
        i += 1
        k += 1
    while j < l2:
        a[k] = right[j]
        j += 1
        k += 1


def mergeSort(arr, l, r):
    if r > l:
        m = (r+l)//2
        mergeSort(arr, l, m)
        mergeSort(arr, m+1, r)
        merge(arr, l, m, r)


arr = list(map(int, input().split()))
l, h = map(int, input().split())
mergeSort(arr, l, h)
print(arr)

