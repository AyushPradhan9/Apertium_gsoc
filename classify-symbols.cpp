#include<iostream>
#include<unicode/ustdio.h>
#include<unicode/ustring.h>
#include<unicode/uchar.h>

int main(void){
	
	UChar *str = (UChar*)malloc(10000*sizeof(UChar));
	UFILE *out,*in;
    UCharCategory ch;

	out = u_get_stdout();
	in = u_finit(stdin,NULL,NULL);

    if(!in){
        fputs("stdin error\n",stderr);
        return 1;
    }

	u_fgets(str,10000,in);
	int len=u_strlen(str);

	for(int i=0;i<len-1;i++){		       

		ch=(UCharCategory)u_charType(str[i]);

        if(ch==U_MODIFIER_LETTER || ch==U_OTHER_LETTER || ch==U_UPPERCASE_LETTER || ch==U_LOWERCASE_LETTER){            // for alphabetic(Lu, Ll, Lm, Lm) 
            std::cout<<"C ";
            u_fputc(str[i],out);
            std::cout<<"\n";
        }
			
		else{                                        // for non-alphabetic 
			std::cout<<"X "; 
            u_fputc(str[i],out);
            std::cout<<"\n";
		}	
	}

	return 0;
}
