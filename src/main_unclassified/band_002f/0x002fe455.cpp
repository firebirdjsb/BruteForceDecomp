/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2CD57E2988CD1BF23A486ADAD9E1DBE6CA7F2E52A7EAABAD2BCA81D38B8D5DD9
 * Entry: 0x002fe455, Ghidra index: 11023, label: FUN_002fe455
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4
FUN_002fe455(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  int *unaff_FS_OFFSET;
  int local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_10 = param_2;
  local_8 = param_4 + 1;
  local_14 = (uintptr_t)0x002fe2d9U;
  local_c = param_1;
  local_18 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_18;
  uVar1 = __CallSettingFrame_12(param_3,param_1,param_5);
  *unaff_FS_OFFSET = local_18;
  return uVar1;
}
