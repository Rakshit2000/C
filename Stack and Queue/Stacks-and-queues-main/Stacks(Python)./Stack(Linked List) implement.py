class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class Stack:
    def __init__(self):
        self.head = None

    # add the data to the top of the stack
    def push(self, data):
        if self.head is None:
            self.head = Node(data)
        else:
            new_node = Node(data)
            new_node.next = self.head
            self.head = new_node

    # pop the element from the stack
    def pop(self):
        if self.head is None:
            return None
        else:
            popped = self.head.data
            self.head = self.head.next
            return popped

    # return the top i.e, head
    def peek(self):
        return self.head.data

    # print the elements in the stack
    def display(self):
        temp = self.head
        if self.head is None:
            print("Stack underflow!!")
        else:
            while temp != None:
                print(temp.data, '->', end="")
                temp = temp.next



if __name__ == "__main__":
    create_stack = Stack()

    while True:
        print("\n1.Push: ")
        print("2.Pop: ")
        print("3.Peek: ")
        print("4.Print: ")

        choice = int(input("Choose an action: "))

        if choice == 1:
            data = input("Add an element: ")
            create_stack.push(data)
        elif choice == 2:
            print(create_stack.pop())
        elif choice == 3:
            print(create_stack.peek())
        elif choice == 4:
            create_stack.display()






