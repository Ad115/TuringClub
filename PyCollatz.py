import sys

class ParImpar():
	global l, max, cal
	cal=0 
	max=0 
	l=0


	def calculo (self, n):
		global l
		l+=1
		if n == 1:
			return l
		else:
			if (n % 2) == 0:
				n = n/2
				self.calculo(n)
			else:
				n = n*3+1
				self.calculo(n)


	def maxcycle (self, i, j):
		global l, max
		if i == j+1:
			return max
		else:
			cal=l
			l=0
			self.calculo(i)
			if max < cal:
				max = cal
			self.maxcycle(i+1, j)


	def __init__(self):
		global max
		self.maxcycle(int(arg1), int(arg2))
		print(arg1 + "  "+arg2+ "  " +str(max))

arg1 = sys.argv[1]
arg2 = sys.argv[2]
ParImpar()

