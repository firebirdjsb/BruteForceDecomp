/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 68C51ECBA26E505ADB748B40CDD2A6D970DD7CD5C6128C9C9DCF509F0F3B8002
 * Entry: 0x000e0fc0, Ghidra index: 2761, label: FUN_000e0fc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE mapped VA 0x00307170; address reference only, symbol linkage unverified. */
extern unsigned char LAB_00307170;

void FUN_000e0fc0(void)

{
  int iVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307170;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  iVar1 = FUN_002ea01d(0x38);
  if (iVar1 != 0) {
    *(int *)iVar1 = iVar1;
  }
  if ((int *)(iVar1 + 4) != (int *)0x0) {
    *(int *)(iVar1 + 4) = iVar1;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
