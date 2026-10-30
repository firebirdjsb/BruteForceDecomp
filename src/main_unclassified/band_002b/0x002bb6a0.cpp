/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B5246C6B1E6647B670A4F452DC9771102F72799E18271E63BDC8B4E4A785ED9F
 * Entry: 0x002bb6a0, Ghidra index: 9905, label: FUN_002bb6a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002bb6a0(void)

{
  int in_EAX;
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined4 *)(in_EAX + 0x20) = 0;
  *(undefined4 *)(in_EAX + 0x30) = 0;
  *(undefined4 *)(in_EAX + 0x40) = 0;
  *(undefined2 *)(in_EAX + 0x50) = 1;
  *(undefined2 *)(in_EAX + 0x52) = 0;
  *(undefined2 *)(in_EAX + 0x58) = 0;
  *(int *)(in_EAX + 0x54) = in_EAX + 0x5c;
  *(undefined4 *)(in_EAX + 0x88) = 0;
  *(undefined4 *)(in_EAX + 0x98) = 0;
  *(undefined4 *)(in_EAX + 0xa8) = 0;
  *(undefined4 *)(in_EAX + 0xb8) = 0;
  *(undefined4 *)(in_EAX + 200) = 0;
  *(undefined4 *)(in_EAX + 0xd8) = 0;
  puVar1 = (undefined4 *)(in_EAX + 0x108);
  iVar2 = 3;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(in_EAX + 0x138) = 0;
  return;
}
