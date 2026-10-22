/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0A8544D5BAA2757B8FF029DD8DC98E764A73CE0116979A6285F2A2F475A55603
 * Entry: 0x000f6790, Ghidra index: 3079, label: FUN_000f6790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original XBE mapped VA 0x00307150; extern address-only, definition TODO. */
extern unsigned char LAB_00307150;

void FUN_000f6790(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307150;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  puVar1 = (undefined4 *)FUN_002ea01d(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = *param_4;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
