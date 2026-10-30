/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C9BCA1F4CA09856F9D8A1D1F4DF8F716148BAC8C808A8EEECFA4DF41DCCB22AD
 * Entry: 0x001597d0, Ghidra index: 4505, label: FUN_001597d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001597d0(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  /* XBE 0x001597D0 reads one guest stack pointer input at S+4,
   * copies its three DWORDs to the owner, then 0x001598A0
   * FSTP DWORD [ESP+0x48] (stable ESP=S-0x44) overwrites
   * that *same incoming guest word* with the Y float delta.
   * At 0x001598F6 LEA ECX,[ESP+0x54] following three
   * temporary pushes takes the address of that same delta
   * for FUN_000DDDD0. Native guest stack aliasing remains
   * ABI_UNVERIFIED; float scratch preserves observed dataflow. */
  float guest_y_delta;
  int iVar6;
  int *in_ECX;
  int iVar7;
  undefined4 *puVar8;
  undefined4 auStack_2c [10];
  uint uStack_4;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  param_1 = (undefined4 *)*param_1;
  iVar6 = in_ECX[0x1b];
  *(undefined4 **)(iVar6 + 0x38) = param_1;
  *(undefined4 *)(iVar6 + 0x3c) = uVar1;
  *(undefined4 *)(iVar6 + 0x40) = uVar2;
  if ((*(byte *)(in_ECX[2] + 0xc50) & 4) == 0) {
    if (((*(int *)(in_ECX[0x1b] + 0x10) != 0) &&
        (iVar6 = *(int *)(*(int *)(in_ECX[0x1b] + 0x10) + 100), iVar6 != 0)) && (iVar6 != -1)) {
      in_ECX[0x11] = *(int *)(*(int *)(iVar6 + 0x5c) + 0x44);
      *(byte *)((int)in_ECX + 0x27) = *(byte *)((int)in_ECX + 0x27) & 0xfe;
      return;
    }
    iVar6 = (**(code **)(*in_ECX + 0x13c))();
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(iVar6 + 0x1b0);
    }
    if (iVar6 != 0) {
      iVar6 = FUN_0014ab50();
      if (iVar6 != 0) {
        in_ECX[0x11] = *(int *)(iVar6 + 0x44);
        *(byte *)((int)in_ECX + 0x27) = *(byte *)((int)in_ECX + 0x27) & 0xfe;
        return;
      }
    }
    iVar6 = (**(code **)(*in_ECX + 0x40))();
    fVar4 = *(float *)(iVar6 + 0x2c) - (float)in_ECX[0x65];
    guest_y_delta = *(float *)(iVar6 + 0x28) - (float)in_ECX[100];
    fVar5 = *(float *)(iVar6 + 0x24) - (float)in_ECX[99];
    if (0.09 < fVar5 * fVar5 + guest_y_delta * guest_y_delta + fVar4 * fVar4) {
      iVar6 = *in_ECX;
      puVar8 = auStack_2c;
      for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      (**(code **)(iVar6 + 0x40))();
      FUN_000dddd0(in_ECX[2],&guest_y_delta,0x42480000,in_ECX);
      iVar6 = in_ECX[0x1b];
      in_ECX[0x11] = 2 - (uint)((uStack_4 & 1) != 0);
      iVar7 = *(int *)(iVar6 + 0x40);
      iVar3 = *(int *)(iVar6 + 0x3c);
      in_ECX[99] = *(int *)(iVar6 + 0x38);
      in_ECX[100] = iVar3;
      in_ECX[0x65] = iVar7;
    }
  }
  *(byte *)((int)in_ECX + 0x27) = *(byte *)((int)in_ECX + 0x27) & 0xfe;
  return;
}
