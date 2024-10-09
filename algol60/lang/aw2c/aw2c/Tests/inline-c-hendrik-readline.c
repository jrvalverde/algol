#include "alw.h"

#include <stdio.h>
#include <malloc.h>

static const char * const alw_src = "Tests/inline-c-hendrik-readline.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(49,3));
     {
{
auto void readline(alw_str s, int * len, int * no, int * endoffile);
alw_chr line[255];
int length;
int line_number;
int eof;
void readline(alw_str s, int * len, int * no, int * endoffile) {
{


        char *line = (char *)malloc(257);  /* allow for "\n\0" at end of line */
        int size = 257;
        int length = getline(&line, &size, stdin);
        if (length == -1) {
           *len = 0;
           *endoffile = 1;
        }
        else {
           if (line[length - 1] == '\n')
             --length;
           alw_str_cpy(s, 255, line, length);
           *len = length;
           (*no)++;
           *endoffile = 0;
        }
        free(line);
      
}
 }
alw_str_init(line, 255);
length = 0;
line_number = 0;
eof = 0;
i_w = 2;
line_number = 0;
while (({
({
{
alw_chr _readline_arg1[255];
int _readline_arg2;
int _readline_arg3;
int _readline_arg4;
alw_str_cpy(_readline_arg1, 255, line, 255);
_readline_arg2 = 0;
_readline_arg3 = line_number;
_readline_arg4 = 0;
readline(_readline_arg1, &_readline_arg2, &_readline_arg3, &_readline_arg4);
alw_str_cpy(line, 255, _readline_arg1, 255);
length = _readline_arg2;
line_number = _readline_arg3;
eof = _readline_arg4;
}
(! eof);
});
}))
 { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(48,6), 2);
alw_write_integer(alw_at(48,6), line_number);
alw_write_integer(alw_at(48,6), length);
alw_write_string(alw_at(48,6), alw_str_sub(alw_at(48,33), line, 255, 0, 60), 60);

                 alw_Editing_restore(&_editing_state);
               }
               
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(49,3), 2);
alw_write_string(alw_at(49,3), (alw_str)"(eof)", 5);

                 alw_Editing_restore(&_editing_state);
               }
              }
}
alw_exit(alw_at(49,3), 0);
     return 0;
   }
   
