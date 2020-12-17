# Stacks in python can be easily implemented by using lists

def create_stack():
    stack = []
    return stack


# Check if the stack is empty
def is_empty(stack):
    return len(stack) == 0


# Add elements into the stack
def push(stack, item):
    stack.append(item)
    print("Pushed element is: " + item)


# Remove the element from stack
def pop(stack):
    if is_empty(stack):
        print("Stack is empty")
    return stack.pop()


if __name__ == "__main__":
    stack = create_stack()
    push(stack, str(1))
    push(stack, str(2))
    push(stack, str(3))

    print("Popped element is: " + pop(stack))
    print("Stack after popping the element: " + str(stack))
