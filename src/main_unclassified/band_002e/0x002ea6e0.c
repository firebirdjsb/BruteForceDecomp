/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E96EC5152DFF3C4648F00572C6ED10D221E170BE7101DB0A0A0D6FE9E7B503F
 * Entry: 0x002ea6e0, Ghidra index: 10588, label: _memchr
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    _memchr
   
   Library: Visual Studio */

void * __cdecl _memchr(void *__s,int __c,size_t __n)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  bool bVar7;
  
  if (__n == 0) {
    return (void *)0x0;
  }
  uVar6 = __c & 0xff;
  while (((uint)__s & 3) != 0) {
    uVar2 = *(uint *)__s;
    __s = (void *)((int)__s + 1);
    if ((char)uVar2 == (char)__c) goto LAB_002ea776;
    __n = __n - 1;
    if (__n == 0) {
      return (void *)0x0;
    }
  }
  uVar2 = __n - 4;
  if (3 < __n) {
    uVar6 = uVar6 * 0x1010101;
    puVar4 = __s;
    do {
      __s = puVar4 + 1;
      if (((*puVar4 ^ uVar6 ^ 0xffffffff ^ (*puVar4 ^ uVar6) + 0x7efefeff) & 0x81010100) != 0) {
        uVar1 = *puVar4;
        cVar5 = (char)uVar6;
        if ((char)uVar1 == cVar5) {
          return puVar4;
        }
        if ((char)(uVar1 >> 8) == cVar5) {
          return (char *)((int)puVar4 + 1);
        }
        if ((char)(uVar1 >> 0x10) == cVar5) {
          return (char *)((int)puVar4 + 2);
        }
        if ((char)(uVar1 >> 0x18) == cVar5) goto LAB_002ea776;
      }
      bVar7 = 3 < uVar2;
      uVar2 = uVar2 - 4;
      puVar4 = __s;
    } while (bVar7);
  }
  iVar3 = uVar2 + 4;
  while( true ) {
    if (iVar3 == 0) {
      return (void *)0x0;
    }
    uVar2 = *(uint *)__s;
    __s = (void *)((int)__s + 1);
    if ((char)uVar2 == (char)uVar6) break;
    iVar3 = iVar3 + -1;
  }
LAB_002ea776:
  return (char *)((int)__s + -1);
}
