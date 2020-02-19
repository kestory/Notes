from decimal import localcontext
from decimal import Decimal
import math
a=Decimal('0.99')
b=Decimal('0.99')
for i in range(1,366):
	with localcontext() as ctx:
		ctx.prec = 50
#		print(a*b)
		print('0.99^',i,'=',a,'\\\\')
	a=a*b