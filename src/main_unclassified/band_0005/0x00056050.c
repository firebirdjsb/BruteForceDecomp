/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FDDD9A0E7E1C9961986E368AEAAA2AA3491EC17A68ADC386015309DCF0ED5AEC
 * Entry: 0x00056050, Ghidra index: 827, label: FUN_00056050
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00056050(uint *param_1,uint param_2,int param_3,uint param_4,int param_5,uint param_6,
                 uint param_7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  for (; (param_3 != param_5 || (param_2 != param_4)); param_2 = param_2 + 1) {
    uVar3 = param_2;
    if (*(uint *)(param_3 + 8) <= param_2) {
      uVar3 = param_2 - *(uint *)(param_3 + 8);
    }
    uVar2 = param_6;
    if (*(uint *)(param_7 + 8) <= param_6) {
      uVar2 = param_6 - *(uint *)(param_7 + 8);
    }
    iVar1 = *(int *)(*(int *)(param_3 + 4) + uVar3 * 4);
    if (*(int *)(*(int *)(param_7 + 4) + uVar2 * 4) != iVar1) {
      FUN_00055790(iVar1);
    }
    param_6 = param_6 + 1;
  }
  *param_1 = param_6;
  param_1[1] = param_7;
  return;
}
