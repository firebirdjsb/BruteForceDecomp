/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D904FE1429B72D8A7ABEC24C922E5C062CE6805B0BB565723EE04D9407F8754
 * Entry: 0x00085710, Ghidra index: 1565, label: FUN_00085710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Address-only XBE labels; symbol definitions / roles pending. */
extern uint32_t FUN_002ea01d(uint32_t guest_size);

extern unsigned char LAB_003071c0; /* VA 0x003071c0 */

void FUN_00085710(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_003071c0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = FUN_002ea01d(0x4c);
  if (iVar1 != 0) {
    *(int *)iVar1 = iVar1;
  }
  if ((int *)(iVar1 + 4) != (int *)0x0) {
    *(int *)(iVar1 + 4) = iVar1;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
