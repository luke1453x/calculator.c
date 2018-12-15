#include <stdio.h>


// Coded By LukeHobbs Calculator


// 15.12.2018  .... .... ... ... ... ... ...




int main(){

  double xx1 = 0.0, xx2 = 0.0, cevap = 0.0;
  char islem = 'x';

  fprintf(stdout, "<xx1> <islem> <xx2> : ");
  fprintf(stderr,"+ - * /");
  scanf("%lf %c %lf", &xx1, &islem, &xx2);

  switch (islem)
  {
    case '+':
    cevap = xx1 + xx2;
      break;
    case '-':
    cevap = xx1 - xx2;
      break;
    case '*':
    cevap = xx1 * xx2;
      break;
    case '/':
    cevap = xx1 / xx2;
      break;
    default:
    cevap = 0;
      break;
  }

  fprintf(stdout, "%lf\n", cevap);

  return 0;
}



// Coded By LukeHobbs...
