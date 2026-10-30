/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2FE9D0DAFB5BA331EADB4AECAC826E0488474EA2110E244D42C4658415611E10
 * Entry: 0x001de300, Ghidra index: 6650, label: FUN_001de300
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001de300(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  for (; param_1 != param_2; param_1 = param_1 + 0xb) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      param_3[4] = param_1[4];
      param_3[5] = param_1[5];
      param_3[6] = param_1[6];
      param_3[7] = param_1[7];
      param_3[8] = param_1[8];
      param_3[9] = param_1[9];
      param_3[10] = param_1[10];
    }
    param_3 = param_3 + 0xb;
  }
  *unaff_FS_OFFSET = uVar1;
  return;
}
