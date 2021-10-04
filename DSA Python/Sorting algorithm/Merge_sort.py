"""Merge sort work on the principle of divide and conquer algorithm"""

def merge_sort(array):

    #If the array contains only one element return it as it is
    if len(array)<=1:
        return array
    
    #Dividing the array
    mid=len(array)//2
    left = array[:mid]
    right=array[mid:]
    left_sorted,right_sorted=merge_sort(left),merge_sort(right)
    sorted_list=merge(left_sorted,right_sorted)
    return sorted_list

def merge(list1,list2):
    merged=[]
    i,j=0,0     # Initializing the pointer for left and right array

    while i<len(list1) and j<len(list2):
        # here is the main part
        # here only the comparison happens
        if list1[i]<=list2[j]:
            merged.append(list1[i])
            i+=1
        else:
            merged.append(list2[j])
            j+=1
    # elements remains in any one of the list and definitely they are in sorted order
    # So taking the remaining elements as a seperate array
    list1_remaining=list1[i:]
    list2_remaining=list2[j:]

    return merged+list1_remaining+list2_remaining # merging all of them as a list and return it.



import random
array=[1,100,9,10,30,1,1,1,-15,2,3,4,5,6,7,8,9,10]
random.shuffle(array)            # To shuffle the list

print("List before sorting : ", array)

print("List after sorting : ",merge_sort(array))

