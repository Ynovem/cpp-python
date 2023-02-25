from artifact.patient import patient as p


def main(name):
    # Hack for show avaiable functions in patient
    print('Available functions')
    for i in dir(p):
        print(f'\t{i}')
    print('\n')

    p1 = p()
    p1.set_name("Patient-1")
    p1.set_age(1)
    d1 = p1.get_data()
    print(f'Data[{d1.get_id()}]: {d1.get_name()} {d1.get_age()}')

    p2 = p()
    p2.set_name("Patient-2")
    p2.set_age(42)
    d2 = p2.get_data()
    print(f'Data[{d2.get_id()}]: {d2.get_name()} {d2.get_age()}')


if __name__ == '__main__':
    main('PyCharm')
