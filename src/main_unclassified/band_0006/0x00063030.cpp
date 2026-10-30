/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 35CB614301BF0AFD59FFEE020CE70DC6A2526DF647ED98C388212E299A436937
 * Entry: 0x00063030, Ghidra index: 1069, label: FUN_00063030
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00063030(void)

{
  int *in_ECX;
  undefined4 unaff_ESI;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_4;
  
  local_10 = 0;
  (**(code **)(*in_ECX + 0x3c))(&local_10);
  uStack_c = 8;
  (**(code **)(*in_ECX + 0x44))(&local_10);
  FUN_00238080(unaff_ESI,uStack_4);
  return;
}
