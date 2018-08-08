#include <stdio.h>
#define G c = getchar();
#define P printf
int ANDchar(char c)
{	
	G
	if(c == EOF){	
		P("&");
		return 0;
	}
	switch(c){
		case 'l': 
			G
			if(c == 't'){
				G
				if(c == ';'){
					P("<");
				}
				else if(c == '&')	{
					P("&lt");
					ANDchar(c);
				}
				else{
					if(c == EOF){
						P("&lt");
						return 0;
					}
					P("&lt%c",c);
				}
			}
			else if(c == '&'){
				P("&l");
				ANDchar(c);
			}
			else{
				if(c == EOF){
					P("&l");
					return 0;
				}
				P("&l%c",c);
			}
			break;
		case 'g':
			G
			if(c == 't'){
				G
				if(c == ';'){
					P(">");
				}
				else if(c == '&'){
					P("&gt");
					ANDchar(c);
				}
				else{	
					if(c == EOF){
						P("&gt");
						return 0;
					}
					P("&gt%c",c);
				}
			}
			else if(c == '&'){
				P("&g");
				ANDchar(c);
			}
			else{
				if(c == EOF){
					P("&g");
					return 0;
				}
				P("&g%c",c);
			}

			break;
		case 'a':
			G
			if(c == 'm'){
				G
				if(c == 'p'){
					G
					if(c == ';'){
						P("&");
					}
					else if(c == '&'){
						P("&amp");
						ANDchar(c);
					}
					else{
						if(c == EOF){
							P("&amp");
							return 0;
						}
						P("&amp%c",c);
					}
					
				}
				else if(c == '&'){
					P("&am");
					ANDchar(c);
				}
				else{
					if(c == EOF){
						P("&am");
						return 0;
					}
					P("&am%c",c);
				}
			}
			else if(c == 'p'){
				G
				if(c == 'o'){
					G
					if(c == 's'){
						G
						if(c == ';'){
							P("\'");
						}
						else if(c == '&'){
              P("&apos");
							ANDchar(c);
						}
						else{	
              if(c == EOF){
								P("&apos");
								return 0;
							}
							P("&apos%c",c);
						}
					}
					else if(c == '&'){
						P("&apo");
						ANDchar(c);
					}
					else{
						if(c == EOF){
							P("&apo");
							return 0;
						}
						P("&apo%c",c);
					}
				}
				else if(c == '&'){
					P("&ap");
					ANDchar(c);
				}
				else{
					if(c == EOF){
						P("&ap");
						return 0;
					}
					P("&ap%c",c);
				}
			}
			else if(c == '&'){
				P("&a");
				ANDchar(c);
			}
			else{
				if(c == EOF){
					P("&a");
					return 0;
				}
				P("&a%c",c);
			}
			break;
		case 'q':
			G
			if(c == 'u'){
				G
				if(c == 'o'){
					G
					if(c == 't'){
						G
						if(c == ';'){
							P("\"");
						}
						else if(c == '&'){
							P("&quot");
							ANDchar(c);
						}
						else{
							if(c == EOF){
								P("&quot");
								return 0;
							}
							P("&quot%c",c);
						}
					}
					else if(c == '&'){
						P("&quo");
						ANDchar(c);
					}
					else{
						if(c == EOF){
							P("&quo");
							return 0;
						}
						P("&quo%c",c);
					}
				}
				else if(c == '&'){
					P("&qu");
					ANDchar(c);
				}
				else{
					if(c == EOF){
						P("&qu");
						return 0;
					}
					P("&qu%c",c);
				}
			}
			else if(c == '&'){
				P("&q");
				ANDchar(c);
			}
			else{	
				if(c == EOF){
					P("&q");
					return 0;
				}
				P("&q%c",c);
			}
			break;
		case '&':
			P("&");
			ANDchar(c);
			break;
		default:
			P("&%c",c);
	}
	return 0;
}

int main()
{
	int c;
	while((c = getchar()) != EOF){
		if(c == '&'){
			ANDchar(c);
		}
		else{
			putchar(c);
		}
	}
	return 0;
}
