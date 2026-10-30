/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 960882BE041FB2D463C340351140736206BA80A252798B1FA84B0756E59C7729
 * Entry: 0x00048360, Ghidra index: 575, label: FUN_00048360
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_000428c0(int param_1);
extern void FUN_000487c0(void);
extern void FUN_00048940(void);
extern void FUN_000489d0(void);
extern void FUN_00048ab0(void);
extern void FUN_00048bb0(void);
extern void FUN_00048d30(void);
extern uint32_t FUN_000120f0(int32_t in_EAX);

void FUN_00048360(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  FUN_000428c0(param_2 + 0x930);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x940);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x944);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x948);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x94c);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x950);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x954);
  uVar1 = *(undefined4 *)(param_2 + 0x490);
  uVar2 = *(undefined4 *)(param_2 + 0x48c);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x488);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x89c);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x8a0);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x8a4);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x590);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x38c);
  bVar3 = *(byte *)(param_1 + 0x4c) ^ (*(byte *)(param_1 + 0x4c) ^ *(byte *)(param_2 + 0x390)) & 1;
  *(byte *)(param_1 + 0x4c) = bVar3;
  bVar3 = (*(byte *)(param_2 + 0x390) ^ bVar3) & 2 ^ bVar3;
  *(byte *)(param_1 + 0x4c) = bVar3;
  *(byte *)(param_1 + 0x4c) = (*(byte *)(param_2 + 0x390) ^ bVar3) & 4 ^ bVar3;
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x394);
  FUN_000487c0();
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_2 + 0x770);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0x5f0);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_2 + 0x608);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_2 + 0x624);
  bVar3 = *(byte *)(param_1 + 0x100) ^ (*(byte *)(param_1 + 0x100) ^ *(byte *)(param_2 + 0x628)) & 1
  ;
  *(byte *)(param_1 + 0x100) = bVar3;
  bVar3 = (*(byte *)(param_2 + 0x628) ^ bVar3) & 2 ^ bVar3;
  *(byte *)(param_1 + 0x100) = bVar3;
  *(byte *)(param_1 + 0x100) = (*(byte *)(param_2 + 0x628) ^ bVar3) & 4 ^ bVar3;
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_2 + 0x62c);
  *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_2 + 0x7dc);
  bVar3 = *(byte *)(param_1 + 0x110) ^ (*(byte *)(param_1 + 0x110) ^ *(byte *)(param_2 + 0x7e0)) & 1
  ;
  *(byte *)(param_1 + 0x110) = bVar3;
  bVar3 = (*(byte *)(param_2 + 0x7e0) ^ bVar3) & 2 ^ bVar3;
  *(byte *)(param_1 + 0x110) = bVar3;
  *(byte *)(param_1 + 0x110) = (*(byte *)(param_2 + 0x7e0) ^ bVar3) & 4 ^ bVar3;
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_2 + 0x7e4);
  uVar1 = *(undefined4 *)(param_2 + 0x81c);
  uVar2 = *(undefined4 *)(param_2 + 0x814);
  *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_2 + 0x818);
  *(undefined4 *)(param_1 + 0x118) = uVar2;
  *(undefined4 *)(param_1 + 0x120) = uVar1;
  FUN_000428c0(param_2 + 0x958);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x968);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x96c);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x970);
  *(undefined4 *)(param_1 + 0x140) = *(undefined4 *)(param_2 + 0x974);
  *(undefined1 *)(param_1 + 0x144) = *(undefined1 *)(param_2 + 0x978);
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(param_2 + 0x97c);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(param_2 + 0x1e0);
  bVar3 = *(byte *)(param_1 + 0x154) ^ (*(byte *)(param_1 + 0x154) ^ *(byte *)(param_2 + 0x1e4)) & 1
  ;
  *(byte *)(param_1 + 0x154) = bVar3;
  bVar3 = (*(byte *)(param_2 + 0x1e4) ^ bVar3) & 2 ^ bVar3;
  *(byte *)(param_1 + 0x154) = bVar3;
  *(byte *)(param_1 + 0x154) = (*(byte *)(param_2 + 0x1e4) ^ bVar3) & 4 ^ bVar3;
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x1e8);
  *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_2 + 0x594);
  *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_2 + 0x76c);
  *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_2 + 0x744);
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(param_2 + 0x74c);
  bVar3 = *(byte *)(param_1 + 0x170) ^ (*(byte *)(param_1 + 0x170) ^ *(byte *)(param_2 + 0x750)) & 1
  ;
  *(byte *)(param_1 + 0x170) = bVar3;
  bVar3 = (*(byte *)(param_2 + 0x750) ^ bVar3) & 2 ^ bVar3;
  *(byte *)(param_1 + 0x170) = bVar3;
  *(byte *)(param_1 + 0x170) = (*(byte *)(param_2 + 0x750) ^ bVar3) & 4 ^ bVar3;
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_2 + 0x754);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_2 + 0x758);
  FUN_00048940();
  puVar5 = (undefined4 *)(param_2 + 0x8b0);
  puVar6 = (undefined4 *)(param_1 + 0x180);
  for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_000489d0();
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x890);
  *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)(param_2 + 0x894);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x898);
  FUN_00048ab0();
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_2 + 0x1d8);
  puVar5 = (undefined4 *)(param_2 + 0x4e8);
  puVar6 = (undefined4 *)(param_1 + 0x24c);
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_00048bb0();
  FUN_00048d30();
  *(byte *)(param_1 + 0x374) =
       *(byte *)(param_1 + 0x374) ^
       (*(char *)(param_2 + 0x3cc) << 3 ^ *(byte *)(param_1 + 0x374)) & 8;
  iVar4 = FUN_000120f0();
  bVar3 = *(byte *)(param_1 + 0x374) ^ (*(byte *)(iVar4 + 0x670) ^ *(byte *)(param_1 + 0x374)) & 1;
  *(byte *)(param_1 + 0x374) = bVar3;
  if ((bVar3 & 1) != 0) {
    uVar1 = *(undefined4 *)(iVar4 + 0x66c);
    uVar2 = *(undefined4 *)(iVar4 + 0x668);
    *(undefined4 *)(param_1 + 0x35c) = *(undefined4 *)(iVar4 + 0x664);
    *(undefined4 *)(param_1 + 0x360) = uVar2;
    *(undefined4 *)(param_1 + 0x364) = uVar1;
  }
  *(byte *)(param_1 + 0x368) = *(byte *)(iVar4 + 0x748) >> 2 & 1;
  *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(iVar4 + 0x7dc);
  *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(iVar4 + 0x578);
  return;
}
