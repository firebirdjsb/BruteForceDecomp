/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 22006E25651E484A1C6BE63BDE03C539BB04291083659EF03ADADD480F32D18E
 * Entry: 0x002eab10, Ghidra index: 10597, label: _strncpy
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    _strncpy
   
   Library: Visual Studio */

char * __cdecl _strncpy(char *__dest,char *__src,size_t __n)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  uint *puVar5;
  
  if (__n == 0) {
    return __dest;
  }
  puVar5 = (uint *)__dest;
  if (((uint)__src & 3) != 0) {
    while( true ) {
      uVar4 = *(uint *)__src;
      __src = (char *)((int)__src + 1);
      *(char *)puVar5 = (char)uVar4;
      puVar5 = (uint *)((int)puVar5 + 1);
      __n = __n - 1;
      if (__n == 0) {
        return __dest;
      }
      if ((char)uVar4 == '\0') break;
      if (((uint)__src & 3) == 0) {
        uVar4 = __n >> 2;
        goto joined_r0x002eab5c;
      }
    }
    do {
      if (((uint)puVar5 & 3) == 0) {
        uVar4 = __n >> 2;
        cVar3 = '\0';
        if (uVar4 == 0) goto LAB_002eaba3;
        goto LAB_002eac19;
      }
      *(char *)puVar5 = '\0';
      puVar5 = (uint *)((int)puVar5 + 1);
      __n = __n - 1;
    } while (__n != 0);
    return __dest;
  }
  uVar4 = __n >> 2;
  if (uVar4 != 0) {
    do {
      uVar1 = *(uint *)__src;
      uVar2 = *(uint *)__src;
      __src = (char *)((int)__src + 4);
      if (((uVar1 ^ 0xffffffff ^ uVar1 + 0x7efefeff) & 0x81010100) != 0) {
        if ((char)uVar2 == '\0') {
          *puVar5 = 0;
joined_r0x002eac15:
          while( true ) {
            uVar4 = uVar4 - 1;
            puVar5 = puVar5 + 1;
            if (uVar4 == 0) break;
LAB_002eac19:
            *puVar5 = 0;
          }
          cVar3 = '\0';
          __n = __n & 3;
          if (__n != 0) goto LAB_002eaba3;
          return __dest;
        }
        if ((char)(uVar2 >> 8) == '\0') {
          *puVar5 = uVar2 & 0xff;
          goto joined_r0x002eac15;
        }
        if ((uVar2 & 0xff0000) == 0) {
          *puVar5 = uVar2 & 0xffff;
          goto joined_r0x002eac15;
        }
        if ((uVar2 & 0xff000000) == 0) {
          *puVar5 = uVar2;
          goto joined_r0x002eac15;
        }
      }
      *puVar5 = uVar2;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
joined_r0x002eab5c:
    } while (uVar4 != 0);
    __n = __n & 3;
    if (__n == 0) {
      return __dest;
    }
  }
  do {
    cVar3 = (char)*(uint *)__src;
    __src = (char *)((int)__src + 1);
    *(char *)puVar5 = cVar3;
    puVar5 = (uint *)((int)puVar5 + 1);
    if (cVar3 == '\0') {
      while (__n = __n - 1, __n != 0) {
LAB_002eaba3:
        *(char *)puVar5 = cVar3;
        puVar5 = (uint *)((int)puVar5 + 1);
      }
      return __dest;
    }
    __n = __n - 1;
  } while (__n != 0);
  return __dest;
}
