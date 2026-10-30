/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1CA3CED1856B05271D8DF26802E60DD280E71CC644B2E0C26F35BF0B78040B51
 * Entry: 0x0017d8a0, Ghidra index: 5083, label: FUN_0017d8a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE mapped VA 0x00308470; address-only evidence, symbol role unknown. */
extern unsigned char LAB_00308470;
void FUN_0017d8a0(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00308470;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_0017d9b0(param_3);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
