/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A2F3885E69E68732D7AB20C4480318406A45EF6D1098093235C78C2978D31BA8
 * Entry: 0x00264280, Ghidra index: 8699, label: FUN_00264280
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00264280(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
    }
    param_3 = param_3 + 2;
  }
  *unaff_FS_OFFSET = uVar1;
  return;
}
