/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 32A6D25131206CD09AE11562D43B23EE553B5FCE38CF46F1F8D65C0BF84248DB
 * Entry: 0x00050d90, Ghidra index: 725, label: FUN_00050d90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_001d59e0(void);
extern void FUN_00248d00(void);

void FUN_00050d90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_2 == param_3) {
    *param_1 = param_4;
    return;
  }
  do {
    puVar2 = param_3 + -0x20;
    puVar3 = param_4 + -0x20;
    if (puVar3 != puVar2) {
      *puVar3 = *puVar2;
      param_4[-0x1f] = param_3[-0x1f];
      param_4[-0x1e] = param_3[-0x1e];
      param_4[-9] = param_3[-9];
      puVar4 = param_3 + -0x1d;
      puVar5 = param_4 + -0x1d;
      for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      FUN_001d59e0();
      FUN_00248d00();
    }
    param_3 = puVar2;
    param_4 = puVar3;
  } while (puVar2 != param_2);
  *param_1 = puVar3;
  return;
}
