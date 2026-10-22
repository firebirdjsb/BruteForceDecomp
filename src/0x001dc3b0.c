/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6B1C820A73D2194CC62A65A6220C33C044A60D3BB6FBA6EC4AF499EACA374DAA
 * Entry: 0x001dc3b0, Ghidra index: 6547, label: FUN_001dc3b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dc3b0(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_003077e0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_0016df50(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
