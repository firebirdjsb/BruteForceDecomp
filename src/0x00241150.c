/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: CE3EDEE7717834D9F8FB29F760ACD4923DC3A19EE9A89791716C92F422ADA7A6
 * Entry: 0x00241150, Ghidra index: 7999, label: FUN_00241150
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00241150(void)

{
  undefined4 in_EAX;
  int in_ECX;
  int iVar1;
  undefined4 in_stack_fffffff0;
  
  if (*(int *)(in_ECX + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0xc;
    if (iVar1 != 0) goto LAB_00241188;
  }
  FUN_001aa320(in_EAX);
  in_stack_fffffff0 = in_EAX;
LAB_00241188:
  FUN_002435b0(0,0,in_stack_fffffff0);
  return *(int *)(in_ECX + 4) + iVar1 * 0xc;
}
