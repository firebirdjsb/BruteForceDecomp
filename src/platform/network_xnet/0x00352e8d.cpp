/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 09411413E80D644C16233BF8C4A10B9AAD36FE404964627AC0FB9C4797EBBD14
 * Entry: 0x00352e8d, Ghidra index: 13072, label: FUN_00352e8d
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00352e8d(undefined4 *param_1,uint param_2)

{
  int *in_ECX;
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_2 <= (uint)in_ECX[1]) {
    puVar2 = (undefined4 *)*in_ECX;
    for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = *param_1;
      param_1 = param_1 + 1;
      puVar2 = puVar2 + 1;
    }
    for (uVar1 = param_2 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined1 *)puVar2 = *(undefined1 *)param_1;
      param_1 = (undefined4 *)((int)param_1 + 1);
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    *in_ECX = *in_ECX + param_2;
    in_ECX[1] = in_ECX[1] - param_2;
  }
  return;
}
