/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A501F80A9A3328AA6129D9448DFE6D11DC43ACC9A8B96EBA0129078D04F6DBEA
 * Entry: 0x0029c300, Ghidra index: 9437, label: FUN_0029c300
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_code_size_overflow_004040f0[];
uint FUN_0029c300(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int unaff_EBX;
  uint uVar5;
  bool bVar6;
  
  uVar5 = 1;
  iVar2 = *(int *)(unaff_EBX + 4);
  while (iVar2 == 0x2c) {
    iVar2 = FUN_00296110();
    *(int *)(unaff_EBX + 4) = iVar2;
    if ((iVar2 == 0x3b) || (iVar2 == 0x7d)) break;
    FUN_0029ae00();
    uVar5 = uVar5 + 1;
    uVar3 = uVar5 & 0x8000003f;
    bVar6 = uVar3 == 0;
    if ((int)uVar3 < 0) {
      bVar6 = (uVar3 - 1 | 0xffffffc0) == 0xffffffff;
    }
    if (bVar6) {
      FUN_00299580(0x1d,((int)(uVar5 + ((int)uVar5 >> 0x1f & 0x3fU)) >> 6) + -1,0xffffffc0);
      piVar1 = *(int **)(unaff_EBX + 8);
      uVar4 = FUN_00294b10(1,s_code_size_overflow_004040f0);
      *(undefined4 *)(*piVar1 + 0x10) = uVar4;
      *(undefined1 *)(*(int *)(*piVar1 + 0x10) + piVar1[2]) = 0x40;
      piVar1[2] = piVar1[2] + 1;
    }
    iVar2 = *(int *)(unaff_EBX + 4);
  }
  uVar3 = uVar5 & 0x8000003f;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xffffffc0) + 1;
  }
  if (0 < (int)uVar3) {
    FUN_00299580(0x1d,(int)(uVar5 + ((int)uVar5 >> 0x1f & 0x3fU)) >> 6,-uVar3);
    FUN_00299310(uVar3);
  }
  return uVar5;
}
