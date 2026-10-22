/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 15C5018FEA2D712376A45EBC7F0F8B8004347F7FB234D40065B168D1E3EBD7BF
 * Entry: 0x000aae20, Ghidra index: 2037, label: FUN_000aae20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_000aae20(void)

{
  char *pcVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  
  iVar2 = (**(code **)(**(int **)(in_EAX + 0x28) + 8))();
  if (*(int *)(iVar2 + 0x28) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 0x28) + -0x2c;
  }
  uVar3 = *(uint *)(iVar2 + 0xa8);
  if ((((uVar3 == 0) || (*(int *)(uVar3 + 0x640) == 0)) ||
      (*(char *)(*(int *)(uVar3 + 0x640) + 0x79) != '\x06')) ||
     ((*(int *)(uVar3 + 0x604) != 4 ||
      (pcVar1 = (char *)(uVar3 + 0x590), uVar3 = CONCAT31((int3)(uVar3 >> 8),1), *pcVar1 == '\0'))))
  {
    uVar3 = uVar3 & 0xffffff00;
  }
  return uVar3;
}
