class Node:
    def __init__(self, data, next=None):
        self.data = data
        self.next = next # Next element of the Linked List

class LinkedList:
    def __init__(self):
        self.head = None

    def __repr__(self):
        node = self.head
        nodes = []
        while node is not None:
            nodes.append(node.data)
            node = node.next
        nodes.append("None")
        return " -> ".join([str(n) for n in nodes])

    def __iter__(self):
        node = self.head
        while node is not None:
            yield node
            node = node.next


linked_list = LinkedList()
month_1 = Node({'Name': 'January', 'Days': 31})
month_2 = Node({'Name': 'February', 'Days': 30})
month_3 = Node({'Name': 'March', 'Days': 31})
month_4 = Node({'Name': 'April', 'Days': 30})

# Link between nodes
month_1.next = month_2
month_2.next = month_3
month_3.next = month_4

linked_list.head = month_1

print(linked_list)
for month in linked_list:
    print(month.data)