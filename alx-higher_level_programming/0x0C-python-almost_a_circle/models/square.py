#!/usr/bin/python3
"""
Square class that inherits from Rectangle
"""
from models.rectangle import Rectangle


class Square(Rectangle):
    """this square class inherit from rectangle"""
    def __init__(self, size, x=0, y=0, id=None):
        super().__init__(size, size, x, y, id)

    @property
    def size(self):
        return self.width

    @size.setter
    def size(self, value):
        self.width = value
        self.height = value

    def update(self, *args, **kwargs):
        """
        it assigns argument to each attribute
        1st arg = id
        2nd arg = widht
        3rd  arg = heihgt
        4th arg = x
        5th arg = y
        """
        if len(args) != 0:
            single_item = 0
            for arg in args:
                """
                we need to initialize a var
                to keep track of increase of tuple size
                """
                if single_item == 0:
                    if arg is None:
                        self.__init__(self.width, self.height, self.x, self.y)
                    else:
                        self.id = arg

                if single_item == 1:
                    self.width = arg

                if single_item == 2:
                    self.x = arg

                if single_item == 3:
                    self.y = arg
                single_item += 1

        if len(kwargs) != 0:
            for key, value in kwargs.items():
                if key == "id":
                    if value is None:
                        self.__init__(self.width, self.height, self.x, self.y)
                    self.id = value

                elif key == "size":
                    self.width = value

                elif key == "x":
                    self.x = value

                elif key == "y":
                    self.y = value

    def to_dictionary(self):
        """returns dictionary presentation of the rectangle"""
        return {'id': self.id, 'x': self.x, 'size': self.height, 'y': self.y}

    def __str__(self):
        """return string presantation of the class"""
        return f"[Square] ({self.id}) {self.x}/{self.y} - {self.width}"
