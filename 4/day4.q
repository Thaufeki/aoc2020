l2:l1*til count l1:(l:read0 `:input.txt) like "";
l3:raze each l4:(0,l2 where l2<>0) _ l;
ans1:sum bl:7={sum count each {ss[x;y]}[x;]each (vl::("ecl";"pid";"eyr";"hcl";"byr";"iyr";"hgt"))}each l3;
vl:vl,enlist "cid";
l5:1 _' {raze {" " vs x}each x}each l4 where bl;
cl:(`$vl)!({x in ("amb";"blu";"brn";"gry";"grn";"hzl";"oth")};{$[x like "?????????";:-7 = type get x;:0b]};{("I"$x)within(2020;2030)};{$[x like "#??????";:all (1 _ x)in raze (string 6#.Q.a),string til 10;:0b]};{("I"$x)within(1920;2002)};{("I"$x)within(2010;2020)};{f:{("I"$ -2 _ x)within (y;z)};$[x like "*cm";:f[x;150;193];x like "*in";:f[x;59;76];:0b]};{:1b});
ans2:sum{all{r:":" vs x;y[`$r[0]][r[1]]}[;cl]each x}each l5;
(ans1;ans2)


