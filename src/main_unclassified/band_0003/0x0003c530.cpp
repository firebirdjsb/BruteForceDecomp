/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 60393D640B93ED1DE67D73CC5C1258B175B94C43DC84B29986CDFC5AAF77452C
 * Entry: 0x0003c530, Ghidra index: 430, label: FUN_0003c530
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Original mapped address; ABI/relocations unverified. */
extern uint32_t FUN_002ea01d(uint32_t guest_size);
extern void FUN_0003c620(undefined1 param_1);

int FUN_0003c530(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 in_stack_00000018;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = ((unsigned char *)(uintptr_t)0x003089f0u);
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar1 = FUN_002ea01d(0xac);
  local_8 = 0;
  if (iVar1 != 0) {
    FUN_0003c620(in_stack_00000018);
  }
  *unaff_FS_OFFSET = local_10;
  return iVar1;
}
