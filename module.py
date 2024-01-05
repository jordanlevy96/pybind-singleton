from my_module import Singleton

print('Accessing Singleton...')

test_val = Singleton.get_test_val()
print('Test val:', test_val if test_val != '' else 'None')
Singleton.print_test()

print('--')
instance = Singleton.get_instance()
print(instance)
print(instance.test)
instance.test = 'Python\'s instance'
print(instance.test)
instance.print_test()
