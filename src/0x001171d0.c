/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1DDF80CAEC1644ED20B3AFF4F8EB53AA2203931EA19A88F3E0AD0537A3BFD74F
 * Entry: 0x001171d0, Ghidra index: 3591, label: FUN_001171d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001171d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int in_EDX;
  
  uVar1 = 0;
  if (*(int *)(*(int *)(in_EDX + 0xc) + 0xcc) != 0) {
    uVar1 = FUN_0023d240(*(undefined4 *)(in_EDX + 500),param_1,param_2,0xbf800000);
  }
  return uVar1;
}
