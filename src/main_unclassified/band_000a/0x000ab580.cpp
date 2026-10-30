/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 395CD2FC1C0606335A6A7C3BA3F5F2715E712A4FA77AA1C234417DA9427706FF
 * Entry: 0x000ab580, Ghidra index: 2046, label: FUN_000ab580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_000ba6d0(void);

undefined4 FUN_000ab580(int param_1)

{
  float fVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  char cVar7;
  undefined1 uVar8;
  bool bVar9;
  
  iVar2 = *(int *)(param_1 + 0x34);
  uVar4 = 0;
  if (*(short *)(iVar2 + 0x20) < 600) {
    cVar7 = (*(short *)(iVar2 + 0x22) < 400) + '\x02';
  }
  else {
    cVar7 = *(short *)(iVar2 + 0x22) < 400;
  }
  bVar9 = cVar7 == '\0';
  if ((uint)bVar9 != (int)*(char *)(param_1 + 0x75)) {
    *(bool *)(param_1 + 0x75) = bVar9;
    *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 2;
    if (bVar9) {
      *(undefined2 *)(*(int *)(param_1 + 0x78) + 0xc) = 0x40;
      *(undefined2 *)(param_1 + 0xc) = 0x40;
      *(undefined2 *)(*(int *)(param_1 + 0x78) + 0xe) = 0x40;
      *(undefined2 *)(param_1 + 0xe) = 0x40;
      FUN_000ba6d0();
      if ((*(byte *)(param_1 + 0x74) & 1) == 0) {
        uVar5 = 0xff;
        uVar6 = 0xff;
        uVar8 = 0xff;
        uVar3 = 0xff;
      }
      else {
        uVar5 = 0x1e;
        uVar6 = 0x1e;
        uVar8 = 0x1e;
        uVar3 = 0x99;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x78) + 0x10) = uVar3;
      iVar2 = *(int *)(param_1 + 0x78);
      *(undefined1 *)(iVar2 + 0x2c) = uVar8;
      *(undefined1 *)(iVar2 + 0x2d) = uVar6;
      *(undefined1 *)(iVar2 + 0x2e) = uVar5;
      return 1;
    }
    *(undefined2 *)(param_1 + 0xc) = 0x20;
    *(undefined2 *)(*(int *)(param_1 + 0x78) + 0xc) = 0x20;
    *(undefined2 *)(*(int *)(param_1 + 0x78) + 0xe) = 0x40;
    *(undefined2 *)(param_1 + 0xe) = 0x40;
    if ((*(byte *)(param_1 + 0x74) & 1) == 0) {
      uVar3 = 0xff;
      uVar5 = 0xff;
      uVar6 = 0xff;
      fVar1 = 255.0;
    }
    else {
      uVar3 = 0x1e;
      uVar5 = 0x1e;
      uVar6 = 0x1e;
      fVar1 = 153.0;
    }
    *(char *)(*(int *)(param_1 + 0x78) + 0x10) = (char)(int)fVar1;
    iVar2 = *(int *)(param_1 + 0x78);
    *(undefined1 *)(iVar2 + 0x2c) = uVar6;
    *(undefined1 *)(iVar2 + 0x2d) = uVar5;
    *(undefined1 *)(iVar2 + 0x2e) = uVar3;
    FUN_000ba6d0();
    uVar4 = 1;
  }
  return uVar4;
}
