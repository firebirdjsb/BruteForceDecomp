/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1553D1A5C147D3FE27D17C15D0D359F97DE67799A665979611D08FF33F50C236
 * Entry: 0x0004b9c0, Ghidra index: 622, label: FUN_0004b9c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_0004b9c0(void)

{
  uint in_EAX;
  uint uVar1;
  int in_ECX;
  
  if ((((*(int *)(*(int *)(in_EAX + 0xc) + 4) == 3) && (*(int *)(*(int *)(in_ECX + 0xc) + 4) == 3))
      && (*(int *)(in_EAX + 0x59c) != 0)) && (in_EAX = 0, *(int *)(in_ECX + 0x59c) != 0)) {
    uVar1 = FUN_0005beb0();
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}
