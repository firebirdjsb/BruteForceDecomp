/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 13DE99CCAB18F1720221A036EBB16E32CDFCA009C1C26852C70BDF3521A7FB5D
 * Entry: 0x00061c90, Ghidra index: 1038, label: FUN_00061c90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox image VA 0x00306f00; address-only label. Link definition and role unverified. */
extern unsigned char LAB_00306f00;

void FUN_00061c90(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00306f00;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00263580(param_4);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
