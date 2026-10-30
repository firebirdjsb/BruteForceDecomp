/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 69094C16CB8A64241701CD1CD4522A6F1B1F722A380786E3F680BBA21A1CBB4D
 * Entry: 0x00350130, Ghidra index: 13047, label: FUN_00350130
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00350130(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  int in_ECX;
  uint uVar4;
  uint local_10;
  int local_c;
  undefined1 local_8;
  
  local_8 = KeRaiseIrqlToDpcLevel();
  if (param_1 == 0) {
    uVar3 = (*(byte *)(in_ECX + 0x8c4) & 8) >> 3;
  }
  else {
    *(byte *)(in_ECX + 0x8c4) = *(byte *)(in_ECX + 0x8c4) & 0xf7;
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(in_ECX + 0xa4c);
    *(undefined2 *)(param_1 + 0x198) = *(undefined2 *)(in_ECX + 0xa50);
    uVar2 = *(undefined2 *)(in_ECX + 0xa52);
    *(undefined4 *)(param_1 + 0x154) = 0;
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(undefined2 *)(param_1 + 0x19a) = uVar2;
    cVar1 = *(char *)(in_ECX + 0x8c0);
    if (((cVar1 == '\f') || (cVar1 == '\r')) || (cVar1 == '\x0e')) {
      KeQuerySystemTime(&local_10);
      if ((0x1c19256 < local_c) && ((0x1c19257 < local_c || (0x41647fff < local_10)))) {
        uVar3 = (uint)(*(int *)(in_ECX + 0x1d8) - *(int *)(in_ECX + 0x918)) / 5;
        if (uVar3 <= *(uint *)(in_ECX + 0x924)) {
          uVar4 = (uint)*(byte *)(in_ECX + 0x23) * 0x15180;
          uVar3 = *(uint *)(in_ECX + 0x924) - uVar3;
          if (uVar3 < uVar4) {
            uVar4 = uVar3;
          }
          if ((uint)*(byte *)(in_ECX + 0x22) * 0xe10 <= uVar4) {
            *(uint *)(param_1 + 0x154) = local_10;
            *(int *)(param_1 + 0x158) = local_c;
            *(uint *)(param_1 + 0x15c) = uVar4;
            *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(in_ECX + 0x8e8);
            *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(in_ECX + 0x8ec);
            *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(in_ECX + 0x928);
            *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(in_ECX + 0x900);
            *(undefined4 *)(param_1 + 0x170) = *(undefined4 *)(in_ECX + 0x904);
            *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(in_ECX + 0x908);
            *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(in_ECX + 0x90c);
            *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(in_ECX + 0x8f0);
            *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(in_ECX + 0x8f4);
            *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(in_ECX + 0x8f8);
            *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(in_ECX + 0x8fc);
          }
        }
      }
    }
    uVar3 = 1;
  }
  KfLowerIrql();
  return uVar3;
}
