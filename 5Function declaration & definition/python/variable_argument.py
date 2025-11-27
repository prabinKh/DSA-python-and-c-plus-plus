def sum_all(*args):
    print("args: " ,args)
    return sum(args)


def print_info(**kwargs):
    print('kwargs: ',kwargs)
    for key, value in kwargs.items():
        print(f"{key}: {value}")

print(sum_all(1,2,3,4,5))
print_info(name='alice',age=25, job='Engineer')