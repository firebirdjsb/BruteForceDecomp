/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0D0B1FE236088C2A31A4960848E71D2357F2BEB1B0F4ECE2730297578079208D
 * Entry: 0x000bb200, Ghidra index: 2267, label: FUN_000bb200
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_000bb200(void)

{
  int iVar1;
  int in_EAX;
  uint3 uVar2;
  undefined4 in_EDX;
  
  iVar1 = *(int *)(*(int *)(in_EAX + 0x28) + 8);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if (*(short *)(iVar1 + 0x24) == 6) {
    *(undefined4 *)(iVar1 + 0xe4) = in_EDX;
    return CONCAT31(uVar2,1);
  }
  return (uint)uVar2 << 8;
}
