/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BB687BB5EF44963EF65749D5A9B73F46E8212009208332E954CDCDDDFDE6C11C
 * Entry: 0x000619d0, Ghidra index: 1031, label: FUN_000619d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox image VA 0x003071f0; address-only label. Link definition and role unverified. */
extern void FUN_00061b70(void);

extern unsigned char LAB_003071f0;

void FUN_000619d0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_003071f0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_00061b70(param_4);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
