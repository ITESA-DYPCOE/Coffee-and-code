def bubble_sort(list):

    # Creating a copy of the list -->not necessary
    list_copy=list
    
    # Repeat the process till n-1(length of the list - 1)  times
    for _ in range(len(list_copy)-1):

        # Iterate over array (except the last element) 
        """
        we not iterate the last element 
        because we are checking the present element and next element in the below loop.
        So it may cover up the last element also.
        """

        for i in range(len(list_copy)-1):

            # compare the present element with next element
            if list_copy[i]>list_copy[i+1]:
                # if it is greater ,then swap the elements
                list_copy[i],list_copy[i+1]=list_copy[i+1],list_copy[i]

    return list_copy




import random
array=[1,100,9,10,30,1,1,1,-15,2,3,4,5,6,7,8,9,10]
random.shuffle(array)            # To shuffle the list

print("List before sorting : ", array)

print("List after sorting : ",bubble_sort(array))
