import pexpect

child = pexpect.spawn("./test")
child.expect("Olar!")
print child.after