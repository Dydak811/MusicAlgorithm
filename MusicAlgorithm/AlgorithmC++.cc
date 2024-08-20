#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <math.h>
#include <time.h>
using namespace std;
class crearmusica {
public:
void tempo()
{
  int t;
  do
  {
    t=rand ()%100+1;
  }
  while (t<60 || t>185);
  cout<<"el tempo de la cancion es "<<t<<endl;
  
}
void circulo ()
{
  int c, n=4, cont, p, t;
  cout<<"siendo 1=negra, 2=blanca, 3=corchea, 4=redonda y 5=semicorchea";
   do
  {
  c=rand()%10+1;
  }while (c<1 || c>6);
  switch (c)
    {
      case 1:
        {
          cout<< " El circulo se situa en A"<<endl<<endl; 
          for (cont=1; cont<=n; cont++)
            {
              do 
                {
                  p=rand ()%10+1;
                }while (p<1 || p>6);
              do 
                {
                  t=rand ()%10+1;
                }while (t<1 || t>5);
              cout<<" "<<cont<<" posicion " <<"el acorde "<<p <<" y el tiempo "<<t<<endl;
            }
          break;
        }

      case 2:
        {
          cout<< " El circulo se situa en B"<<endl<<endl; 
          for (cont=1; cont<=n; cont++)
            {
              do 
                {
                  p=rand ()%10+1;
                }while (p<1 || p>6);
              do 
                {
                  t=rand ()%10+1;
                }while (t<1 || t>5);
              cout<<" "<<cont<<" posicion " <<"el acorde "<<p <<" y el tiempo "<<t<<endl;
            }
          break;
        }
      case 3:
        {
          cout<< " El circulo se situa en C"<<endl<<endl; 
          for (cont=1; cont<=n; cont++)
            {
              do 
                {
                  p=rand ()%10+1;
                }while (p<1 || p>6);
              do 
                {
                  t=rand ()%10+1;
                }while (t<1 || t>5);
              cout<<" "<<cont<<" posicion " <<"el acorde "<<p <<" y el tiempo "<<t<<endl;
            }
          break;
        }
      case 4:
        {
          cout<< " El circulo se situa en D"<<endl<<endl; 
          for (cont=1; cont<=n; cont++)
            {
              do 
                {
                  p=rand ()%10+1;
                }while (p<1 || p>6);
              do 
                {
                  t=rand ()%10+1;
                }while (t<1 || t>5);
              cout<<" "<<cont<<" posicion " <<"el acorde "<<p <<" y el tiempo "<<t<<endl;
            }
          break;
        }
      case 5:
        {
          cout<< " El circulo se situa en E"<<endl<<endl; 
          for (cont=1; cont<=n; cont++)
            {
              do 
                {
                  p=rand ()%10+1;
                }while (p<1 || p>6);
              do 
                {
                  t=rand ()%10+1;
                }while (t<1 || t>5);
              cout<<" "<<cont<<" posicion " <<"el acorde "<<p <<" y el tiempo "<<t<<endl;
            }
          break;
        }
      case 6:
        {
          cout<< " El circulo se situa en F"<<endl<<endl; 
          for (cont=1; cont<=n; cont++)
            {
              do 
                {
                  p=rand ()%10+1;
                }while (p<1 || p>6);
              do 
                {
                  t=rand ()%10+1;
                }while (t<1 || t>5);
              cout<<" "<<cont<<" posicion " <<"el acorde "<<p <<" y el tiempo "<<t<<endl;
            }
          break;
        }
      case 7:
        {
          cout<< " El circulo se situa en G"<<endl<<endl; 
          for (cont=1; cont<=n; cont++)
            {
              do 
                {
                  p=rand ()%10+1;
                }while (p<1 || p>6);
              do 
                {
                  t=rand ()%10+1;
                }while (t<1 || t>5);
              cout<<" "<<cont<<" posicion " <<"el acorde "<<p <<" y el tiempo "<<t<<endl;
            }
          break;
        }
    }
  
}

void figura ()
{int f, n, t;
  cout<<" la figura es la siguiente: "<<endl;
  do 
    {
      n=rand()%10+1;
    }while (n<3 || n>6 );
  for (int cont=1; cont<=n; cont++)
    {
       do 
    {
      f=rand()%100+1;
    }while (f<1 || f>12);
      do 
    {
      
       t=rand ()%10+1;
    }while (t<1 || t>5);
  cout<<endl<<"nota "<<f<<" con tempo "<<t<<endl;
    }
  
  
      
  
}
};

int main () 
{
  srand(time(NULL));
  crearmusica d;
  d. tempo ();
  d. circulo ();
  d. figura();
  return 0;
}