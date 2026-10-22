/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F38B9C7C05E0796E410185FE668834280FC32CAE4E12ABFD7D1B99AC523F24E6
 * Entry: 0x00141700, Ghidra index: 4104, label: FUN_00141700
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00141700(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [4];
  undefined4 *local_8;
  
  local_18 = FUN_00061500(local_1c);
  local_10 = *param_2;
  local_14 = 0;
  FUN_00142460(local_c,local_1c);
  FUN_00141c00(&local_10);
  if (local_8 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *local_8;
  }
  FUN_001298b0(&param_2,uVar1,local_8);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(local_8);
}
