/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DD041D32D8D0107AABA701FE848C765E1594DCB88D5BB6C1A9D76DFFC95343F5
 * Entry: 0x001d69d0, Ghidra index: 6369, label: FUN_001d69d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001d69d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (param_1 != param_2) {
    puVar3 = in_EAX + 3;
    puVar4 = param_1 + 2;
    do {
      *in_EAX = *param_1;
      uVar1 = puVar4[1];
      uVar2 = *puVar4;
      puVar3[-2] = puVar4[-1];
      puVar3[-1] = uVar2;
      *puVar3 = uVar1;
      puVar3[1] = puVar4[2];
      puVar3[2] = puVar4[3];
      param_1 = param_1 + 6;
      in_EAX = in_EAX + 6;
      puVar3 = puVar3 + 6;
      puVar4 = puVar4 + 6;
    } while (param_1 != param_2);
  }
  return;
}
