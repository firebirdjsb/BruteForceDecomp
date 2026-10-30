/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 372FAE99587562C249433FAD0C2D171E144F0EB51F069BFA27E7FB3BF79F6599
 * Entry: 0x000694f0, Ghidra index: 1164, label: FUN_000694f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_00095360(void);
extern undefined4 FUN_002385a0(void);
extern undefined4 FUN_00062280(void);
extern undefined4 FUN_0006a610(int *param_1);
extern undefined4 FUN_000a4a60(int param_1);
extern undefined4 FUN_000a4d00(void);
extern void FUN_00238630(void);

extern uint32_t DAT_0046b2e8;
void FUN_000694f0(int *param_1)

{
  float fVar1;
  char cVar2;
  float fVar3;
  float10 fVar4;
  float fStack_8;
  float fStack_4;
  
  if ((char)param_1[0x3c] == '\0') {
    return;
  }
  cVar2 = (**(code **)(*(int *)param_1[2] + 0x24))();
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x3c) = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    param_1[0x40] = 0;
    param_1[0x41] = 0x3f800000;
    param_1[0x42] = 0;
    return;
  }
  fVar4 = (float10)(**(code **)(*param_1 + 0x44))();
  fVar4 = (fVar4 - (float10)(float)param_1[0x42]) * (float10)(float)param_1[0x41];
  if ((float10)1.0 < fVar4) {
    fVar4 = (float10)1.0;
    if (param_1[0x3d] != 0) goto LAB_000695af;
    *(undefined1 *)(param_1 + 0x3c) = 0;
  }
  if (param_1[0x3d] == 0) {
    fVar4 = (float10)1.0 - fVar4;
  }
LAB_000695af:
  fVar3 = (float)(int)(fVar4 * (float10)255.0);
  if (0.0 < (float)(int)fVar3) {
    fStack_8 = fVar3;
    FUN_00095360();
    FUN_002385a0();
    FUN_00062280();
    fStack_8 = 1.4013e-45;
    FUN_0006a610(&fStack_8);
    fStack_8 = 1.079e-42;
    FUN_0006a610(&fStack_8);
    fStack_8 = 1.0804e-42;
    FUN_0006a610(&fStack_8);
    fStack_8 = 7.27274e-43;
    FUN_0006a610(&fStack_8);
    fStack_8 = 0.0;
    FUN_0006a610(&fStack_8);
    FUN_000a4a60(6);
    FUN_000a4d00();
    FUN_00062230(8);
    D3D8LTCG__D3DDevice_SetVertexDataColor
              (3,((param_1[0x3e] & 0xffU | (int)fVar3 << 8) << 8 | param_1[0x3f] & 0xffU) << 8 |
                 param_1[0x40] & 0xffU);
    fStack_8 = (float)param_1[7];
    fStack_4 = (float)param_1[8];
    FUN_00062170(&DAT_0046b2e8,0,0,0);
    fVar3 = fStack_8;
    FUN_00062170(&DAT_0046b2e8,0,fStack_8,0);
    fVar1 = fStack_4;
    FUN_00062170(&DAT_0046b2e8,0,fVar3,fStack_4);
    FUN_00062170(&DAT_0046b2e8,0,0,fVar1);
    D3D8LTCG__D3DDevice_End();
    FUN_00238630();
  }
  return;
}
