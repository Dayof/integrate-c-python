import pexpect

child = pexpect.spawn ('./test')
print child.read()