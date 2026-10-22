/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 46CF564B56C3289F061D95908A57D5DB3CFEE61EB875223C6447DBA6D07011F5
 * Entry: 0x000e1cb0, Ghidra index: 2780, label: FUN_000e1cb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE mapped VA 0x00307340; address reference only, symbol linkage unverified. */
extern unsigned char LAB_00307340;

void FUN_000e1cb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307340;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = (undefined4 *)FUN_002ea01d(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = *in_ECX;
    puVar1[3] = in_ECX[1];
    puVar1[4] = in_ECX[2];
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
