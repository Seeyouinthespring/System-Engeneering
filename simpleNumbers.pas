program simpleNumbers;

var
        i,n,range : integer;
        check: boolean;
        textFile: text;
begin
        write('Input number');
        readln(range);

        assign(textFile,'text.txt');
        rewrite(textFile);

        for i:=2 to range do
        begin
                check:= false;
                for n:=2 to Trunc(Sqr(i)) do
                begin
                        check:= i mod n <> 0;
                        if not check then break;
                end;
                if check then
                begin
                        write(i, ' ');
                        write(textFile, i);
                        write(textFile, '  ');
                end;
        end;
        close(textFile);
end.