class dog:
    def __init__(self, name, breed):
        self.breed = breed
        self.name = name


names = [dog('Toby', 'GR'), dog('Sunny', 'GR'), dog('what no not this one', 'SC')]#given
gr = []
for i in names:
    if i.breed == 'GR':
        gr.append(i.name)

for i in gr:
    print(i)