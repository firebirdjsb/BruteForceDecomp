/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 85714C01C2A876970B80BB44D930D1E1D299FE4D7920C334247AFEFFBEB971D2
 * Entry: 0x0004e470, Ghidra index: 668, label: FUN_0004e470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0004e720(int param_1,undefined4 param_2,undefined4 param_3);

void FUN_0004e470(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  for (param_2 = param_2 - (int)param_1; 1 < param_2 >> 3; param_2 = param_2 + -8) {
    uVar1 = *(undefined4 *)((int)param_1 + param_2 + -4);
    uVar2 = *(undefined4 *)((int)param_1 + param_2 + -8);
    *(undefined4 *)((int)param_1 + param_2 + -8) = *param_1;
    *(undefined4 *)((int)param_1 + param_2 + -4) = param_1[1];
    FUN_0004e720(param_1,uVar2,uVar1);
  }
  return;
}
