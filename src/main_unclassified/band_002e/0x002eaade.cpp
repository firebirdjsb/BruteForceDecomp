/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 27B69AC2A74E5CC8348050BC9BC35A46505B9497F71D03833F886DED75409C29
 * Entry: 0x002eaade, Ghidra index: 10596, label: _wcscmp
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    _wcscmp
   
   Library: Visual Studio 2003 Release */

int __cdecl _wcscmp(wchar_t *__s1,wchar_t *__s2)

{
  int iVar1;
  
  while( true ) {
    iVar1 = (uint)(ushort)*__s1 - (uint)(ushort)*__s2;
    if ((iVar1 != 0) || (*__s2 == L'\0')) break;
    __s1 = __s1 + 1;
    __s2 = __s2 + 1;
  }
  if (iVar1 < 0) {
    return -1;
  }
  if (0 < iVar1) {
    iVar1 = 1;
  }
  return iVar1;
}
