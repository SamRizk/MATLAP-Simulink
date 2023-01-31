axis([0 10 0 10])

R1 = rectangle('Position',[4.5 3.5 1 6],'FaceColor','black');
R2 = rectangle('Position',[4.8 1 0.4 2.5],'FaceColor','black');

L1 = rectangle('Position',[4.5 4 1 1],'Curvature',[0.5 0.5]);
L2 = rectangle('Position',[4.5 6 1 1],'Curvature',[0.5 0.5]);
L3 = rectangle('Position',[4.5 8 1 1],'Curvature',[0.5 0.5]);

while 1
L3.FaceColor='red';
pause(1.5)
L3.FaceColor='cyan';

L2.FaceColor='yellow';
pause(1.5)
L2.FaceColor='cyan';

L1.FaceColor='green';
pause(1.5)
L1.FaceColor='cyan';

end