
# a--> list 
def check_sort(a,size):
    # If it was the first element return true
    if size==0:         
        return True
    elif a[size-1]>a[size]:
        return False
    return check_sort(a,size-1)

a=[1,2,3,4,5,6,7,9,8,10]
print(check_sort(a,len(a)-1))
