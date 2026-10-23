/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E72D31920D36B43889259A6AD092169921A9F27C55072A20FA56E8E1811E76CC
 * Entry: 0x002e9c60, Ghidra index: 10562, label: FUN_002e9c60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_002e9c60(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = 0;
  if (((*(int *)(in_ECX + 0xc) != 0) && (*(int *)(in_ECX + 0x14) != 0)) &&
     (*(int *)(in_ECX + 0x18) != 0)) {
    uVar1 = FUN_002e7b70(*(undefined4 *)(in_ECX + 4),*(int *)(in_ECX + 0xc),*(int *)(in_ECX + 0x14),
                         *(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  return uVar1;
}
