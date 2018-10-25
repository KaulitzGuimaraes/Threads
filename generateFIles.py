import  numpy as np

fileName = "n"

def return_file_name(n_file):
    return "n{}.txt".format(n_file)

for i in range(16) :
    numbers = np.random.randint(1, 100 + 1,size=(100000,1))
    file = open(return_file_name(i),'w')
    for number in numbers :
        number = str(number[0])
        file.write(number)
        file.write('\n')
