import patient


def main(name):
    print(patient.greeting(name))
    print(f'20+22={patient.add(20, 22)}')
    print(f'20-22={patient.subtract(20, 22)}')


if __name__ == '__main__':
    main('PyCharm')
