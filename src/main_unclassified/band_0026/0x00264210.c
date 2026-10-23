/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 60263A6C33B8C07510D9CF00EB05DE59D66A62406A0209E759CE6889E7731B05
 * Entry: 0x00264210, Ghidra index: 8698, label: FUN_00264210
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00264210(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *in_EDX;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  for (; param_1 != in_EDX; param_1 = param_1 + 1) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *param_1;
    }
    param_2 = param_2 + 1;
  }
  *unaff_FS_OFFSET = uVar1;
  return;
}
