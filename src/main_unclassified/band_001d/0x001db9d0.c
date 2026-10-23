/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 52D4433AFE759179CC7EC0BDC35E0475C87EFEA8BD3BA44B7241202F06FA60CD
 * Entry: 0x001db9d0, Ghidra index: 6530, label: FUN_001db9d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001db9d0(int param_1,int param_2)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_003096c0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != 0) {
      FUN_001ca390();
    }
    param_1 = param_1 + 0x368;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
