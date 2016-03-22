function display_input(s)
figure;
k=(size(s,1)-1)/2;
for i=1:k
    x=[s(2*i,1),s(2*i+1,1)];
    y=[s(2*i,2),s(2*i+1,2)];
    plot(x,y,'k');
    hold on;
end