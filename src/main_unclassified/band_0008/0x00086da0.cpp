/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 978D550D6259F34AA9903BBA5B54A6C3A98E5141183EA8C31B007152FF2F24C3
 * Entry: 0x00086da0, Ghidra index: 1600, label: FUN_00086da0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox image VA 0x00308550; address-only symbol, link definition/role unverified. */
extern unsigned char LAB_00308550;

int FUN_00086da0(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00308550;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x3c) {
    if (param_3 != 0) {
      FUN_00086200();
    }
    param_3 = param_3 + 0x3c;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
