/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 09C717048323B51FB37E90831CB66DAE5C8B34AB3B1EBFCCEABB9223C1E10D2A
 * Entry: 0x0001cfc0, Ghidra index: 118, label: FUN_0001cfc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Address from mapped original XBE; ABI/runtime mapping remains unverified. */
extern uint32_t FUN_002ea01d(uint32_t guest_size);

void FUN_0001cfc0(void)

{
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = ((unsigned char *)(uintptr_t)0x00307250u);
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = (undefined4 *)FUN_002ea01d(0xac);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = 0;
  }
  *(undefined1 *)(puVar1 + 0x2a) = 1;
  *(undefined1 *)((int)puVar1 + 0xa9) = 0;
  *unaff_FS_OFFSET = local_10;
  return;
}
