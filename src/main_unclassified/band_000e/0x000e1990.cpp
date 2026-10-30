/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D9B2942B8DFC040AA66AE575F1FAFD8CD902A633C246E722057B459EADF7A5DF
 * Entry: 0x000e1990, Ghidra index: 2775, label: FUN_000e1990
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE mapped VA 0x00307dd0; address reference only, symbol linkage unverified. */
extern unsigned char LAB_00307dd0;

undefined4 * FUN_000e1990(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307dd0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  puVar1 = (undefined4 *)FUN_002ea01d(0x38);
  local_8 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    FUN_000e1ff0();
  }
  *unaff_FS_OFFSET = local_10;
  return puVar1;
}
