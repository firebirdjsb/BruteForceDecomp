/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BBCB495583A9BFFB5D2E11D4B0710B0D1A1D8FC5DC4B92430CD11E13CA3BFDDE
 * Entry: 0x000ace10, Ghidra index: 2067, label: FUN_000ace10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern int FUN_0014cc30(void);
extern undefined4 FUN_000ba6d0(void);
extern char FUN_001301e0(int param_1);
extern void FUN_000ba730(void);

void FUN_000ace10(undefined4 param_1)

{
  undefined4 uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int in_ECX;
  
  *(byte *)(in_ECX + 0x38) = *(byte *)(in_ECX + 0x38) & 0xfe;
  if (*(int *)(in_ECX + 0x28) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(in_ECX + 0x28) + -0x2c;
  }
  if (*(int *)(*(int *)(iVar4 + 0x34) + 0xe0) != 0) {
    piVar5 = (int *)FUN_0014cc30();
    if (piVar5 != (int *)0x0) {
      piVar5 = (int *)(**(code **)(*piVar5 + 0x5c))();
      if (piVar5 != (int *)0x0) {
        piVar6 = (int *)(**(code **)(*piVar5 + 0x18))();
        if (((*(byte *)(in_ECX + 0x38) & 2) != 0) || (*piVar6 != *(int *)(in_ECX + 0x44))) {
          *(byte *)(in_ECX + 0x38) = *(byte *)(in_ECX + 0x38) & 0xfd;
          *(int *)(in_ECX + 0x44) = *piVar6;
          *(int *)(in_ECX + 0x48) = piVar6[1];
          *(int *)(in_ECX + 0x4c) = piVar6[2];
          *(byte *)(in_ECX + 0x38) = *(byte *)(in_ECX + 0x38) | 1;
          FUN_000ba6d0();
        }
        iVar4 = *(int *)(in_ECX + 0x28);
        if (iVar4 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = iVar4 + -0x2c;
        }
        iVar7 = *(int *)(*(int *)(iVar7 + 0x34) + 0xe0);
        cVar2 = FUN_001301e0(iVar7);
        if (cVar2 != '\0') {
          piVar5 = (int *)piVar5[0x57];
          uVar1 = *(undefined4 *)(iVar7 + 0x2e8);
          if (iVar4 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = iVar4 + -0x2c;
          }
          uVar8 = 0;
          if (*(int *)(*(int *)(iVar4 + 0x34) + 0xe0) != 0) {
            uVar8 = FUN_0014cc30();
          }
          cVar2 = (**(code **)(*piVar5 + 0x3c))(uVar8,uVar1);
          if (cVar2 != '\0') {
            *(undefined1 *)(in_ECX + 0x2c) = 0xff;
            *(undefined1 *)(in_ECX + 0x2d) = 0xff;
            *(undefined1 *)(in_ECX + 0x2e) = 0xff;
            bVar3 = *(byte *)(in_ECX + 0x13) & 0xf7;
            goto LAB_000acf32;
          }
        }
        *(undefined1 *)(in_ECX + 0x2c) = 0xfe;
        *(undefined1 *)(in_ECX + 0x2d) = 0xfe;
        *(undefined1 *)(in_ECX + 0x2e) = 0xff;
        bVar3 = *(byte *)(in_ECX + 0x13) | 8;
        goto LAB_000acf32;
      }
    }
  }
  bVar3 = *(byte *)(in_ECX + 0x13) | 1;
LAB_000acf32:
  *(byte *)(in_ECX + 0x13) = bVar3;
  FUN_000ba730(param_1);
  return;
}
