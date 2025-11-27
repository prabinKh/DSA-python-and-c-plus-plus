def self_int(value, default =0):
    try:
        return int(value)
    except(ValueError, TypeError):
        return default
print (self_int('123'))
print(self_int('abc'))