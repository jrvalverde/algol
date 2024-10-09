#include "alw.h"

#include <stdio.h>
#include "alwio.h"
#define FILE_NAME "Tests/inline-c-output-redirection.temp"

static const char * const alw_src = "Tests/inline-c-output-redirection-2.alw";


   int main (int argc, char **argv) {
     alw_init(alw_at(72,4));
     {
{
auto void openin();
auto void openout();
auto void closefile();
auto void get(int channel);
auto void put(int channel);
int i;
alw_chr s[20];


 
    FILE *file;
    alw_Scanner file_scanner;
    alw_Printer file_printer;
    
void openin() {
{


        file = fopen(FILE_NAME, "r");
        alw_Scanner_initialize(&file_scanner, file, FILE_NAME);
    
}
 }
void openout() {
{


        file = fopen(FILE_NAME, "w");
        alw_Printer_initialize(&file_printer, file, FILE_NAME);
    
}
 }
void closefile() {
{


        fclose(file);
    
}
 }
void get(int channel) {
{


        if (channel == 2)
            alw_active_scanner = &file_scanner;
        else
            alw_active_scanner = &alw_stdin_scanner;
    
}
 }
void put(int channel) {
{


        if (channel == 2)
            alw_active_printer = &file_printer;
        else
            alw_active_printer = &alw_stdout_printer;
    
}
 }
i = 0;
alw_str_init(s, 20);
openout();
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(51,4), 2);
alw_write_string(alw_at(51,4), (alw_str)"line 1", 6);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(52,4), 2);
alw_write_string(alw_at(52,4), (alw_str)"line 2", 6);

                 alw_Editing_restore(&_editing_state);
               }
              put(2);
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(54,4), 2);
alw_write_string(alw_at(54,4), (alw_str)"line 3", 6);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(55,4), 2);
alw_write_string(alw_at(55,4), (alw_str)"line 4", 6);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(56,4), 2);
alw_write_string(alw_at(56,4), (alw_str)"line 5", 6);

                 alw_Editing_restore(&_editing_state);
               }
              put(1);
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(58,4), 2);
alw_write_string(alw_at(58,4), (alw_str)"line 6", 6);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(59,4), 2);
alw_write_string(alw_at(59,4), (alw_str)"line 7", 6);

                 alw_Editing_restore(&_editing_state);
               }
              closefile();
openin();
get(2);
{ 
             const int _start = 1;
             const int _limit = 3;
             int i = _start;
             while (i <= _limit) {
               {
{
alw_chr s[6];
alw_str_init(s, 6);
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_readcard(alw_at(67,12), s, 6);

                 alw_Editing_restore(&_editing_state);
               }
              { alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(68,12), 2);
alw_write_string(alw_at(68,12), s, 6);

                 alw_Editing_restore(&_editing_state);
               }
              ; /*empty*/
}
}

               ++i;
             }
           }
          closefile();
get(0);
{ alw_Editing_t _editing_state;
                 alw_Editing_save(&_editing_state);
                 alw_iocontrol(alw_at(72,4), 2);
alw_write_string(alw_at(72,4), (alw_str)"done.", 5);

                 alw_Editing_restore(&_editing_state);
               }
              }
}
alw_exit(alw_at(72,4), 0);
     return 0;
   }
   
