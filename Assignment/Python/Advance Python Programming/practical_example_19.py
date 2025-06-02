class OverloadExample:
    def add(self, a=None, b=None, c=None):
        if a is not None and b is not None and c is not None:
            return a + b + c
        elif a is not None and b is not None:
            return a + b
        elif a is not None:
            return a
        else:
            return 0

obj = OverloadExample()
print("add(2, 3):", obj.add(2, 3))
print("add(2, 3, 4):", obj.add(2, 3, 4))
print("add(5):", obj.add(5))
print("add():", obj.add())