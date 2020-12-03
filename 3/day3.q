l:read0 `:input.txt;
func:{sum({((y+1)#l[x])[y]}'[x*i;y*i:til count l]) in "#"};
ans1:func[1;3];
ans2:prd "j"$func'[1 1 1 1 2;1 3 5 7 1];
(ans1;ans2)