import sys;

linea=input();
x=linea.split(" ");
valores=[float(i) for i in x];
suma=sum(valores);
promedio=suma/len(valores); 
print("{0:.2f}".format(promedio));
