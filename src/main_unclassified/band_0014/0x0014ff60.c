/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: FEB0639545FEE117860710CDB1A1AB79568BD63A8F6734F87D39AA4135398671
 * Entry: 0x0014ff60, Ghidra index: 4402, label: FUN_0014ff60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
bool FUN_0014ff60(undefined4 param_1,undefined4 param_2,int param_3)

{
  int in_EAX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int unaff_ESI;
  float10 fVar3;
  undefined1 auStack_2c [4];
  undefined4 local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  byte local_4;
  
  local_4 = (local_4 & 0xfc | 4) ^ *(byte *)(in_ECX + 0xf) >> 4 & 1;
  local_10 = 0x3f800000;
  local_8 = 0;
  local_1c = 0x3f800000;
  local_28 = 0xf4e18a7c;
  local_c = (-(uint)((*(byte *)(in_ECX + 0xf) & 2) != 0) & 0xf551247c) + 0xf9d40e62;
  local_18 = in_ECX[0x10];
  local_24 = 0.0;
  local_20 = *(float *)(*(int *)(unaff_ESI + 0xc) + 0x29c) * (float)in_ECX[0x11];
  local_14 = local_18;
  fVar3 = (float10)(**(code **)(**(int **)(unaff_ESI + 0x5a4) + 0xd0))(*in_ECX);
  local_14 = param_1;
  local_24 = (float)(fVar3 * (float10)local_24);
  if ((*(byte *)((int)in_ECX + 0x3d) & 4) != 0) {
    if (*(int *)(unaff_ESI + 0x248) != 0) {
      FUN_0023d3e0();
      *(undefined4 *)(unaff_ESI + 0x248) = 0;
    }
    if (0.0 <= *(float *)(unaff_ESI + 0x4a0)) {
      fVar3 = (float10)FUN_0001fae0(*(float *)(unaff_ESI + 0x4a0) + 3.1415927);
      param_2 = (float)fVar3;
    }
    else {
      param_2 = -1.0;
    }
    iVar1 = FUN_0023d240(*(undefined4 *)(unaff_ESI + 500),in_EAX + 0x14,auStack_2c,param_2);
    *(int *)(unaff_ESI + 0x248) = iVar1;
    return iVar1 != 0;
  }
  if (*(int *)(unaff_ESI + 0x228 + param_3 * 4) != 0) {
    FUN_0023d3e0();
    *(undefined4 *)(unaff_ESI + 0x228 + param_3 * 4) = 0;
  }
  if (0.0 <= *(float *)(unaff_ESI + 0x4a0)) {
    fVar3 = (float10)FUN_0001fae0(*(float *)(unaff_ESI + 0x4a0) + 3.1415927);
    param_2 = (float)fVar3;
  }
  else {
    param_2 = -1.0;
  }
  puVar2 = (undefined4 *)
           FUN_0023d240(*(undefined4 *)(unaff_ESI + 500),in_EAX + 0x14,auStack_2c,param_2);
  *(undefined4 **)(unaff_ESI + 0x228 + param_3 * 4) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    *(float *)(unaff_ESI + 0x550) = *(float *)*puVar2 - (float)puVar2[0xe];
    *(int *)(unaff_ESI + 0x234 + param_3 * 4) = in_EAX;
  }
  return puVar2 != (undefined4 *)0x0;
}
