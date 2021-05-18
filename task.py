class A:
    #here a and b both are class variable of class A.
    #and initialize with 0.
    # a = 0
    # b = 0
    def funA(self,colour="red",maxprice="600000",maxspeed="222"):
        A.colour = colour
        A.maxprice = maxprice
        A.maxspeed = maxspeed
class B(A):
    def _init_(self,tires):
        self.tires = tires
        #access class A variable from class B.
        # print("variable of class A =",A.a)
        # print("variable of class B =",A.b)
        # print("variable of class B =",A.c)
    def func(self):
        return ("A "+str(A.colour)+"-colored car with a maximum spped of "+str(A.maxspeed)+"km/h is priced at "+str(A.maxprice)+" with "+str(self.tires)+" tires")
#class A object 
ob1 = A()
#user input no.
# a=int(input("enter 1st number "))
# b=int(input("enter 2nd number "))
# c = int(input())
#class A method call
ob1.funA()
#class B object
ob2 = B.func("4")
# ob2