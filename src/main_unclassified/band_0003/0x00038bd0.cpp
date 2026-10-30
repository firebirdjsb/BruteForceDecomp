/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7F4FD4A966BD4FD773EDA8D9647C1EE5B0C872DD5E1BC044E024CD5A0948A44B
 * Entry: 0x00038bd0, Ghidra index: 383, label: FUN_00038bd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_00038bd0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int *unaff_EBX;
  
  for (; (param_3 != param_5 || (param_2 != param_4)); param_2 = param_2 + 1) {
    uVar2 = (int)(param_2 + (param_2 >> 0x1f & 3U)) >> 2;
    iVar1 = uVar2 * -4;
    if (*(uint *)(param_3 + 8) <= uVar2) {
      uVar2 = uVar2 - *(uint *)(param_3 + 8);
    }
    if (*(int *)(*(int *)(*(int *)(param_3 + 4) + uVar2 * 4) + (param_2 + iVar1) * 4) == *unaff_EBX)
    break;
  }
  param_1[1] = param_3;
  *param_1 = param_2;
  return param_1;
}
