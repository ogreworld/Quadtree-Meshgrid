function display_quadtree(s)
figure;
k=(size(s,1)-1)/4;
for i=1:k
    x=[s(4*i-2,1),s(4*i-1,1),s(4*i,1),s(4*i+1,1),s(4*i-2,1)];
    y=[s(4*i-2,2),s(4*i-1,2),s(4*i,2),s(4*i+1,2),s(4*i-2,2)];
    plot(x,y,'k');
    hold on;
end
