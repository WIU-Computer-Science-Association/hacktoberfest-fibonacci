B=[]
C=lambda z:z not in B and print(z)or B.append(z)or z
A=lambda x:x if x<2 else C(A(x-1)+A(x-2))
A(25)
