#define RED "\x1B[31m" //color flag 1
#define GREEN "\x1B[32m" //color flag 2
#define YELLOW "\x1B[33m" //color flag 3
#define BLUE "\x1B[34m" //color flag 4
#define MAGENTA "\x1B[35m" //color flag 5
#define CYAN "\x1B[36m" //color flag 6
#define WHITE "\x1B[37m" //color flag 7
#define RESET "\x1B[0m" //color flag 8

char* dots[11] = {"     ",
				  "     ",
				  ":::::",
				  ":::::",
				  ":::::",
				  "     ",
				  ":::::",
				  ":::::",
				  ":::::",
				  "     ",
				  "     "};

char* zero[11] = {"   00000   ",
				  "  0000000  ",
				  " 000000000 ",
				  "0000   0000",
				  "000     000",
				  "000     000",
				  "000     000",
				  "0000   0000",
				  " 000000000 ",
				  "  0000000  ",
				  "   00000   "};

char* one[11] = {"      11   ",
				 "    1111   ",
				 "  111111   ",
				 "11111111   ",
			 	 "   11111   ",
				 "   11111   ",
				 "   11111   ",
				 "   11111   ",
				 "   11111   ",
				 "11111111111",
				 "11111111111"};

char* two[11] = {"  22222222 ",
				 " 2222222222",
				 "2222   2222",
				 "222   22222",
				 "     22222 ",
				 "    22222  ",
				 "   22222   ",
				 "  22222    ",
				 " 22222     ",
				 "22222222222",
				 "22222222222"};

char* three[11] = {"  3333333  ",
				   "33333333333",
				   "333     333",
				   "       3333",
				   "   333333  ",
				   "  333333   ",
				   "   333333  ",
				   "       3333",
				   "333     333",
				   "33333333333",
				   "  3333333  "};

char* four[11] = {"      4444 ",
				  "     44444 ",
				  "    444 44 ",
				  "   444  44 ",
				  "  444   44 ",
				  " 444    444",
				  "44444444444",
				  "     44444 ",
				  "     44444 ",
				  "     44444 ",
				  "     44444 "};

char* five[11] = {"55555555555",
				  "55555555555",
				  "5555       ",
				  "5555       ",
				  "5555       ",
				  "5555555555 ",
				  "  555555555",
				  "      55555",
				  "      55555",
				  "55555555555",
				  "5555555555 "};

char* six[11] = {"    66666  ",
				"   66666   ",
				"  66666    ",
				" 6666      ",
				"6666       ",
				"6666666666 ",
				"6666   6666",
				"666     666",
				"666     666",
				"6666   6666",
				" 666666666 "};

char* seven[11] = {"77777777777",
				   "77777777777",
				   "        777",
				   "       7777",
				   "      7777 ",
			 	   "     7777  ",
				   "    7777   ",
				   "   7777    ",
				   "  7777     ",
				   " 7777      ",
				   "7777       "};

char* eight[11] = {"  8888888  ",
				   " 888   888 ",
				   "888     888",
			 	   " 888   888 ",
				   "  8888888  ",
				   "   88888   ",
				   "  8888888  ",
				   " 888   888 ",
				   "888     888",
				   " 888   888 ",
				   "  8888888  "};

char* nine[11] = {" 999999999 ",
				  "9999   9999",
				  "999     999",
				  "999     999",
				  "9999   9999",
				  " 9999999999",
				  "      99999",
				  "     99999 ",
				  "    99999  ",
				  "   99999   ",
				  "  99999    "};