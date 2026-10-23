/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F65E515929F16D45057C6330172FC6306FA269437CED5BA99617753CFB8FEB89
 * Entry: 0x002fd240, Ghidra index: 10990, label: FUN_002fd240
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002fd240(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int local_c;
  
  iVar4 = param_1;
  while( true ) {
    iVar2 = iVar4 >> 2;
    iVar4 = iVar4 >> 3;
    iVar3 = iVar2;
    if (iVar2 < 0x81) break;
    for (; iVar3 < param_1; iVar3 = iVar3 * 4) {
      iVar5 = iVar3 - iVar2;
      if (iVar5 < param_1) {
        iVar1 = param_4 + (param_3 - iVar4) * 4;
        do {
          FUN_002fb3a0(iVar2,iVar1);
          FUN_002fb770(iVar2,param_4 + (param_3 - iVar2) * 4);
          FUN_002fb3a0(iVar2,iVar1);
          iVar5 = iVar5 + iVar3 * 4;
        } while (iVar5 < param_1);
      }
    }
    FUN_002fb3a0(iVar2,param_4 + (param_3 - iVar4) * 4);
    iVar4 = iVar2;
  }
  for (; iVar3 < param_1; iVar3 = iVar3 * 4) {
    local_c = iVar3 - iVar2;
    if (local_c < param_1) {
      iVar5 = param_4 + (param_3 - iVar4) * 4;
      do {
        FUN_002fb3a0(iVar2,iVar5);
        if (iVar2 == 0x80) {
          FUN_002fbce0();
          FUN_002fc290();
          FUN_002fbce0();
          FUN_002fbce0();
        }
        else {
          FUN_002fc910();
          FUN_002fcb00();
          FUN_002fc910();
          FUN_002fc910();
        }
        FUN_002fb770(iVar2,param_4 + (param_3 - iVar2) * 4);
        if (iVar2 == 0x80) {
          FUN_002fbce0();
          FUN_002fc290();
          FUN_002fbce0();
          FUN_002fc290();
        }
        else {
          FUN_002fc910();
          FUN_002fcb00();
          FUN_002fc910();
          FUN_002fcb00();
        }
        FUN_002fb3a0(iVar2,iVar5);
        if (iVar2 == 0x80) {
          FUN_002fbce0();
          FUN_002fc290();
          FUN_002fbce0();
          FUN_002fbce0();
        }
        else {
          FUN_002fc910();
          FUN_002fcb00();
          FUN_002fc910();
          FUN_002fc910();
        }
        local_c = local_c + iVar3 * 4;
      } while (local_c < param_1);
    }
  }
  FUN_002fb3a0(iVar2,param_4 + (param_3 - iVar4) * 4);
  if (iVar2 == 0x80) {
    FUN_002fbce0();
    FUN_002fc290();
    FUN_002fbce0();
    FUN_002fbce0();
    return;
  }
  FUN_002fc910();
  FUN_002fcb00();
  FUN_002fc910();
  FUN_002fc910();
  return;
}
