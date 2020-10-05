import random
import subprocess

COMMAND = "./a.out"
OUT_TEMP_FILE = "out.txt"


def rand_two_floats():
	a = random.uniform(-90000000000.0, 90000000000.0)
	b = random.uniform(-90000000000.0, 90000000000.0)
	return a, b

def rand_two_integers():
	a = random.randint(-90000000000000000000, 9000000000000000000)
	b = random.randint(-90000000000000000000, 9000000000000000000)
	return a, b


def get_command_string(a, b):
	return COMMAND + " " + str(a) + " " + str(b)

def getComma(number):
	count = 1
	for i in number:
		if i == '.':
			return len(number) - count
		count += 1

def test_random_subtractionInteger():
	a,b = rand_two_integers()

	process = subprocess.Popen(get_command_string(a,b).split(), stdout=subprocess.PIPE)
	output, error = process.communicate()


	f = open("test.txt", "a")
	if error is not None:
		print("Wrong input")
	elif a-b != int(output):
		f.write(str(a) + " - " + str(b) + " = " + str(output) + " | " + str(a-b) + "\r")
	else:
		pass

def test_random_subtractionFloat():
	a,b = rand_two_floats()

	aS = str(a)
	aS = aS[0 : (len(aS) - (getComma(aS) - 4))]


	bS = str(b)
	bS = bS[0 : (len(bS) - (getComma(bS) - 4))]

	f = open("test.txt", "a")

	process = subprocess.Popen(get_command_string(aS,bS).split(), stdout=subprocess.PIPE)
	output, error = process.communicate()

	output = str(output)
	output = output[2 : (len(output) - (getComma(output) - 4))]

	if output[len(output) - 1] == '\'':
		output = output[0: len(output) - 1]

	cS = str(float(aS) - float(bS))
	cS = cS[0 : (len(cS) - (getComma(cS) - 4))]

	if error is not None:
		print("Wrong input")
	elif float(cS) != float(output):
		if cS[len(cS) - 1] != output[len(output) - 1]:
			pass
		else:
			f.write(aS + " - " + bS + " = " + output + " | " + cS + "\r")
	else:
		pass

i = 0
for x in range(1000):
	i += 1
	test_random_subtractionInteger()
	print (" [1/2] Progress: " + str(i) + "/1000", end = '\r', flush = True)

print ("                                                   ", end = '\r', flush = True)

i = 0
for x in range(1000):
	i += 1
	test_random_subtractionFloat()
	print (" [2/2] Progress: " + str(i) + "/1000", end = '\r', flush = True)

