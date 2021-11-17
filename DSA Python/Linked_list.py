class Node():
    def __init__(self, a_number):
        self.data = a_number
        self.next = None


class LinkedList():
    def __init__(self):
        self.head = None
    
    # To add elements
    def append(self, value):
        if self.head is None:
            self.head = Node(value)
        else:
            current_node = self.head
            while current_node.next is not None:
                current_node = current_node.next
            current_node.next = Node(value)

    # To print all the elements
    def show_elements(self):
        current = self.head
        while current is not None:
            print(current.data)
            current = current.next

    # To print the length of whole list
    def length(self):
        result = 0
        current = self.head
        while current is not None:
            result += 1
            current = current.next
        return result

    # To print the particular elements
    def get_element(self, position):
        i = 0
        current = self.head
        while current is not None:
            if i == position:
                return current.data
            current = current.next
            i += 1
        return None

    # To reverse the list
    def reverse(l):
        if l.head is None:
            return
        current_node = l.head
        prev_node = None
        while current_node is not None:
            # Track the next node
            next_node = current_node.next
            # Modify the current node
            current_node.next = prev_node
            # Update prev and current
            prev_node = current_node
            current_node = next_node
        l.head = prev_node


list2 = LinkedList()
list2.append(2)
list2.append(3)
list2.append(5)
list2.append(9)

print('element at position 1 ->',list2.get_element(1))
print('element at position 3 ->',list2.get_element(3))

print("\nElements in the list ")
list2.show_elements()

list2.reverse()
print("\nReversed List")
list2.show_elements()
