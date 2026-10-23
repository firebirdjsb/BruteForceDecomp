/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BD62839A2B5BFB4686758F23C815585AE5C79F73D921A068C9D5F28B17E1CDCE
 * Entry: 0x001e0cf0, Ghidra index: 6721, label: FUN_001e0cf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001e0cf0(undefined2 *param_1,undefined2 *param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined2 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  *unaff_FS_OFFSET = uVar1;
  return;
}
