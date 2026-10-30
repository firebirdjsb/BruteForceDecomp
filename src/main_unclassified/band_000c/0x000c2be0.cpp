/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1806E76D3D2C9313CE164CBAA2EFC979C6F2A3217611486A6F8F31D6E7937634
 * Entry: 0x000c2be0, Ghidra index: 2379, label: FUN_000c2be0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern float10 FUN_000b2870(int param_1);
extern float10 FUN_000b2770(int param_1);

void FUN_000c2be0(int param_1)

{
  float fVar1;
  short sVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  undefined4 local_10;
  
  fVar6 = (float10)FUN_000b2870(*(undefined4 *)(param_1 + 0x34));
  sVar2 = *(short *)(param_1 + 0xc);
  fVar1 = (float)(fVar6 + (float10)5.0);
  fVar6 = (float10)FUN_000b2770(*(undefined4 *)(param_1 + 0x34));
  iVar3 = *(int *)(param_1 + 0x34);
  local_10 = (float)((fVar6 - (float10)(int)sVar2) - (float10)10.0);
  sVar2 = *(short *)(iVar3 + 0x22);
  fVar4 = ((float)(int)*(short *)(iVar3 + 0x20) * 0.5 - (float)(int)*(short *)(param_1 + 0xe)) -
          20.0;
  if ((*(byte *)(param_1 + 0x74) & 1) != 0) {
    fVar1 = fVar1 - 28.0;
    local_10 = local_10 + 33.0;
    fVar4 = fVar4 + 31.0;
  }
  fVar5 = 1.0 - *(float *)(*(int *)(iVar3 + 0x34) + 0x98) /
                *(float *)(*(int *)(iVar3 + 0x34) + 0x9c);
  fVar5 = 1.0 - fVar5 * fVar5 * fVar5;
  *(short *)(param_1 + 8) = (short)(int)((fVar4 - fVar1) * fVar5 + fVar1);
  *(short *)(param_1 + 10) =
       (short)(int)((((float)((int)sVar2 - (int)*(short *)(param_1 + 0xc)) * 0.5 + 5.0) - local_10)
                    * fVar5 + local_10);
  return;
}
