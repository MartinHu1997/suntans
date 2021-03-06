Nc = 50;
L = 100;
D = 20;
dx = L/Nc;
dz = load('stretched.dat');
z = -D+cumsum(dz(end:-1:1));
x = [0:dx:L];
[x,z]=meshgrid(x,z);
plot(x,z,'k-',x',z','k-');
axis image;
xlabel('x (m)');
ylabel('z (m)');