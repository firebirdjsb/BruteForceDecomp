/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5AD44BF0464767D827866651056FD74C057A5C244D8CCC10F94E399C860C7116
 * Entry: 0x001268b0, Ghidra index: 3717, label: FUN_001268b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_001268b0(int *param_1,char param_2,char param_3,char param_4)

{
  int iVar1;
  int unaff_retaddr;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  if (param_2 == '\0') {
    FUN_0011e1d0(param_1);
    FUN_0011e3f0();
    (**(code **)(*param_1 + 0x4c))(param_1[0x1b] + 0x14);
    iVar1 = *(int *)(unaff_retaddr + 0x6c);
    fStack_10 = -*(float *)(iVar1 + 0x1c) * 0.01;
    fStack_c = -*(float *)(iVar1 + 0x28) * 0.01;
    fStack_8 = -*(float *)(iVar1 + 0x34) * 0.01;
    (**(code **)(*(int *)(unaff_retaddr + 0x1b4) + 0x3c))(&fStack_10);
  }
  else {
    if (param_4 == '\0') {
      FUN_0011fd20();
    }
    if (param_3 == '\0') {
      FUN_0011fcd0();
    }
  }
  *(byte *)(param_1 + 0x1f6) =
       *(byte *)(param_1 + 0x1f6) ^ (param_2 << 4 ^ *(byte *)(param_1 + 0x1f6)) & 0x10;
  *(byte *)(param_1 + 0x1f6) =
       *(byte *)(param_1 + 0x1f6) ^ (param_3 << 5 ^ *(byte *)(param_1 + 0x1f6)) & 0x20;
  *(byte *)(param_1 + 0x1f6) =
       *(byte *)(param_1 + 0x1f6) ^ (param_4 << 6 ^ *(byte *)(param_1 + 0x1f6)) & 0x40;
  return;
}
