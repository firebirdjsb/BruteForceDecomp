/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8BA5872FD84FC2C10A3DA7DCD719ACB3F6B29719E87FB5EA3F1B72D49A0F52FA
 * Entry: 0x00138fe0, Ghidra index: 3934, label: FUN_00138fe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox image address 0x00306e80; address-only label pending link definition. */
extern unsigned char LAB_00306e80;

void FUN_00138fe0(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00306e80;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  puVar1 = (undefined4 *)FUN_002ea01d(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 8) = 1;
  *(undefined1 *)((int)puVar1 + 0x21) = 0;
  *unaff_FS_OFFSET = local_10;
  return;
}
