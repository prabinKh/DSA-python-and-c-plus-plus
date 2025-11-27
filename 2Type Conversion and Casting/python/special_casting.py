# bool to int/float
bool_val = True
print(int(bool_val))   # 1
print(float(bool_val)) # 1.0

# None becomes empty/falsey in most conversions
str(None)   # "None"
bool(None)  # False
int(None)   # TypeError!