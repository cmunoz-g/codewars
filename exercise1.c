#include <unistd.h>

void neutralize (const char *s1, const char *s2)
{

  int i = 0;
  
  while(s1[i] != '\0')
    {
      if(s1[i] == s2[i] && s1[i] == '+')
        {
            write(1,"+",1);
        }
    
      else if(s1[i] == s2[i] && s2[i] == '-')
        {
            write(1,"-",1);
        }
      
      else
        {
            write(1,"0",1);
        }
    
    i++;
    
    }
  
}

int main()
{
    const char *s1 = {"+--+-"};
    const char *s2 = {"--++-"};

    neutralize(s1,s2);

    return(0);
}