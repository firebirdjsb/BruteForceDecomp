/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0AF9D8EF99D902BB5864EF791A0065F880C3F46A2480B684965B132F6FCA400D
 * Entry: 0x002c8fd0, Ghidra index: 10132, label: FUN_002c8fd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
float10 FUN_002c8fd0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  float10 fVar4;
  undefined4 *puVar5;
  
  if (param_2 == 0) {
    return (float10)0.0;
  }
  fVar4 = (float10)FUN_002c85c0(param_1,param_2,param_3,param_4);
  *(float *)(param_2 + 0x20) = (float)fVar4;
  uVar1 = FUN_002b2b80();
  puVar2 = (undefined4 *)FUN_002beb90((undefined4 *)(param_1 + 0x144),uVar1);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)FUN_002ea01d(0x30);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *(undefined2 *)(puVar2 + 6) = 0;
      *(undefined2 *)((int)puVar2 + 0x1a) = 0;
      puVar2[7] = 0;
      *(undefined2 *)(puVar2 + 8) = 1;
      *(undefined2 *)(puVar2 + 9) = 0;
      *(undefined2 *)((int)puVar2 + 0x26) = 0;
      *(undefined2 *)(puVar2 + 0xb) = 1;
      puVar2[10] = 0;
      puVar2[5] = 0;
    }
    *puVar2 = *(undefined4 *)(param_1 + 0x144);
    puVar2[1] = *(undefined4 *)(param_1 + 0x148);
    puVar2[2] = *(undefined4 *)(param_1 + 0x14c);
    puVar2[3] = *(undefined4 *)(param_1 + 0x150);
    puVar2[4] = *(undefined4 *)(param_1 + 0x154);
    if (*(ushort *)(puVar2 + 9) <= *(ushort *)((int)puVar2 + 0x26)) {
      FUN_002ccf80();
    }
    *(int *)(puVar2[10] + (uint)*(ushort *)((int)puVar2 + 0x26) * 4) = param_2;
    *(short *)((int)puVar2 + 0x26) = *(short *)((int)puVar2 + 0x26) + 1;
    *(undefined4 **)(param_2 + 8) = puVar2;
    if (*(int *)(param_1 + 0x180) == 0) {
      *(undefined4 **)(param_1 + 0x180) = puVar2;
      uVar1 = FUN_002b2b80();
      FUN_002be9e0(puVar2,uVar1);
      return (float10)(float)fVar4;
    }
    do {
      if ((int)puVar2[3] <= *(int *)(*(int *)(param_1 + 0x180) + 0xc)) {
        iVar3 = FUN_002c8550(param_1,puVar2);
        if (iVar3 != 0) goto LAB_002c9136;
      }
      FUN_002c8b90(param_1,puVar2);
    } while( true );
  }
  if (*(ushort *)(puVar2 + 9) <= *(ushort *)((int)puVar2 + 0x26)) {
    FUN_002ccf80();
  }
  *(int *)(puVar2[10] + (uint)*(ushort *)((int)puVar2 + 0x26) * 4) = param_2;
  *(short *)((int)puVar2 + 0x26) = *(short *)((int)puVar2 + 0x26) + 1;
  *(undefined4 **)(param_2 + 8) = puVar2;
LAB_002c91b4:
  *(int *)(param_1 + 0x174) = param_5;
  if (param_5 != 0) {
    FUN_002c8e40(param_2,*(undefined4 *)(param_1 + 0x180),puVar2);
  }
  return (float10)(float)fVar4;
LAB_002c9136:
  iVar3 = *(int *)(param_1 + 0x180);
  if (*(int *)(iVar3 + 0xc) == puVar2[3]) {
    if (*(ushort *)(iVar3 + 0x24) <= *(ushort *)(iVar3 + 0x26)) {
      FUN_002ccf80();
    }
    *(int *)(*(int *)(iVar3 + 0x28) + (uint)*(ushort *)(iVar3 + 0x26) * 4) = param_2;
    *(short *)(iVar3 + 0x26) = *(short *)(iVar3 + 0x26) + 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x180);
    FUN_002c8400();
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(puVar2);
  }
  uVar1 = FUN_002b2b80();
  FUN_002be9e0(puVar2,uVar1);
  puVar5 = puVar2;
  uVar1 = FUN_002c8960(param_1,*(undefined4 *)(param_1 + 0x180),puVar2);
  FUN_002c89c0(param_1,uVar1,puVar5);
  goto LAB_002c91b4;
}
