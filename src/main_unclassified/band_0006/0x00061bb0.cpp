/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EF8D279D6112DB7653CFE898F8CA3A992D4ECF82CCC5D4C407A652AD797069F1
 * Entry: 0x00061bb0, Ghidra index: 1036, label: FUN_00061bb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Xbox image VA 0x003075f0; address-only label. Link definition and role unverified. */
extern unsigned char LAB_003075f0;

int FUN_00061bb0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_003075f0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    FUN_00061b70(param_4);
    param_3 = param_3 + 8;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
