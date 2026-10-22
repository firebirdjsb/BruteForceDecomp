/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1F4CDF8233A80ABA80177CF4A47CA829ED17BF07BCEC94AC7BE5C0822302A666
 * Entry: 0x00350a7a, Ghidra index: 13054, label: FUN_00350a7a
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00350a7a(undefined2 param_1,undefined1 param_2,undefined1 param_3,undefined4 *param_4,
                 uint param_5,undefined4 *param_6,uint param_7,undefined4 *param_8,uint param_9,
                 undefined4 *param_10,uint param_11,undefined4 *param_12,undefined2 param_13,
                 undefined2 param_14)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  short sVar4;
  int in_ECX;
  uint uVar5;
  
  if (param_12 == (undefined4 *)0x0) {
    param_13 = *(undefined2 *)(in_ECX + 0xa54);
    param_14 = *(undefined2 *)(in_ECX + 0xa52);
    param_12 = (undefined4 *)(in_ECX + 0xa4c);
  }
  iVar1 = FUN_0034cb5a(0x4b54454e,0xc0000,param_5 + param_7 + param_9 + 4 + param_11,0,0,0);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_0034c841();
    *puVar2 = *param_12;
    *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(param_12 + 1);
    *(undefined4 *)((int)puVar2 + 6) = *(undefined4 *)(in_ECX + 0x1e0);
    *(undefined2 *)((int)puVar2 + 10) = *(undefined2 *)(in_ECX + 0x1e4);
    *(undefined2 *)(puVar2 + 3) = param_13;
    *(undefined1 *)((int)puVar2 + 0xf) = 0;
    *(undefined2 *)(puVar2 + 4) = param_14;
    *(undefined1 *)((int)puVar2 + 0xe) = 0x11;
    sVar4 = *(short *)(iVar1 + 4) + 2;
    *(undefined2 *)(puVar2 + 5) = param_1;
    puVar3 = (undefined4 *)((int)puVar2 + 0x1a);
    *(ushort *)((int)puVar2 + 0x12) = CONCAT11((char)sVar4,(char)((ushort)sVar4 >> 8));
    *(undefined1 *)((int)puVar2 + 0x16) = param_2;
    *(undefined1 *)((int)puVar2 + 0x17) = param_3;
    *(ushort *)(puVar2 + 6) =
         CONCAT11((char)*(undefined2 *)(iVar1 + 4),(char)((ushort)*(undefined2 *)(iVar1 + 4) >> 8));
    if (param_5 != 0) {
      puVar2 = puVar3;
      for (uVar5 = param_5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar2 = *param_4;
        param_4 = param_4 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar5 = param_5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)param_4;
        param_4 = (undefined4 *)((int)param_4 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      puVar3 = (undefined4 *)((int)puVar3 + param_5);
    }
    if (param_7 != 0) {
      puVar2 = puVar3;
      for (uVar5 = param_7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar2 = *param_6;
        param_6 = param_6 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar5 = param_7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)param_6;
        param_6 = (undefined4 *)((int)param_6 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      puVar3 = (undefined4 *)((int)puVar3 + param_7);
    }
    if (param_9 != 0) {
      puVar2 = puVar3;
      for (uVar5 = param_9 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar2 = *param_8;
        param_8 = param_8 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar5 = param_9 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)param_8;
        param_8 = (undefined4 *)((int)param_8 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
      puVar3 = (undefined4 *)((int)puVar3 + param_9);
    }
    if (param_11 != 0) {
      for (uVar5 = param_11 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar3 = *param_10;
        param_10 = param_10 + 1;
        puVar3 = puVar3 + 1;
      }
      for (param_11 = param_11 & 3; param_11 != 0; param_11 = param_11 - 1) {
        *(undefined1 *)puVar3 = *(undefined1 *)param_10;
        param_10 = (undefined4 *)((int)param_10 + 1);
        puVar3 = (undefined4 *)((int)puVar3 + 1);
      }
    }
    FUN_00355bae(iVar1,0);
  }
  return;
}
