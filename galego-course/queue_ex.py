# > First in first out (FIFO)
# > Generally implemented using Linked List
# > Keep reference to the head and tail (first and last elements) to make the procces of insertAtTheEnd easier.

from queue import Queue
from collections import deque

q = Queue()

q.put(1)
q.put(2)
print(q)