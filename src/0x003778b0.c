/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AB910B268AD62DF8EF9F0A42D25D659069544332847D7C694AB2CB421D6D72FE
 * Entry: 0x003778b0, Ghidra index: 13458, label: FUN_003778b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_003778b0(undefined4 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *param_2;
  do {
    uVar4 = *(uint *)(iVar1 + 0x100);
    uVar3 = 0;
    if ((uVar4 & 0x1000) != 0) {
      uVar3 = FUN_00377cb0();
    }
    if ((uVar4 & 0xffffefff) != 0) {
      if ((uVar4 & 0x100000) != 0) {
        uVar2 = FUN_00377b60();
        uVar3 = uVar3 | uVar2;
      }
      if ((uVar4 & 0x1000000) != 0) {
        if (param_2[0x208] == 0 && param_2[0x209] == 0) {
          uVar2 = FUN_00377a50();
          uVar3 = uVar3 | uVar2;
        }
        else {
          do {
            *(undefined4 *)(iVar1 + 0x600100) = 1;
            uVar4 = *(uint *)(iVar1 + 0x100);
          } while ((uVar4 & 0x1000000) != 0);
        }
      }
      if ((uVar4 & 0x100) != 0) {
        uVar2 = FUN_00377d70(param_2);
        uVar3 = uVar3 | uVar2;
      }
      if (((uVar4 & 0x10000) != 0) && ((*(byte *)(*param_2 + 0x8100) & 1) != 0)) {
        *(undefined4 *)(*param_2 + 0x8100) = 1;
      }
    }
  } while (uVar3 != 0);
  param_2[0x29] = 0;
  *(int *)(iVar1 + 0x140) = param_2[0x2d];
  return;
}
