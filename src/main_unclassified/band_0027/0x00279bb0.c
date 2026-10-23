/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C19C11C264BFA3F5A97E5D852E4B77C0413CD451D123CF16CA3F1511F35A9B4A
 * Entry: 0x00279bb0, Ghidra index: 8931, label: FUN_00279bb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00279bb0(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00306ec0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  iVar1 = FUN_002ea01d(0x1c);
  if (iVar1 != 0) {
    *(int *)iVar1 = iVar1;
  }
  if ((int *)(iVar1 + 4) != (int *)0x0) {
    *(int *)(iVar1 + 4) = iVar1;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
