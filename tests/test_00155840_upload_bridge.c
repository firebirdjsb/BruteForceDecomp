#include "bf_00155840_upload_bridge.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BASE UINT32_C(0x0037e000)
#define SIZE 8192u
#define EBP (BASE+UINT32_C(0x1800))
#define CHECK(x) do {++checks;if(!(x)){fprintf(stderr,"FAIL line %d: %s\n",__LINE__,#x);exit(1);}}while(0)
typedef struct memory { unsigned char b[SIZE]; uint32_t ra[32],wa[32]; unsigned reads,writes,fail_read,fail_write;} memory;
static unsigned checks;
static bool mapped(uint32_t a){return a>=BASE && (uint64_t)(a-BASE)+4<=SIZE;}
static bool rd(void*v,uint32_t a,uint32_t *p){memory*m=v;m->ra[m->reads++]=a;if(m->reads==m->fail_read||!mapped(a))return false;memcpy(p,m->b+(a-BASE),4);return true;}
static bool wr(void*v,uint32_t a,uint32_t x){memory*m=v;m->wa[m->writes++]=a;if(m->writes==m->fail_write||!mapped(a))return false;memcpy(m->b+(a-BASE),&x,4);return true;}
static void put(memory*m,uint32_t a,uint32_t b){CHECK(mapped(a));memcpy(m->b+(a-BASE),&b,4);}
static uint32_t get(memory*m,uint32_t a){uint32_t v;CHECK(mapped(a));memcpy(&v,m->b+(a-BASE),4);return v;}
static void init(memory*m,uint32_t ebp,unsigned seed){memset(m,0,sizeof *m);for(unsigned i=0;i<12;i++)put(m,ebp-0x68u+4u*i,0x7f000000u^(seed*0x9e3779b9u)^(i*0x01010305u));}
int main(void){memory*m=malloc(sizeof *m);CHECK(m);const bf_621c0_guest_words io={m,rd,wr};
 const bf_00155840_shader_call s=bf_00155840_shader_input(EBP);
 CHECK(s.ecx_guest==27u && s.edx_guest==EBP-0x68u && s.pushed_word==12u);
 for(unsigned seed=1;seed<=512;seed++){
  init(m,EBP,seed);uint32_t fault=42;
  CHECK(bf_00155840_copy_shader_words(&io,EBP,0,&fault)==BF_00155840_UPLOAD_OK);
  CHECK(fault==0 && m->reads==12 && m->writes==12);
  for(unsigned i=0;i<12;i++){
   CHECK(m->ra[i]==EBP-0x68u+4u*i);
   CHECK(m->wa[i]==BF_00155840_UPLOAD_DEST+4u*i);
   CHECK(get(m,m->wa[i])==get(m,m->ra[i]));
  }
  init(m,EBP,seed);CHECK(bf_00155840_copy_shader_words(&io,EBP,0x10u,&fault)==BF_00155840_UPLOAD_OK);
  CHECK(m->reads==0&&m->writes==0);
 }
 /* REP MOVSD goes forward even when output lies 8 bytes ahead of input. */
 const uint32_t overlapping_ebp=BF_00155840_UPLOAD_DEST+0x68u-8u;
 init(m,overlapping_ebp,17);
 CHECK(bf_00155840_copy_shader_words(&io,overlapping_ebp,0,NULL)==BF_00155840_UPLOAD_OK);
 for(unsigned i=2;i<12;i++)CHECK(get(m,BF_00155840_UPLOAD_DEST+4u*i)==
                                 get(m,BF_00155840_UPLOAD_DEST+4u*(i-2)));
 for(unsigned fail=1;fail<=12;fail++){
  uint32_t fault=0;
  init(m,EBP,3);m->fail_read=fail;
  CHECK(bf_00155840_copy_shader_words(&io,EBP,0,&fault)==BF_00155840_UPLOAD_READ_FAILED);
  CHECK(fault==EBP-0x68u+4u*(fail-1)&&m->writes==fail-1);
  init(m,EBP,3);m->fail_write=fail;
  CHECK(bf_00155840_copy_shader_words(&io,EBP,0,&fault)==BF_00155840_UPLOAD_WRITE_FAILED);
  CHECK(fault==BF_00155840_UPLOAD_DEST+4u*(fail-1)&&m->reads==fail);
 }
 CHECK(bf_00155840_copy_shader_words(NULL,EBP,0,NULL)==BF_00155840_UPLOAD_INVALID_INTERFACE);
 printf("PASS 00155840 upload contract: %u assertions\n",checks);free(m);return 0;}
