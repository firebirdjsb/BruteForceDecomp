/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2322F593C0C8B80DC1564D233841ED951D4951EE78A76BE1324B1195D08067EA
 * Entry: 0x00176030, Ghidra index: 4933, label: FUN_00176030
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_00176030(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  
  piVar1 = *(int **)(in_ECX + 0x74);
  if (piVar1 == (int *)0x0) {
    return 0x80004005;
  }
  if (*(char *)(in_ECX + 0x7c) != '\0') {
    *(undefined1 *)(in_ECX + 0x7c) = 0;
    uVar5 = 0;
    iVar2 = (**(code **)(*piVar1 + 0x38))(piVar1);
    if (iVar2 != 0) {
      while( true ) {
        iVar2 = (**(code **)(**(int **)(in_ECX + 0x74) + 0x3c))(*(int **)(in_ECX + 0x74),uVar5);
        uVar3 = (**(code **)(**(int **)(in_ECX + 0x74) + 0x4c))(*(int **)(in_ECX + 0x74));
        piVar1 = *(int **)(in_ECX + 0x74);
        if (uVar3 < *(uint *)(iVar2 + 4)) break;
        uVar5 = uVar5 + 1;
        uVar3 = (**(code **)(*piVar1 + 0x38))();
        if (uVar3 <= uVar5) {
          return 0;
        }
      }
      iVar4 = (**(code **)(*piVar1 + 0x4c))(piVar1);
      *(int *)(in_ECX + 0x80) = *(int *)(iVar2 + 4) - iVar4;
    }
  }
  return 0;
}
