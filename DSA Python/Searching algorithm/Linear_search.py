# Time complexity of linear search is --->  O(n)

# It is the simplest algorithm and also there is no any prerequisite for this algo
# searching the target one by one till end

def Linear_search(array, search):
    position = 0
    while position < len(array):
        if array[position] == search:
            return position
        position += 1
    return -1

array=[20,99,1,2,3,4,5,6,7,8,9,10]
search=3
position=Linear_search(array,search)
if position!=-1:
    print("the element is found at ",position)
else:
    print("The element is not found")