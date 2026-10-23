/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6C5DD3BFFFCB9FC0D6D8E836F2FBD847313E633C6D360367569FC9FA3544D701
 * Entry: 0x000625f0, Ghidra index: 1058, label: FUN_000625f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000625f0(void)

{
  int *piVar1;
  int in_EAX;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = (undefined4 *)(in_EAX + 0x30);
  iVar3 = 9;
  do {
    piVar1 = (int *)puVar2[-1];
    puVar2 = puVar2 + -1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *puVar2 = 0;
    }
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}
