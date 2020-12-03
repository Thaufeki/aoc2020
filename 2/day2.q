ans1:sum{k:" " vs x;p:k[2];r:"I"$"-"vs k[0];lb:r[0];ub:r[1];c:k[1][0];(sum p in c) within (lb;ub)}each l:read0 `:input.txt;
ans2:sum{k:" " vs x;p:k[2];r:"I"$"-"vs k[0];lb:r[0]-1;ub:r[1]-1;c:k[1][0];1=sum(p[lb];p[ub])in c}each l;
(ans1;ans2)