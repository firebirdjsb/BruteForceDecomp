/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C5D77599ABF1627B3E5A0F3E82E60674DD04FCEE4A4ADB9C7CE3EF9DA99568B6
 * Entry: 0x00037520, Ghidra index: 366, label: FUN_00037520
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0039cc18;
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_00037520(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined8 uStack_128;
  undefined **ppuStack_120;
  int *piStack_11c;
  undefined4 uStack_1c;
  undefined1 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar5 = 0;
  iVar2 = FUN_000120f0();
  piVar3 = (int *)FUN_00049ca0();
  iVar4 = FUN_000388b0(*(undefined4 *)(param_1 + 0x358));
  if (((iVar4 != 0) && (iVar4 = *(int *)(iVar4 + 100), iVar4 != 0)) && ((iVar4 < 3 || (4 < iVar4))))
  {
    iVar4 = (**(code **)(*piVar3 + 0x40))();
    fStack_12c = -*(float *)(iVar4 + 8) * 4.5;
    fStack_140 = -*(float *)(iVar4 + 0x14) * 4.5;
    fStack_13c = -*(float *)(iVar4 + 0x20) * 4.5;
    uStack_128 = CONCAT44(fStack_13c,fStack_140);
    fStack_13c = fStack_13c + *(float *)(iVar4 + 0x2c);
    uVar5 = 1;
    fStack_140 = fStack_140 + *(float *)(iVar4 + 0x28);
    fStack_138 = fStack_12c + *(float *)(iVar4 + 0x24);
    uStack_18 = 1;
    uStack_c = 0;
    ppuStack_120 = &PTR_LAB_0039cc18;
    uStack_14 = 0x58;
    uStack_10 = 0x415a1018;
    uStack_1c = 1;
    fStack_134 = fStack_140;
    fStack_130 = fStack_13c;
    piStack_11c = piVar3;
    cVar1 = FUN_000de330(*(undefined4 *)(iVar2 + 8));
    if ((cVar1 == '\0') ||
       (cVar1 = FUN_000dddd0(*(undefined4 *)(iVar2 + 8),&fStack_140,0x40200000,0), cVar1 == '\0')) {
      return 0;
    }
    fStack_134 = fStack_140 + 0.1;
    if ((*(byte *)(*(int *)(iVar2 + 0xc) + 0x1a8) & 0x10) != 0) {
      *(undefined4 *)(param_1 + 0x8b8) = 0x1e;
      *(undefined4 *)(param_1 + 0x8b0) = 0;
      *(undefined4 *)(param_1 + 0x8c0) = 7;
      *(undefined1 *)(param_1 + 0x8b4) = 0;
    }
    cVar1 = FUN_00223ce0(&fStack_138);
    if (cVar1 == '\0') {
      fStack_140 = 2.7005488e-35;
      FUN_00223ce0(&fStack_138);
    }
  }
  return uVar5;
}
