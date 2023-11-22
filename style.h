#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define reset "\033[0m"
enum style{bold, italic, bitalic, strike, ul};
enum color{black, red, green, yellow, blue, maroon, aqua, white};
char * style[] = {"\033[1m","\033[3m","\033[1m\033[3m","\033[9m","\033[4m"};
char * color[] = {"\033[30m","\033[31m","\033[32m","\033[33m","\033[34m","\033[35m","\033[36m","\033[37m"};
char * bg[] = {"\033[40m","\033[41m","\033[42m","\033[43m","\033[44m","\033[45m","\033[46m","\033[47m"};

void animate_load(int l_color, char l_char, int sleep_sec){
	printf("%s%s\n-: Loading :-\n", color[l_color], style[italic]);
	for(int i=0;i<10;i++){
		printf("%s%c",bg[l_color],l_char);
		fflush(stdout); 
		sleep(sleep_sec);
	}
	printf("%s\n", reset);
}

void how_to_use(){
	animate_load(aqua, ' ', 1);
	for(int i=0;i<23;i++){
		printf("\b \b");
	}
	printf("\n\t\t\t--- STYLE C CODES WITH %sstyle.h%s ---\n", color[aqua], reset);

	printf("%sDESCRIPTION:%s\n", style[bold], reset);
	printf("\tWith 'style.h' header file, you can\n"
	"\t\t* Use different %s%stext styles%s like bold, italic, ...\n"
	"\t\t* Apply different %s%stext colors%s like red, green, ...\n"
	"\t\t* Apply %s%sbackground colors%s to your C codes.\n"
	"\t\t* Apply %s%sLoading Animation%s.\n", 
	style[bitalic], color[aqua], reset, 
	style[bitalic], color[aqua], reset, 
	style[bitalic], color[aqua], reset,
	style[bitalic],color[aqua], reset);

	printf("\n%sSYNOPSIS:%s\n", style[bold], reset);
	printf("\t#include \"style.h\"\n\t\t(or)\n\t#include \"abolute path\"\n");
	printf("\tAbsolute path like: /home/<username>/Downloads/style.h\n");

	printf("\n%sAVAILABLE STYLES:%s\n", style[bold], reset);
	printf("\t* %sBold%s           - style[bold]\n", style[bold], reset);
	printf("\t* %sItalic%s         - style[italic]\n", style[italic], reset);
	printf("\t* %sBold & Italic%s  - style[bitalic]\n", style[bitalic], reset);
	printf("\t* %sStrike through%s - style[strike]\n", style[strike], reset);
	printf("\t* %sUnderline%s      - style[ul]\n", style[ul], reset);
	printf("\t* Reset          - reset\n");
	printf("\t%s%sNote :-%s You can create new styles by concatenating styles with these\n", style[bold], color[red], reset);

	printf("\n%sAVAILABLE TEXT AND BACKGROUND COLORS:%s\n", style[bold], reset);
	printf("\t* Black          - color[black], bg[black]\n");
	printf("\t* %sRed%s            - color[red], bg[red]\n", color[red], reset);
	printf("\t* %sGreen%s          - color[green], bg[green]\n", color[green], reset);
	printf("\t* %sYellow%s         - color[yellow], bg[yellow]\n", color[yellow], reset);
	printf("\t* %sBlue%s           - color[blue], bg[blue]\n", color[blue], reset);
	printf("\t* %sMaroon%s         - color[maroon], bg[maroon]\n", color[maroon], reset);
	printf("\t* %sAqua%s           - color[aqua], bg[aqua]\n", color[aqua], reset);
	printf("\t* White          - color[white], bg[white]\n");

	printf("\n%sAVAILABLE FUNCTIONS:%s\n", style[bold], reset);
	printf("\t* how_to_use()	- manual\n");
	printf("\t* animate_load(int l_color, char l_char, int sleep_sec)	- Loading Animation\n");
	printf("\t\t-- %sint l_color%s		=> Loading Color[red, green, ..]\n", color[maroon], reset);
	printf("\t\t-- %schar l_char%s		=> Character for loading [' ', '+', '-', '_', ..]\n", color[maroon], reset);
	printf("\t\t-- %sint sleep_sec%s	=> Sleep Time (seconds) [min=1]\n", color[maroon], reset);

	printf("\n%sDEMO:%s\n", style[bold], reset);
	printf("\t#include \"style.h\"\n");
	printf("\tint main(){\n");
	printf("\t\tprintf(\"%%s%%s Color - aqua, style - Bold and Italic, %%s background - black %%s\","
		   "\n\t\t\t color[aqua], style[bitalic], bg[black], reset);\n");
	printf("\t\tprintf(\"%%s%%s Simple Demo on text styling %%s\", color[green], style[bitalic], reset);\n");
	printf("\t\t//reset - to stop the styling\n");
	printf("\t\treturn 0;\n\t}\n");
	
	printf("\toutput:\n");
	printf("\t\t%s%s Color - aqua, style - Bold and Italic, %s background - black %s\n",
		   color[aqua], style[bitalic], bg[black], reset);
	printf("\t\t%s%s Simple Demo on text styling %s\n\n", color[green], style[bitalic], reset);
	printf("%sFUTURE UPDATES:%s\n\tUnicode support - Emojis and Symbols\n\tAdvanced Loading Animation\n\n", style[bold], reset);
	printf("\t\t\t--- Developed with \U0001F496 by Suresh ---\n");

}