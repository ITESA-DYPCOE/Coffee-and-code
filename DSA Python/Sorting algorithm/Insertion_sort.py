def insertion_sort(array):
    for i in range(len(array)):
        cur = array.pop(i)
        j = i-1
        while j >=0 and array[j] > cur:
            j -= 1
        array.insert(j+1, cur)
    return array     

     
import random
array=[1,100,9,10,30,1,1,1,-15,2,3,4,5,6,7,8,9,10]
random.shuffle(array)            # To shuffle the list

print("List before sorting : ", array)

print("List after sorting : ",insertion_sort(array))  