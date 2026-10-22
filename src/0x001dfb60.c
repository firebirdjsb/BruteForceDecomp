/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 03E9B883BA31986AA372B08E9F884A61753207C3F01324077582BD415249F012
 * Entry: 0x001dfb60, Ghidra index: 6690, label: FUN_001dfb60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001dfb60(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00309170;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x134) {
    if (param_3 != 0) {
      FUN_001c95f0(param_1);
    }
    param_3 = param_3 + 0x134;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
