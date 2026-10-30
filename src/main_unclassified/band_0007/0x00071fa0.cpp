/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F46B465D2F6405B7502D9D9F43AF7072F11CCDF115CC485297B50F5990BB94ED
 * Entry: 0x00071fa0, Ghidra index: 1272, label: FUN_00071fa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00071fa0(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined1 local_10 [12];
  
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  *unaff_FS_OFFSET = uVar1;
  return;
}
