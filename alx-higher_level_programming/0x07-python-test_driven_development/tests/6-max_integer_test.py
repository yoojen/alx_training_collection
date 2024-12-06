#!/usr/bin/python3
"""Unittest for max_integer([...])
"""
import unittest
max_integer = __import__('6-max_integer').max_integer

class TestMaxInteger(unittest.TestCase):
    """definition of class tester"""
    def test_empty_list(self):
        """test empty list"""
        mylist = []
        self.assertEqual(max_integer(mylist), None)
    def test_only_one(self):
        """test if one passed"""
        mylist = [1]
        self.assertEqual(max_integer(mylist), 1)
    def test_ascending_order(self):
        """"test if ascending order list is passed"""
        mylist = [1, 2, 3, 4]
        self.assertEqual(max_integer(mylist), 4)
    def test_descending_order(self):
        """test if descending order list is passed"""
        mylist = [4, 3, 2, 1]
        self.assertEqual(max_integer(mylist), 4)
    def test_arrayof_str(self):
        """lists of string passed"""
        mylist = ["eugene", "claude", "john"]
        self.assertEqual(max_integer(mylist), "john")
    def test_double_passed(self):
        """if float numbers are passed"""
        mylist = [1.4, 5.4, 5.7, 6.2]
        self.assertEqual(max_integer(mylist), 6.2)

if __name__ == '__main__':
    unittest.main()
