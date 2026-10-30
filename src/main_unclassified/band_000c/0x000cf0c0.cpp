/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0B26AF22FE000772DDB59FA978D5541DD8A4129C1F7DD6850A9F56A0303DB5E1
 * Entry: 0x000cf0c0, Ghidra index: 2558, label: FUN_000cf0c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000cf0c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 in_EDX;
  undefined4 unaff_ESI;
  undefined4 local_c4;
  undefined1 local_c0 [192];
  
  FUN_000ce410(unaff_ESI,in_EDX,local_c0,&local_c4);
  FUN_000cea20(unaff_ESI,param_1,local_c0,local_c4,param_3,param_4);
  return;
}
