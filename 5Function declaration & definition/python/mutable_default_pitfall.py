def g_append(item, lst = None):
    if lst is None:
        lst = []
    lst.append(item)
    return lst
print(g_append(1))
print(g_append(3))