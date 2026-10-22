/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DEF74996A2E55F8547DCD01FD567929401549E31B131B52F3EAF02825FBB844B
 * Entry: 0x001e9d10, Ghidra index: 6865, label: FUN_001e9d10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e9d10(uint *param_1,uint *param_2,uint *param_3)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  
  iVar2 = (int)param_3 - (int)param_1 >> 5;
  if (iVar2 < 0x29) {
    if (*param_2 < *param_1) {
      FUN_001e9f00();
    }
    if (*param_3 < *param_2) {
      FUN_001e9f00();
    }
    if (*param_2 < *param_1) {
      FUN_001e9f00();
    }
  }
  else {
    iVar2 = iVar2 + 1;
    iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
    puVar1 = param_1 + iVar2 * 8;
    if (param_1[iVar2 * 8] < *param_1) {
      FUN_001e9f00();
    }
    if (param_1[iVar2 * 0x10] < *puVar1) {
      FUN_001e9f00();
    }
    if (*puVar1 < *param_1) {
      FUN_001e9f00();
    }
    if (*param_2 < param_2[iVar2 * -8]) {
      FUN_001e9f00();
    }
    if (param_2[iVar2 * 8] < *param_2) {
      FUN_001e9f00();
    }
    if (*param_2 < param_2[iVar2 * -8]) {
      FUN_001e9f00();
    }
    puVar3 = param_3 + iVar2 * -8;
    if (*puVar3 < param_3[iVar2 * -0x10]) {
      FUN_001e9f00();
    }
    if (*param_3 < *puVar3) {
      FUN_001e9f00();
    }
    if (*puVar3 < param_3[iVar2 * -0x10]) {
      FUN_001e9f00();
    }
    if (*param_2 < *puVar1) {
      FUN_001e9f00();
    }
    if (*puVar3 < *param_2) {
      FUN_001e9f00();
    }
    if (*param_2 < *puVar1) {
      FUN_001e9f00();
      return;
    }
  }
  return;
}
