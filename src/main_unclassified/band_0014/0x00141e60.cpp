/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E7763534CE3FB8D8850DF11D319B7683724235AC0EAFF5FDFFA32F25ED7A4328
 * Entry: 0x00141e60, Ghidra index: 4115, label: FUN_00141e60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Label VA 0x00307540 verified mapped; data/code role unknown. */
extern unsigned char LAB_00307540;

void FUN_00141e60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00307540;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  puVar1 = (undefined4 *)FUN_002ea01d(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    puVar1[2] = *in_ECX;
    puVar1[3] = in_ECX[1];
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
