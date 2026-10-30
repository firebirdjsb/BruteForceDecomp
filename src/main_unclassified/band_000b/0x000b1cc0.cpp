/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9DDC81B16371F0D4B37F63BF7D7EBFDD012A0323C5F32D0B5D4BC62FBC5E0AC9
 * Entry: 0x000b1cc0, Ghidra index: 2133, label: FUN_000b1cc0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_000c9920(void);
extern void FUN_000c9890(int param_1);

void FUN_000b1cc0(int *param_1,byte param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  char cVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  /* 0x0b1ce1 saves one DWORD, then +1/+2/AL provide three byte
   * values stored at object +0x3a/+0x39/+0x38 (0x0b1cf2-cf8).
   * The original input pointer remains separately saved. */
  undefined1 uVar9;
  undefined1 uVar10;
  
  piVar5 = param_1;
  if (param_2 == 0) {
    puVar7 = (undefined4 *)FUN_000b87a0();
    uVar3 = *puVar7;
    uVar9 = (undefined1)((uint)uVar3 >> 8);
    uVar10 = (undefined1)((uint)uVar3 >> 0x10);
    uVar8 = (undefined1)uVar3;
  }
  else {
    uVar10 = 0x1e;
    uVar8 = 0x1e;
    uVar9 = 0xbe;
  }
  iVar4 = piVar5[0xb];
  *(undefined1 *)(iVar4 + 0x3a) = uVar9;
  *(undefined1 *)(iVar4 + 0x38) = uVar8;
  *(undefined1 *)(iVar4 + 0x39) = uVar10;
  cVar6 = FUN_000c9920();
  if (cVar6 != '\0') {
    fVar1 = (float)piVar5[6];
    iVar4 = piVar5[0xb];
    *(byte *)(piVar5 + 0x12) = *(byte *)(piVar5 + 0x12) & 0xe7;
    fVar2 = *(float *)(iVar4 + 0x40);
    *(float *)(iVar4 + 0x40) = fVar1;
    if (fVar1 != fVar2) {
      FUN_000c9890(iVar4);
    }
    (**(code **)(*piVar5 + 0x30))();
  }
  piVar5[0x13] = 0x3c23d70a;
  piVar5[0x16] = 0;
  *(byte *)(piVar5 + 0x17) = *(byte *)(piVar5 + 0x17) & 0xfe | param_2 & 1 | 2;
  *(byte *)((int)piVar5 + 0x13) = *(byte *)((int)piVar5 + 0x13) & 0xfe;
  return;
}
