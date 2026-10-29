/* Finite bounded operation check using actual 0x00233B10 C source. */
#include <assert.h>
#include <math.h>
#include <stdint.h>
#include <string.h>
#include "bf_0012b250_blend_operation.h"
#include "bf_002333b0_matrix_operation.h"
static void near(float a,float b){assert(fabsf(a-b)<0.0002f);}
static void run(const float *left,const float *right,float ratio){
  float x[4]={0};
  struct {uint32_t pre;float q[4];uint32_t post;} frame={0xabcdeabcU,{0},0x12345678U};
  float *a=FUN_00233b10(x,(float*)left,(float*)right,ratio);
  float *b=bf_0012b250_blend_operation(frame.q,(float*)left,(float*)right,ratio);
  assert(a==x && b==frame.q && memcmp(x,frame.q,sizeof x)==0);
  assert(frame.pre==0xabcdeabcU && frame.post==0x12345678U);
  float mat[9];bf_002333b0_matrix_operation(mat,frame.q);
  for(int i=0;i<9;i++)assert(isfinite(mat[i]));
}
int main(void){
  const float a[4]={1,0,0,0},b[4]={0.70710677f,0.70710677f,0,0},c[4]={-1,0,0,0};
  for(int t=0;t<=8;t++){float ratio=t/8.0f;run(a,b,ratio);run(b,a,ratio);run(a,c,ratio);}
  float mat[11];for(int i=0;i<11;i++)mat[i]=42.0f;
  bf_002333b0_matrix_operation(mat+1,a);
  assert(mat[0]==42.0f && mat[10]==42.0f);
  const float identity[9]={1,0,0,0,1,0,0,0,1};
  for(int i=0;i<9;i++)near(mat[i+1],identity[i]);
  return 0;
}
