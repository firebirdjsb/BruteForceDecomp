/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B853F8B0D59DB89C450BD96DD31A3FE79D576D34990E634104064013A2EE2F0F
 * Entry: 0x001dc420, Ghidra index: 6548, label: FUN_001dc420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001dc420(undefined4 param_1,int param_2)

{
  undefined4 in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_003073f0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_0015eb60(in_ECX);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
