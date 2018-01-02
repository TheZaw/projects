class living:
    def alive(self):
        return 'Is breathing'
class human(living):
    def __init__(self, catchphrase):
        self.legs = 2
        self.name = self
        self.hello = catchphrase
    def what(self):
        print(str(self))

chris = human("YEAH boiiiiii")

#print(chris.legs, chris.name, chris.hello)

chris.what()
print(chris.alive())