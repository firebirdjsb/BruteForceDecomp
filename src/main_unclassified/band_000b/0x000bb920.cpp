/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0E3DC9DFF1F10E3EB33E7C5C124AF1F38F890395B93E744A31E7FC0B001C0E29
 * Entry: 0x000bb920, Ghidra index: 2277, label: FUN_000bb920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_002ead02(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern undefined4 FUN_000c9920(void);
extern void FUN_000c9890(int param_1);

void FUN_000bb920(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int in_ECX;
  int *unaff_EBX;
  
  if (((*(byte *)(unaff_EBX + 0x12) & 0x10) == 0) || (unaff_EBX[0xf] != in_ECX)) {
    *(byte *)(unaff_EBX + 0x12) = *(byte *)(unaff_EBX + 0x12) & 0xf7 | 0x10;
    unaff_EBX[0xf] = in_ECX;
    FUN_002ead02();
    FUN_000c9920();
    fVar1 = (float)unaff_EBX[6];
    iVar3 = unaff_EBX[0xb];
    fVar2 = *(float *)(iVar3 + 0x40);
    *(float *)(iVar3 + 0x40) = fVar1;
    if (fVar1 != fVar2) {
      FUN_000c9890(iVar3);
    }
    iVar3 = unaff_EBX[0xb];
    if (*(char *)(iVar3 + 0x3c) != '\0') {
      (**(code **)(*unaff_EBX + 0x30))(*(undefined4 *)(iVar3 + 0x20));
      return;
    }
    if (7 < *(uint *)(iVar3 + 0x1c)) {
      (**(code **)(*unaff_EBX + 0x30))(*(undefined4 *)(iVar3 + 8));
      return;
    }
    (**(code **)(*unaff_EBX + 0x30))(iVar3 + 8);
  }
  return;
}
