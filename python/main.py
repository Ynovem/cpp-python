import patient


def print_hi(name):
    print(f'Hi, {name}')
    print(f'20+22={patient.add(20, 22)}')
    print(f'20-22={patient.subtract(20, 22)}')


if __name__ == '__main__':
    print_hi('PyCharm')
