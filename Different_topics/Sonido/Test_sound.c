//  http://www.olegkikin.com/audio/audio.html
//  https://news.ycombinator.com/item?id=3063359

#include <stdio.h>

main(t){
    for(t=0;;t++)
        putchar((t>>6|t|t>>(t>>16))*10+((t>>11)&7));
    }