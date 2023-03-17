void lexer(string s,int len)
{
 char ch
 int i=-1
 int state=0
 ch=getchar()
 int con=1
while(con)
 {
 switch(state)
 {
 case state of 0:
 if(Sletter(ch))
 {
 state=1
 }
 else if(ch=='=')
 {
 state=5
 }
 else if(ch=='+')
 {
 state=6
 }
 else if(ch=='-')
 {
 state=7
 }
 else if(ch=='<')
 {
 state=8
 }
 else if(ch=='?')
 state=10
 }
 else if(ch=='.')
 {
 state=12
 }
 else
 {
 state=12
 }
 end case
 case state of 1:
 ch=getchar()
 if(Letters(ch))
 {
 state=2
 }
 else
 {
 state=4
 }
 end case
 case state of 2:
 ch=getchar()
 if(Letters(ch))
 {
 state=3
}
 else
 {
 state=4
 }
 end case
 case state of 3:
 ch=getchar()
 if(Letters(ch))
 {
 state=13
 end case
 }
 else
 {
 state=4
 }
 end case
 case state of 4:
 print(Identifier)
 state=0
 end case
 case state of 5:
 print(assign operator)
 state=0
 ch=getchar()
 end case
case state of 6:
 print(concate operator)
 state=0
 ch=getchar()
 end case
 case state of 7:
 print(remove operator)
 state=0
 ch=getchar()
 end case
 case state of 8:
 ch=getchar()
 if(ch=='-')
 {
 state=9
 }
 else
 {
 state=13
 }
 end case
 case state of 9:
 ch=getchar()
 if(ch=='>')
 {
 state=10
 }
else
 {
 state=13
 }
 end case
 case state of 10:
 print(replace operator)
 state=0
 ch=getchar()
 end case
 case state of 11:
 print(find operator)
 state=0
 ch=getchar()
 end case
 case state of 12:
 con=0
 end case
 case state of 13:
 default:
 print(invalid input)
 con=0
 end case
 }
 }
