/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 15DAA0CA067ADBAD4DAC2851326DCA788A975C98E41FB8F5400BF3B332A53BBC
 * Entry: 0x00171620, Ghidra index: 4853, label: FUN_00171620
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00171620(int param_1,int param_2,int param_3)

{
  undefined4 *unaff_FS_OFFSET;
  undefined4 local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00307ce0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 100) {
    if (param_3 != 0) {
      FUN_001713d0();
    }
    param_3 = param_3 + 100;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}
