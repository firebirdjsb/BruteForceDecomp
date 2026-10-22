/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B83EC2BDFB89ECC0BE0A74A1A2ED62149BA0A22F992D72FEA2947273D1400074
 * Entry: 0x0003efa0, Ghidra index: 468, label: FUN_0003efa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0003efa0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *in_EDX;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *in_EDX;
    }
    param_1 = param_1 + 1;
  }
  *unaff_FS_OFFSET = uVar1;
  return;
}
