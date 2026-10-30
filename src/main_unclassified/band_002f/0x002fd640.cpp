/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E6B7076D4855BF6BEB3AA910EFA5C50CF74BA4A313ACB3FD38F37812A38228A7
 * Entry: 0x002fd640, Ghidra index: 10991, label: FUN_002fd640
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002fd640(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  iVar5 = in_EAX >> 1;
  while( true ) {
    iVar3 = in_EAX >> 2;
    iVar4 = in_EAX >> 3;
    iVar2 = iVar3;
    if (iVar3 < 0x81) break;
    for (; in_EAX = iVar3, iVar2 < iVar5; iVar2 = iVar2 * 4) {
      iVar6 = iVar2 - iVar3;
      if (iVar6 < iVar5) {
        iVar1 = param_3 + (param_2 - iVar4) * 4;
        do {
          FUN_002fb3a0(iVar3,iVar1);
          FUN_002fb3a0(iVar3,iVar1);
          iVar6 = iVar6 + iVar2 * 2;
        } while (iVar6 < iVar5);
      }
      iVar6 = iVar2 * 2 - iVar3;
      if (iVar6 < iVar5) {
        iVar1 = param_3 + (param_2 - iVar3) * 4;
        do {
          FUN_002fb770(iVar3,iVar1);
          FUN_002fb770(iVar3,iVar1);
          iVar6 = iVar6 + iVar2 * 4;
        } while (iVar6 < iVar5);
      }
    }
  }
  for (; iVar2 < iVar5; iVar2 = iVar2 * 4) {
    local_8 = iVar2 - iVar3;
    if (local_8 < iVar5) {
      iVar6 = param_3 + (param_2 - iVar4) * 4;
      do {
        FUN_002fb3a0(iVar3,iVar6);
        if (iVar3 == 0x80) {
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
        FUN_002fb3a0(iVar3,iVar6);
        if (iVar3 == 0x80) {
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
        local_8 = local_8 + iVar2 * 2;
      } while (local_8 < iVar5);
    }
    local_8 = iVar2 * 2 - iVar3;
    if (local_8 < iVar5) {
      iVar6 = param_3 + (param_2 - iVar3) * 4;
      do {
        FUN_002fb770(iVar3,iVar6);
        if (iVar3 == 0x80) {
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
        FUN_002fb770(iVar3,iVar6);
        if (iVar3 == 0x80) {
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
        local_8 = local_8 + iVar2 * 4;
      } while (local_8 < iVar5);
    }
  }
  return;
}
