l2:l1*til count l1:(l:read0 `:input.txt) like "";
l3:raze each (0,l2 where l2<>0) _ l;
sum 7={sum count each {ss[x;y]}[x;]each ("ecl";"pid";"eyr";"hcl";"byr";"iyr";"hgt")}each l3

