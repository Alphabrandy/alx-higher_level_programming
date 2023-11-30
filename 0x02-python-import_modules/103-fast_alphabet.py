 #!/usr/bin/python3
 import string
print(''.join(list(filter(lambda x: x != '\n', list(string.ascii_uppercase)))) + '\n')
