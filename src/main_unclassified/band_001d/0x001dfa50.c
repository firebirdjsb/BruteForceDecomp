/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DAEF05671FD8EE3F2FA9447DF41B715E7FB6134870E2E027FC4BB1F197EEFAC6
 * Entry: 0x001dfa50, Ghidra index: 6688, label: FUN_001dfa50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_001dfa50(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00308710;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    FUN_001dd2f0(param_4);
    param_3 = param_3 + 0x20;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
