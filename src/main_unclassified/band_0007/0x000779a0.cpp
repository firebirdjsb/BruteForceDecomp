/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 97293FDA2D7A1AF3A018FBCDC873889D9B5121C6D6D5CB71DAEC5DC46EA9C5B5
 * Entry: 0x000779a0, Ghidra index: 1407, label: FUN_000779a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Address-only XBE labels; symbol definitions / roles pending. */
extern void FUN_00077940(undefined4 param_1,undefined4 param_2);

extern unsigned char LAB_00307910; /* VA 0x00307910 */

int FUN_000779a0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307910;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    FUN_00077940(param_4,param_1);
    param_3 = param_3 + 0x10;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
