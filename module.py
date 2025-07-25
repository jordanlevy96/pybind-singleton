from my_module import Singleton

print('Accessing Singleton...')

test_val = Singleton.get_test_val()
print('Test val:', test_val if test_val != '' else 'None')
Singleton.print_test()

print('--')
print(Singleton.get_test_val())
Singleton.set_test_val('Python\'s instance')
Singleton.print_test()
