/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BAB7F100AF1D9B7273C380DFE5EEC69A5A745AC97E68C16E4F558A9E21D5BE8D
 * Entry: 0x001545d0, Ghidra index: 4441, label: FUN_001545d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* XBE mapped VA 0x003078d0; address-only external declaration.
 * Linked symbol definition, role and calling convention are unverified. */
extern unsigned char LAB_003078d0;
int FUN_001545d0(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_003078d0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x54) {
    if (param_3 != 0) {
      FUN_00154290();
    }
    param_3 = param_3 + 0x54;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
