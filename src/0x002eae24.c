/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B4CCEDFEE8BDE5A8BDD1F0D2E47DD28777E643A288708E0A6E0E5F54393ABA58
 * Entry: 0x002eae24, Ghidra index: 10602, label: _atol
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    _atol
   
   Library: Visual Studio 2003 Release */

long __cdecl _atol(char *__nptr)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  
  while( true ) {
    iVar1 = FUN_002ee49d(*__nptr);
    if (iVar1 == 0) break;
    __nptr = __nptr + 1;
  }
  uVar2 = (uint)(byte)*__nptr;
  pbVar5 = (byte *)(__nptr + 1);
  if ((uVar2 == 0x2d) || (uVar3 = uVar2, uVar2 == 0x2b)) {
    uVar3 = (uint)*pbVar5;
    pbVar5 = (byte *)(__nptr + 2);
  }
  iVar1 = 0;
  while( true ) {
    if ((uVar3 < 0x30) || (0x39 < uVar3)) {
      iVar4 = -1;
    }
    else {
      iVar4 = uVar3 - 0x30;
    }
    if (iVar4 == -1) break;
    iVar1 = iVar4 + iVar1 * 10;
    uVar3 = (uint)*pbVar5;
    pbVar5 = pbVar5 + 1;
  }
  if (uVar2 == 0x2d) {
    iVar1 = -iVar1;
  }
  return iVar1;
}
