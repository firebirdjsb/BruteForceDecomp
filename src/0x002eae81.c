/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B2B89783615458F1BAEB0D8A165A458FCDB1FDB7596F718896947143FDB8351
 * Entry: 0x002eae81, Ghidra index: 10604, label: __atoi64
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Library Function - Single Match
    __atoi64
   
   Library: Visual Studio 2003 Release */

longlong __atoi64(byte *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  longlong lVar5;
  
  while( true ) {
    iVar1 = FUN_002ee49d(*param_1);
    if (iVar1 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar2 = (uint)*param_1;
  pbVar4 = param_1 + 1;
  if ((uVar2 == 0x2d) || (uVar3 = uVar2, uVar2 == 0x2b)) {
    uVar3 = (uint)*pbVar4;
    pbVar4 = param_1 + 2;
  }
  lVar5 = 0;
  while( true ) {
    if ((uVar3 < 0x30) || (0x39 < uVar3)) {
      iVar1 = -1;
    }
    else {
      iVar1 = uVar3 - 0x30;
    }
    if (iVar1 == -1) break;
    lVar5 = __allmul(lVar5,10,0);
    uVar3 = (uint)*pbVar4;
    lVar5 = lVar5 + iVar1;
    pbVar4 = pbVar4 + 1;
  }
  if (uVar2 == 0x2d) {
    lVar5 = CONCAT44(-((int)((ulonglong)lVar5 >> 0x20) + (uint)((int)lVar5 != 0)),-(int)lVar5);
  }
  return lVar5;
}
