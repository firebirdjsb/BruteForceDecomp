/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9B4393F9FE7DA16045862EF054C10ACDB88C5F4B818DA251431257428A86C660
 * Entry: 0x00257b50, Ghidra index: 8461, label: FUN_00257b50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x00257b65) */

undefined4 FUN_00257b50(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int *unaff_EDI;
  undefined4 uVar6;
  undefined4 uStack_14c;
  int *piStack_148;
  undefined1 *puStack_144;
  int *piStack_140;
  undefined4 *puStack_13c;
  int *piStack_138;
  undefined4 *puStack_134;
  undefined4 uStack_130;
  int local_11c;
  undefined2 local_118;
  ushort uStack_116;
  undefined4 local_114;
  undefined4 local_110;
  
  piVar2 = unaff_EDI + 4;
  if (unaff_EDI[4] == 0) {
    uStack_130 = 0x257b79;
    (**(code **)(*unaff_EDI + 0x10))();
    if (*piVar2 == 0) {
      return 0x80004005;
    }
  }
  local_114 = 0;
  uStack_130 = 0x10;
  local_110 = 0;
  piStack_138 = (int *)unaff_EDI[5];
  puStack_134 = &local_11c;
  local_11c = 0x4c4d5842;
  _local_118 = CONCAT22((ushort)*(byte *)(unaff_EDI + 7),0x101);
  puStack_13c = (undefined4 *)0x257bd6;
  (**(code **)(*piStack_138 + 0x14))();
  piStack_140 = (int *)*piVar2;
  puStack_13c = &uStack_130;
  puStack_144 = (undefined1 *)0x257be4;
  (**(code **)(*piStack_140 + 0x20))();
  puStack_144 = (undefined1 *)0x257bf0;
  FUN_00252c60();
  piVar5 = (int *)0x0;
  if (0 < (int)piStack_138) {
    do {
      uStack_14c = (int *)*piVar2;
      puStack_144 = &stack0xfffffedc;
      piStack_148 = piVar5;
      iVar3 = (**(code **)(*uStack_14c + 0x24))();
      if (iVar3 < 0) {
        return 0x80004005;
      }
      piStack_148 = (int *)0x257c24;
      FUN_002329e0();
      piStack_148 = (int *)0x257c31;
      FUN_002329e0();
      piVar5 = (int *)((int)piVar5 + 1);
    } while ((int)piVar5 < (int)piStack_138);
  }
  if ((*(byte *)(unaff_EDI + 7) & 4) == 0) {
    puStack_144 = (undefined1 *)0x104;
    piStack_148 = &local_11c;
    uStack_14c = (int *)0x1;
    (**(code **)(*(int *)*piVar2 + 0x10))((int *)*piVar2);
    piVar5 = (int *)unaff_EDI[5];
    pcVar4 = &stack0xfffffed4;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00252c60();
    (**(code **)(*piVar5 + 0x14))(piVar5,&stack0xfffffed4,(int)pcVar4 - (int)&stack0xfffffed5,0);
    (**(code **)(*(int *)*piVar2 + 0x10))((int *)*piVar2,0,&puStack_13c,0x104);
    piVar2 = (int *)unaff_EDI[5];
    pcVar4 = (char *)&uStack_14c;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    FUN_00252c60();
    (**(code **)(*piVar2 + 0x14))(piVar2,&uStack_14c,(int)pcVar4 - ((int)&uStack_14c + 1),0);
  }
  piStack_148 = (int *)unaff_EDI[5];
  puStack_144 = &stack0xfffffed4;
  uStack_14c = (int *)0x257ccf;
  (**(code **)(*piStack_148 + 0x18))();
  uStack_14c = (int *)0x0;
  uVar6 = 0;
  (**(code **)(*(int *)unaff_EDI[5] + 0x1c))((int *)unaff_EDI[5],0);
  (**(code **)(*(int *)unaff_EDI[5] + 0x14))((int *)unaff_EDI[5],&piStack_148,0x10,0);
  (**(code **)(*(int *)unaff_EDI[5] + 0x1c))((int *)unaff_EDI[5],uVar6,0);
  *(undefined1 *)(unaff_EDI + 8) = 1;
  return 0;
}
