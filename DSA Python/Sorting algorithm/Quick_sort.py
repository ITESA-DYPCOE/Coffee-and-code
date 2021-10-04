"""working of quick sort in short:
            1. we have to assume any random random value in array as pivot 
            2. Then we have to move the elements higher than pivot to right 
            and the elements lower than the pivot to the left.
            3. Take the take the elements left to the puvot as a array and goto step1
               and vice versa for right side elements also.
            4. loop the above state ments till it reaches single element array.         """

def quick_sort(array, start=0, end=None):
    if end is None:
        end = len(array) - 1 
    
    if start < end:
        pivot = partition(array, start, end)        # assigning pivot 
        quick_sort(array, start, pivot-1)
        quick_sort(array, pivot+1, end)

    return array


def partition(array, start=0, end=None):

    # pivot can be any random value. it's our choice.
    # so i took the last element as pivot 
    # beacuse working with last its quite easier
    if end is None:
        end = len(array) - 1
    
    # Initialize right and left pointers
    l, r = start, end-1
    
    # Iterate while they're apart
    """ In the below loop the elements smaller than pivot are moved to left of pivot 
        and the elements greater than the pivot are moved to right side
        and place the pivot value between them                                        """

    while r > l:
        # r > l ---> means if both the pointer are equal(i.e., are at same position ), it exits the loop.

        # Increment left pointer if number is less or equal to pivot
        if array[l] <= array[end]:
            l += 1
        
        # Decrement right pointer if number is greater than pivot
        elif array[r] > array[end]:
            r -= 1
        
        # Two out-of-place elements found, swap them
        else:
            array[l], array[r] = array[r], array[l]
    # Place the pivot between the two parts
    if array[l] > array[end]:
        array[l], array[end] = array[end], array[l]
        return l
    else:
        return end

import random
array=[1,100,9,10,30,1,1,1,-15,2,3,4,5,6,7,8,9,10]
random.shuffle(array)            # To shuffle the list

print("List before sorting : ", array)

print("List after sorting : ",quick_sort(array))