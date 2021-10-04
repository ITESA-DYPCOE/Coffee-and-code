#  Time complexity of Binary search is------>  O(logn)
#  The prerequisite to use this algo was the list or array need to be sorted 

def binary_search(array, target, low=0, high=None):
    if high==None:
        high=len(array)-1

    # Check base case
    if high >= low:
        mid = (high + low) // 2
 
        # If element is present at the middle itself
        if array[mid] == target:
            # If the target value present multiple times, 
            # we have to return the first occurance of the target value in the list 
            if mid-1 >= 0 and array[mid-1] == target:
                return binary_search(array, target, low, mid-1)
            else:
                return mid
 
        # If element is smaller than mid value
        elif array[mid] > target:
            # Target value only present at left side so pass the left subarray
            return binary_search(array, target, low, mid - 1)
 
        # Else the element can only be present in right subarray
        else:
            return binary_search(array, target, mid + 1, high)
 
    else:
        # Element is not present in the array
        return -1
 

array=[0,0,0,0,1,2,2,2,2,2,2,4,5,6,7,8,9,17]
target=2
position=binary_search(array,target)
if position!=-1:
    print("the element is found at ",position)
else:
    print("The element is not found")