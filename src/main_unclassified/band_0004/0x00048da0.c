/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 8FC7B8264B95798038E2CA1F36766F9C2D78DCCF39E995E17B3C5614CA24EAA4
 * Entry: 0x00048da0, Ghidra index: 582, label: FUN_00048da0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00048da0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  /* XBE 0x00049157-0x00049162 writes the selected source flag to the
   * low byte of an incoming argument stack DWORD after EBX has saved the
   * original object pointer. 0x0004917F reads only that byte; a later
   * 0x000491E9 full-word write reuses the same stack slot. */
  uint8_t source_flag_bit3;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  iVar3 = param_1;
  FUN_000428c0(param_1);
  *(undefined4 *)(param_2 + 0x940) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_2 + 0x944) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_2 + 0x948) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_2 + 0x94c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined1 *)(param_2 + 0x950) = *(undefined1 *)(param_1 + 0x20);
  *(undefined4 *)(param_2 + 0x954) = *(undefined4 *)(param_1 + 0x24);
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_2 + 0x488) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_2 + 0x48c) = uVar2;
  *(undefined4 *)(param_2 + 0x490) = uVar1;
  *(undefined4 *)(param_2 + 0x89c) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_2 + 0x8a0) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_2 + 0x8a4) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_2 + 0x590) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_2 + 0x38c) = *(undefined4 *)(param_1 + 0x48);
  bVar4 = *(byte *)(param_2 + 0x390) ^ (*(byte *)(param_2 + 0x390) ^ *(byte *)(param_1 + 0x4c)) & 1;
  *(byte *)(param_2 + 0x390) = bVar4;
  bVar4 = (*(byte *)(param_1 + 0x4c) ^ bVar4) & 2 ^ bVar4;
  *(byte *)(param_2 + 0x390) = bVar4;
  *(byte *)(param_2 + 0x390) = (*(byte *)(param_1 + 0x4c) ^ bVar4) & 4 ^ bVar4;
  *(undefined4 *)(param_2 + 0x394) = *(undefined4 *)(param_1 + 0x50);
  FUN_000487c0();
  *(undefined4 *)(param_2 + 0x770) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)(param_2 + 0x5f0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)(param_2 + 0x608) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)(param_2 + 0x624) = *(undefined4 *)(param_1 + 0xfc);
  bVar4 = *(byte *)(param_2 + 0x628) ^ (*(byte *)(param_2 + 0x628) ^ *(byte *)(param_1 + 0x100)) & 1
  ;
  *(byte *)(param_2 + 0x628) = bVar4;
  bVar4 = (*(byte *)(param_1 + 0x100) ^ bVar4) & 2 ^ bVar4;
  *(byte *)(param_2 + 0x628) = bVar4;
  *(byte *)(param_2 + 0x628) = (*(byte *)(param_1 + 0x100) ^ bVar4) & 4 ^ bVar4;
  *(undefined4 *)(param_2 + 0x62c) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)(param_2 + 0x7dc) = *(undefined4 *)(param_1 + 0x10c);
  bVar4 = *(byte *)(param_2 + 0x7e0) ^ (*(byte *)(param_2 + 0x7e0) ^ *(byte *)(param_1 + 0x110)) & 1
  ;
  *(byte *)(param_2 + 0x7e0) = bVar4;
  bVar4 = (*(byte *)(param_1 + 0x110) ^ bVar4) & 2 ^ bVar4;
  *(byte *)(param_2 + 0x7e0) = bVar4;
  *(byte *)(param_2 + 0x7e0) = (*(byte *)(param_1 + 0x110) ^ bVar4) & 4 ^ bVar4;
  *(undefined4 *)(param_2 + 0x7e4) = *(undefined4 *)(param_1 + 0x114);
  uVar1 = *(undefined4 *)(param_1 + 0x120);
  uVar2 = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(param_2 + 0x818) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(param_2 + 0x814) = uVar2;
  *(undefined4 *)(param_2 + 0x81c) = uVar1;
  FUN_000428c0(param_1 + 0x124);
  *(undefined4 *)(param_2 + 0x968) = *(undefined4 *)(param_1 + 0x134);
  *(undefined4 *)(param_2 + 0x96c) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(param_2 + 0x970) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(param_2 + 0x974) = *(undefined4 *)(param_1 + 0x140);
  *(undefined1 *)(param_2 + 0x978) = *(undefined1 *)(param_1 + 0x144);
  *(undefined4 *)(param_2 + 0x97c) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)(param_2 + 0x1e0) = *(undefined4 *)(param_1 + 0x150);
  bVar4 = *(byte *)(param_2 + 0x1e4) ^ (*(byte *)(param_2 + 0x1e4) ^ *(byte *)(param_1 + 0x154)) & 1
  ;
  *(byte *)(param_2 + 0x1e4) = bVar4;
  bVar4 = (*(byte *)(param_1 + 0x154) ^ bVar4) & 2 ^ bVar4;
  *(byte *)(param_2 + 0x1e4) = bVar4;
  *(byte *)(param_2 + 0x1e4) = (*(byte *)(param_1 + 0x154) ^ bVar4) & 4 ^ bVar4;
  *(undefined4 *)(param_2 + 0x1e8) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)(param_2 + 0x594) = *(undefined4 *)(param_1 + 0x15c);
  *(undefined4 *)(param_2 + 0x76c) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)(param_2 + 0x744) = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)(param_2 + 0x74c) = *(undefined4 *)(param_1 + 0x16c);
  bVar4 = *(byte *)(param_2 + 0x750) ^ (*(byte *)(param_2 + 0x750) ^ *(byte *)(param_1 + 0x170)) & 1
  ;
  *(byte *)(param_2 + 0x750) = bVar4;
  bVar4 = (*(byte *)(param_1 + 0x170) ^ bVar4) & 2 ^ bVar4;
  *(byte *)(param_2 + 0x750) = bVar4;
  *(byte *)(param_2 + 0x750) = (*(byte *)(param_1 + 0x170) ^ bVar4) & 4 ^ bVar4;
  *(undefined4 *)(param_2 + 0x754) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(param_2 + 0x758) = *(undefined4 *)(param_1 + 0x178);
  FUN_00048940();
  puVar6 = (undefined4 *)(param_1 + 0x180);
  puVar7 = (undefined4 *)(param_2 + 0x8b0);
  for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_000489d0();
  *(undefined4 *)(param_2 + 0x890) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)(param_2 + 0x894) = *(undefined4 *)(param_1 + 0x1dc);
  *(undefined4 *)(param_2 + 0x898) = *(undefined4 *)(param_1 + 0x1e0);
  FUN_00048ab0();
  *(undefined4 *)(param_2 + 0x1d8) = *(undefined4 *)(param_1 + 0x248);
  puVar6 = (undefined4 *)(param_1 + 0x24c);
  puVar7 = (undefined4 *)(param_2 + 0x4e8);
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_00048bb0();
  FUN_00048d30();
  source_flag_bit3 = (uint8_t)(*(byte *)(param_1 + 0x374) >> 3 & 1);
  iVar5 = FUN_000120f0();
  if (((iVar5 != 0) && ((*(byte *)(*(int *)(iVar5 + 0xc) + 0x1a9) & 1) != 0)) &&
     (*(byte *)(param_2 + 0x3cc) = source_flag_bit3, *(byte *)(param_2 + 0x3cd) != source_flag_bit3)) {
    *(undefined4 *)(param_2 + 0x3dc) = 0;
    *(undefined4 *)(param_2 + 0x3d4) = 0;
    *(byte *)(param_2 + 0x3d8) = *(byte *)(param_2 + 0x3d8) & 0xfa | 2;
  }
  iVar5 = FUN_000120f0();
  if ((*(byte *)(iVar3 + 0x374) & 1) != 0) {
    uVar1 = *(undefined4 *)(iVar3 + 0x364);
    uVar2 = *(undefined4 *)(iVar3 + 0x360);
    *(undefined4 *)(iVar5 + 0x664) = *(undefined4 *)(iVar3 + 0x35c);
    *(undefined4 *)(iVar5 + 0x668) = uVar2;
    *(undefined4 *)(iVar5 + 0x66c) = uVar1;
    *(undefined1 *)(iVar5 + 0x670) = 1;
  }
  *(byte *)(iVar5 + 0x748) =
       *(byte *)(iVar5 + 0x748) ^ (*(char *)(iVar3 + 0x368) << 2 ^ *(byte *)(iVar5 + 0x748)) & 4;
  *(undefined4 *)(iVar5 + 0x7dc) = *(undefined4 *)(iVar3 + 0x36c);
  *(undefined4 *)(iVar5 + 0x578) = *(undefined4 *)(iVar3 + 0x370);
  return;
}
