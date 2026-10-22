/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 2015D25F3557B1E67FF83DD5559AC73E8494F2AD00455660B9882E62C0E96D8F
 * Entry: 0x003457b3, Ghidra index: 12816, label: FUN_003457b3
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_003457b3(int param_1,short param_2)

{
  ushort *puVar1;
  ushort uVar2;
  uint uVar3;
  int in_ECX;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 uVar8;
  
  uVar5 = 0;
  if (param_2 == 0) {
    uVar5 = 0xe8;
    if (*(byte *)(in_ECX + 10) < 0xe8) {
      uVar5 = (uint)*(byte *)(in_ECX + 10);
    }
  }
  KeRaiseIrqlToDpcLevel();
  puVar7 = *(uint **)(in_ECX + 0xbd8U);
  puVar7 = (uint *)(-(uint)(puVar7 != (uint *)(in_ECX + 0xbd8U)) & (uint)puVar7);
  do {
    uVar6 = uVar5 - 1;
    if (0 < (int)uVar5) {
      puVar1 = (ushort *)(in_ECX + 0xbd6);
      uVar2 = *puVar1;
      param_2 = CONCAT11((char)uVar2,(char)(uVar2 >> 8));
      *puVar1 = uVar2 + 1;
      if (0x4e7 < (ushort)(uVar2 + 1)) {
        *puVar1 = 0x400;
      }
    }
    puVar4 = puVar7;
    if (puVar7 == (uint *)0x0) {
LAB_003458b0:
      *(short *)(param_1 + 0x4a) = param_2;
      FUN_00345541(0xffffffff,0x20);
      uVar8 = 0;
      goto LAB_0034589e;
    }
    do {
      uVar5 = puVar4[3];
      if (((((uVar5 & 0x20) != 0) &&
           (uVar3 = *(uint *)(param_1 + 0xc), ((~(uVar3 >> 1) ^ ~(uVar5 >> 1)) & 1) == 0)) &&
          (*(short *)((int)puVar4 + 0x4a) == param_2)) &&
         ((((uVar5 & 0x100000) != 0 || ((uVar3 & 0x100000) != 0)) || ((uVar3 & 0x80000) == 0))))
      break;
      puVar4 = (uint *)(-(uint)(*puVar4 != in_ECX + 0xbd8U) & *puVar4);
    } while (puVar4 != (uint *)0x0);
    if (puVar4 == (uint *)0x0) goto LAB_003458b0;
    uVar5 = uVar6;
  } while (0 < (int)uVar6);
  uVar8 = 0x80072740;
LAB_0034589e:
  KfLowerIrql();
  return uVar8;
}
