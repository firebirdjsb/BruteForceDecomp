/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 35235FB5A6F350890633579106299EB2564E42C7F667B4A02839FBBA3E31CB39
 * Entry: 0x002ea96c, Ghidra index: 10591, label: _wcsncpy
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    _wcsncpy
   
   Library: Visual Studio 2003 Release */

wchar_t * __cdecl _wcsncpy(wchar_t *__dest,wchar_t *__src,size_t __n)

{
  wchar_t wVar1;
  uint uVar2;
  uint uVar3;
  wchar_t *pwVar4;
  
  pwVar4 = __dest;
  if (__n != 0) {
    do {
      wVar1 = *__src;
      *pwVar4 = wVar1;
      pwVar4 = pwVar4 + 1;
      __src = __src + 1;
      if (wVar1 == L'\0') break;
      __n = __n - 1;
    } while (__n != 0);
    if ((__n != 0) && (uVar2 = __n - 1, uVar2 != 0)) {
      for (uVar3 = uVar2 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        pwVar4[0] = L'\0';
        pwVar4[1] = L'\0';
        pwVar4 = pwVar4 + 2;
      }
      for (uVar2 = (uint)((uVar2 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
        *pwVar4 = L'\0';
        pwVar4 = pwVar4 + 1;
      }
    }
  }
  return __dest;
}
