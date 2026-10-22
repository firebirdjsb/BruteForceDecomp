/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C412F62E4A9082640D4171D6D491734410A550D2C71A49610753A1275059FA5C
 * Entry: 0x0004b850, Ghidra index: 617, label: FUN_0004b850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0004b850(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_003085d0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 8) {
    FUN_001f7bf0(param_4);
    param_3 = param_3 + 8;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
