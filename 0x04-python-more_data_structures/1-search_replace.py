#!/usr/bin/python3
def search_replace(my_list=None, search=None, replace=None):
    if my_list is None:
        my_list = []
    return [replace if search == n else n for n in my_list]

