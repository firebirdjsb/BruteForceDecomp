/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5DBD881E00AE360CC603F410F2958965A0EEC1E734CE16241346E943E6C3A03A
 * Entry: 0x0024b440, Ghidra index: 8250, label: FUN_0024b440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0024b440(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00309590;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_0024bbd0(param_3);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}
