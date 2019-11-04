import sys

linea = input()
try:
    pi = float(3.14159265358979323846)
    if(linea == "1"):
        b = input().split(" ")
        if(b[0] == "rectangle"):
            print("{0:.6f}".format(float(b[1])*float(b[2])))
        else:
            print("{0:.6f}".format((float(b[1]) * float(b[1])) * pi))
    else:
        x = input().split(" ")
        y = input().split(" ")
        x1 = float(x[1])
        x2 = float(x[2])
        y1 = float(y[1])
        print("{0:.6f}".format(x1 * x2))
        print("{0:.6f}".format((y1 * y1) * pi))
except:
    print("0.000000")
    print("0.000000")
