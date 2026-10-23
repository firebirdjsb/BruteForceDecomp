/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1375F1D9E4548AE56A29ECE864F13A6FD2D2AAFD5945E1FCBDC719E22FE0F6CC
 * Entry: 0x002fe7f5, Ghidra index: 11032, label: _wcsstr
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    _wcsstr
   
   Library: Visual Studio 2003 Release */

wchar_t * __cdecl _wcsstr(wchar_t *__haystack,wchar_t *__needle)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  int iVar3;
  
  if (*__needle != L'\0') {
    wVar1 = *__haystack;
    if (wVar1 != L'\0') {
      iVar3 = (int)__haystack - (int)__needle;
      pwVar2 = __needle;
joined_r0x002fe81a:
      do {
        if (wVar1 != L'\0') {
          if (*pwVar2 == L'\0') {
            return __haystack;
          }
          if (*(wchar_t *)(iVar3 + (int)pwVar2) == *pwVar2) {
            wVar1 = *(wchar_t *)(iVar3 + (int)(pwVar2 + 1));
            pwVar2 = pwVar2 + 1;
            goto joined_r0x002fe81a;
          }
        }
        if (*pwVar2 == L'\0') {
          return __haystack;
        }
        __haystack = __haystack + 1;
        wVar1 = *__haystack;
        iVar3 = iVar3 + 2;
        pwVar2 = __needle;
      } while (wVar1 != L'\0');
    }
    __haystack = (wchar_t *)0x0;
  }
  return __haystack;
}
