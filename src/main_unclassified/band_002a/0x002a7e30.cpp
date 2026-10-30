/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B81F8AFEF786BA385BC7094C85C022C6654D3253CD77DED7C7E59875F4040796
 * Entry: 0x002a7e30, Ghidra index: 9604, label: FUN_002a7e30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_002a7e30(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000018;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  /* Original entry+5: push 0x00307280; guest SEH handler VA, not a host symbol. */
  puStack_c = (undefined1 *)(uintptr_t)0x00307280U;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar1 = FUN_002ea01d(0x18);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_002a7ec0(in_stack_00000010,in_stack_00000018);
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
