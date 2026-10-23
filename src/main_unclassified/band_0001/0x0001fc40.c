/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DE39B6DECE42B44E9508DD2033A9641D4725D83CE2F99F0BBC52BE9D5E26A993
 * Entry: 0x0001fc40, Ghidra index: 157, label: FUN_0001fc40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0001fc40(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x1c);
  uVar2 = *(undefined4 *)(in_ECX + 0x10);
  *in_EAX = *(undefined4 *)(in_ECX + 4);
  in_EAX[1] = uVar2;
  in_EAX[2] = uVar1;
  return;
}
