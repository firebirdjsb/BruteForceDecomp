/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 16324F767EF469D8941B5AE4882F1C7A9E179D6C383DBF65A88F3E7D8700BF87
 * Entry: 0x000f7420, Ghidra index: 3099, label: FUN_000f7420
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
void FUN_000f7420(void)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *unaff_ESI;
  
  iVar6 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x6c))();
  if (((iVar6 != 0) && (iVar6 = (**(code **)(**(int **)(DAT_00469b58 + 8) + 0x60))(), iVar6 != 0))
     && (iVar6 = FUN_00234c90(), iVar6 == 0)) {
    FUN_00101650();
    iVar6 = FUN_00100f90();
    iVar7 = FUN_00100f90();
    if ((iVar6 != 0) && (iVar7 != 0)) {
      uVar2 = *(undefined4 *)(iVar6 + 0x10);
      iVar3 = unaff_ESI[4];
      FUN_0008bc00(*(undefined4 *)(iVar6 + 0xc),iVar3);
      FUN_0008bc00(*(undefined4 *)(iVar7 + 0xc),iVar3);
      iVar6 = FUN_00100f90();
      if (iVar6 != 0) {
        FUN_0008bc00(*(undefined4 *)(iVar6 + 0xc),uVar2);
      }
    }
  }
  bVar4 = FUN_000f73d0(unaff_ESI[1]);
  bVar1 = *(byte *)(unaff_ESI + 10);
  if ((bVar1 >> 1 & 1) != bVar4) {
    *(byte *)(unaff_ESI + 10) = (bVar4 << 1 ^ bVar1) & 2 ^ bVar1;
    (**(code **)(*unaff_ESI + 0x24))();
  }
  iVar6 = (**(code **)(*unaff_ESI + 4))();
  if (iVar6 == 6) {
    cVar5 = FUN_000f73d0(unaff_ESI[1]);
    *(char *)(unaff_ESI + 0x1d) = '\x01' - (cVar5 != '\0');
  }
  return;
}
