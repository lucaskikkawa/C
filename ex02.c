#include <stdio.h>
#include <stdlib.h>

void main()
{
    int note_sony,note_dell,note_toshiba;
    scanf("%d %d %d",&note_sony,&note_dell,&note_toshiba);
    printf("%d notebook(s) da Sony\n",note_sony);
    printf("%d notebook(s) da Dell\n",note_dell);
    printf("%d notebook(s) da Toshiba\n",note_toshiba);
    printf("Total de %d notebooks",note_sony+note_dell+note_toshiba);
}
