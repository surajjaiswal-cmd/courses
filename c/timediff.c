
// mange time in hourse and minutes given by  user in minutes 
#include <stdio.h>
struct time
{
  int h;
  int m;
  int s;
};
struct time timediff(struct time a, struct time b)
{
  struct time ft;
  ft.h = b.h - a.h;
  ft.m = b.m - a.m;
  ft.s = b.s - a.s;

  if (ft.s < 0)
  {
    ft.s += 60;
    ft.m--;
  }
  if (ft.m < 0)
  {
    ft.m += 60;
    ft.h--;
  }
  if (ft.h < 0)
  {
    ft.h += 24;
  }
return ft;
}

int main()
{
  struct time t1, t2, dt;
  printf("enter is time = ");
  scanf("%d\t%d\t%d", &t1.h, &t1.m, &t1.s);
  printf("enter is time = ");
  scanf("%d\t%d\t%d", &t2.h, &t2.m, &t2.s);
      dt = timediff(t1, t2);
printf("the diffrance between time = %d %d %d",dt.h,dt.m,dt.s);
  return 0;
}