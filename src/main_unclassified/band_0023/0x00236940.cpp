/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FC4EB94ABBFED35FC8037F1803E138B41F09328A6F382510FF2DAE3465CD7234
 * Entry: 0x00236940, Ghidra index: 7833, label: FUN_00236940
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Original x86 0x00236940..0x0023697A returns the low AL byte.
 * Recursive calls leave that boolean byte in AL for the final RET. */
uint8_t FUN_00236940(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  
  piVar1 = *(int **)(in_ECX + 0x58);
  if ((piVar1 == (int *)0x0) || (iVar3 = (**(code **)(*piVar1 + 0x28))(piVar1), iVar3 == 0)) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  iVar3 = *(int *)(in_ECX + 0x50);
  iVar4 = *(int *)(in_ECX + 0x4c);
  while ((iVar4 != iVar3 && (cVar2 == '\0'))) {
    cVar2 = FUN_00236940();
    iVar4 = iVar4 + 4;
  }
  return (uint8_t)cVar2;
}
