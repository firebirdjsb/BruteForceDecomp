/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A0DEBCDD791A2B8384C90E04E3DE709C21FCD972DCBC40BBF7B060C6B5C00266
 * Entry: 0x00219400, Ghidra index: 7496, label: FUN_00219400
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00219400(void)

{
  int in_ECX;
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(in_ECX + 8);
  if (puVar1 != *(undefined4 **)(in_ECX + 0xc)) {
    do {
      (**(code **)(*(int *)*puVar1 + 8))();
      puVar1 = puVar1 + 1;
    } while (puVar1 != *(undefined4 **)(in_ECX + 0xc));
  }
  return;
}
