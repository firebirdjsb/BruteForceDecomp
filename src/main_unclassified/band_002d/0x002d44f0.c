/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E14462DCA6DA6E06808A74AD2289FA584F59E15985DA4063D8D595434347E9B9
 * Entry: 0x002d44f0, Ghidra index: 10206, label: FUN_002d44f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002d44f0(int param_1)

{
  int *piVar1;
  float fVar2;
  float *pfVar3;
  float *in_EAX;
  uint uVar4;
  uint uVar5;
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  piVar1 = (int *)in_EAX[0x3b] + 0x1a;
  *(short *)piVar1 = (short)*piVar1 + (1 - (short)((*(int *)in_EAX[0x3b] << 0x1c) >> 0x1e));
  piVar1 = (int *)in_EAX[0x3c] + 0x1a;
  *(short *)piVar1 = (short)*piVar1 + (1 - (short)((*(int *)in_EAX[0x3c] << 0x1c) >> 0x1e));
  if (in_EAX[3] != 0.0) {
    uVar5 = (uint)(in_EAX[1] <= in_EAX[2]);
    uVar4 = (uint)(in_EAX[2] < in_EAX[1]);
    if ((**(byte **)(param_1 + uVar5 * 4) & 0xc) == 0) {
      local_24 = 0;
      local_14 = 0;
      local_34 = 0;
      local_44 = 0;
      local_4c = in_EAX[uVar4 * 4 + 10];
      local_50 = in_EAX[uVar4 * 4 + 9];
      local_48 = in_EAX[uVar4 * 4 + 0xb];
      local_4 = 0;
      local_3c = in_EAX[uVar4 * 4 + 0x12];
      local_38 = in_EAX[uVar4 * 4 + 0x13];
      local_40 = in_EAX[uVar4 * 4 + 0x11];
      fVar2 = in_EAX[uVar5 + 0x3b];
      local_1c = *(undefined4 *)((int)fVar2 + 0xa0);
      local_20 = *(undefined4 *)((int)fVar2 + 0x9c);
      local_18 = *(undefined4 *)((int)fVar2 + 0xa4);
      fVar2 = in_EAX[uVar5 + 0x3b];
      local_2c = *(undefined4 *)((int)fVar2 + 0xb0);
      local_28 = *(undefined4 *)((int)fVar2 + 0xb4);
      local_30 = *(undefined4 *)((int)fVar2 + 0xac);
      FUN_002ba260(in_EAX[uVar5 + 0x3d],in_EAX[uVar4 + 0x3d],&local_30,&local_40,&local_50,&local_10
                  );
      pfVar3 = (float *)in_EAX[0x42];
      fVar2 = local_10 * *pfVar3 + local_8 * pfVar3[2] + local_c * pfVar3[1];
      if (uVar5 != 0) {
        fVar2 = fVar2 * -1.0;
      }
      if (fVar2 < *in_EAX * -0.8333333) {
        *(int *)(*(int *)((int)in_EAX[0x3b] + 0xc) + 100) =
             *(int *)(*(int *)((int)in_EAX[0x3b] + 0xc) + 100) + 1;
        *(undefined4 *)(param_1 + uVar5 * 4) = 0;
        FUN_002d47a0();
        FUN_002d37e0();
        FUN_002d46f0(in_EAX,uVar5);
        *(short *)((int)in_EAX[uVar5 + 0x3b] + 0x68) =
             *(short *)((int)in_EAX[uVar5 + 0x3b] + 0x68) + -1;
        return;
      }
    }
  }
  FUN_002d47a0();
  FUN_002d37e0();
  FUN_002d37e0();
  return;
}
