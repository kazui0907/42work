#include<unistd.h>

int main(int argc,char **argv)
{
    int i;

    i = 0;
    (void)argc;

    if(argc != 2)
    {
        write(1,"a",1);
        write(1,"\n",1);
        return (0);       
    }
    while(argv[1][i] != '\0')
    {
        if(argv[1][i] == 'a')
        {
            write(1,"a",1);
            write(1,"\n",1);
            return (0);
        }

        i++;

    }
    write(1,"\n",1);
    return (0);
}