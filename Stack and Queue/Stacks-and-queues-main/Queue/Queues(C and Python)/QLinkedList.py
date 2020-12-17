class Node:

    def __init__(self, data):
        self.data = data
        self.next = None

class Queue:

    def __init__(self):
        self.front = None
        self.rear = None

    def enqueue(self, data):
        new_node = Node(data)

        if self.front is None and self.rear is None:
            self.front = self.rear = new_node
            self.front.next = self.rear.next = None
        else:

            self.rear.next = new_node
            self.rear = new_node
            new_node.next = None

    def dequeue(self):
        if self.front is None:
            return None
        else:
            temp = self.front
            self.front = self.front.next
            print("\nDeleted element: ", temp.data)
            return temp
    def display(self):
        if self.front is None:
            return None
        else:
            temp = self.front
            while temp is not None:
                print(temp.data, " ", end = "" )
                temp = temp.next


if __name__ == "__main__":
    q = Queue()

    while True:
        print("\n1.Enqueue: ")
        print("2.Dequeue: ")
        print("3.Print: ")
        print("4.End: ")

        choice = int(input("Chose an action: "))

        if choice == 1:
            data = input("Add an element: ")
            q.enqueue(data)
        elif choice == 2:
            print(q.dequeue())
        elif choice == 3:
            print(q.display())
        elif choice == 4:
            break



