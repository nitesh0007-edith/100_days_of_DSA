l = [10, 20, 30, 40, 50, 60, 70, 80]
l.remove(20) # .remove  only  remove the value.
print(l)
print(l.pop()) # .pop return the removal item as output
print(l)
print(l.pop(2))
print(l)
del l[1]
print(l)
del l[0:2]
print(l)