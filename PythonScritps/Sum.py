import random
import subprocess
# from tqdm import tqdm
# import thread

COMMAND = "./a.out"
OUT_TEMP_FILE = "out.txt"
PROGRAM_PATH = "01.png"

def rand_two_integers():
    a = random.randrange(-90000000000000000000000000000000000000000000000000000000000000000, 90000000000000000000000000000000000000000000000000000000000000000000000000000000000000)
    b = random.randrange(-90000000000000000000000000000000000000000000000000000000000000000, 90000000000000000000000000000000000000000000000000000000000000000000000000000000000000)
    return a, b

def get_command_string(a, b):
	return COMMAND + " " + str(a) + " " + str(b)

def test_random_case():
	a,b = rand_two_integers()
	process = subprocess.Popen(get_command_string(a,b).split(), stdout=subprocess.PIPE)
	output, error = process.communicate()
	f = open("test.txt", "a")
	if error is not None:
		print("Error")
	elif (a-b) != int(output):
		f.write(str(a) + " + " + str(b) + " != " + str(output))
	else:
		pass


i = 0
for x in range(10000000):
	i += 1
	test_random_case()
	print ("Progress: " + str(i) + "/10000000", end = '\r', flush = True)

