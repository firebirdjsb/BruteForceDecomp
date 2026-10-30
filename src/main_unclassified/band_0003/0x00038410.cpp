/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5FFBA4063DF71BC618E1DC7C3265B572890E8DF546C369413DEA0BC60C6FF25E
 * Entry: 0x00038410, Ghidra index: 370, label: FUN_00038410
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00038410(void)

{
  uint uVar1;
  int in_ECX;
  int in_EDX;
  
  uVar1 = *(int *)(in_ECX + 0xc) + in_EDX;
  if (*(uint *)(in_ECX + 8) <= uVar1) {
    return *(undefined4 *)(*(int *)(in_ECX + 4) + (uVar1 - *(uint *)(in_ECX + 8)) * 4);
  }
  return *(undefined4 *)(*(int *)(in_ECX + 4) + uVar1 * 4);
}
