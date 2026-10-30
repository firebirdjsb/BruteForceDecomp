/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 90E15E221D8764AC86415119842AA426121C676310603A90FFC928B7BC1DAC74
 * Entry: 0x001d90b0, Ghidra index: 6454, label: FUN_001d90b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_001d90b0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_2 != param_3) {
    puVar2 = (undefined4 *)(param_3 + 8);
    puVar3 = (undefined4 *)(param_4 + 8);
    do {
      *(undefined4 *)(param_4 + -0x6c) = *(undefined4 *)(param_3 + -0x6c);
      puVar3[-0x1c] = puVar2[-0x1c];
      param_3 = param_3 + -0x6c;
      param_4 = param_4 + -0x6c;
      puVar4 = puVar2 + -0x1b;
      puVar5 = puVar3 + -0x1b;
      for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar4 = puVar2 + -0x16;
      puVar5 = puVar3 + -0x16;
      for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar4 = puVar2 + -0x11;
      puVar5 = puVar3 + -0x11;
      for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar4 = puVar2 + -0xc;
      puVar5 = puVar3 + -0xc;
      for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar4 = puVar2 + -7;
      puVar5 = puVar3 + -7;
      for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar2 = puVar2 + -0x1b;
      puVar3 = puVar3 + -0x1b;
    } while (param_3 != param_2);
    *param_1 = param_4;
    return param_1;
  }
  *param_1 = param_4;
  return param_1;
}
