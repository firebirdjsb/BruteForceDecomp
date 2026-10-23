/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 858BC2E81F77C75516E0C9824C50BFD561666E5CFD6F6C6DC9EE048FB18BB200
 * Entry: 0x001de7e0, Ghidra index: 6658, label: FUN_001de7e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001de7e0(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307bd0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x5c) {
    if (param_3 != 0) {
      FUN_001c9990();
    }
    param_3 = param_3 + 0x5c;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
