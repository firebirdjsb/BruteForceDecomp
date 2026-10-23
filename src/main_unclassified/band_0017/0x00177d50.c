/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3699443F401B8A37CD3B48BF9C009C40616D4F7054A3BD29B70A230FE12D9307
 * Entry: 0x00177d50, Ghidra index: 4958, label: FUN_00177d50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698ea;
void FUN_00177d50(short *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  undefined1 local_4c [52];
  float local_18;
  float local_14;
  float local_10;
  int *local_c;
  short *local_8;
  
  if (*(int *)(param_1 + 0x736) != -1) {
    FUN_002385a0();
    fVar3 = (float10)(**(code **)(*(int *)(*(int *)(param_2 + 0x8c) + 0x48) + 0x24))();
    local_10 = (float)fVar3;
    fVar3 = (float10)(**(code **)(*(int *)(*(int *)(param_2 + 0x8c) + 0x48) + 0x28))();
    local_8 = (short *)(float)fVar3;
    FUN_0006be90(0x3dcccccd,*(float *)(param_1 + 0x744) * 6.0);
    local_c = (int *)0x0;
    FUN_0006a610(&local_c);
    *(byte *)(param_2 + 0x84) = *(byte *)(param_2 + 0x84) & 0x7f;
    if (*(int *)(param_2 + 0x8c) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_2 + 0x8c) + 0x48;
    }
    FUN_00236bc0(iVar2,0,0,param_2,local_4c);
    *(byte *)(param_2 + 0x84) = *(byte *)(param_2 + 0x84) | 0x80;
    FUN_0006be90(local_10,local_8);
    FUN_00238630();
  }
  if (((*(byte *)(param_1 + 1) & 1) != 0) || (*(int *)(param_1 + 0x736) == -1)) {
    FUN_002385a0();
    local_10 = 1.079e-42;
    FUN_0006a610(&local_10);
    local_10 = 1.4013e-45;
    FUN_0006a610(&local_10);
    local_10 = 4.2039e-45;
    FUN_0006a610(&local_10);
    fVar3 = (float10)(**(code **)(*(int *)(*(int *)(param_2 + 0x8c) + 0x48) + 0x24))();
    local_18 = (float)fVar3;
    fVar3 = (float10)(**(code **)(*(int *)(*(int *)(param_2 + 0x8c) + 0x48) + 0x28))();
    local_14 = (float)fVar3;
    FUN_0006be90(0xbf800000,*(float *)(param_1 + 0x744) * 1.5);
    local_10 = 1.4013e-45;
    FUN_0006a610(&local_10);
    local_10 = 0.0;
    FUN_0006a610(&local_10);
    FUN_000a4a60(5);
    D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
    local_10 = 1.4013e-45;
    FUN_0006a610(&local_10);
    local_10 = 1.4013e-45;
    FUN_0006a610(&local_10);
    local_10 = 1.4013e-45;
    FUN_0006a610(&local_10);
    iVar2 = 0;
    if (0 < *param_1) {
      local_8 = param_1 + 0x134;
      local_c = (int *)(param_1 + 2);
      do {
        piVar1 = (int *)*local_c;
        if (piVar1 == (int *)0x0) {
          FUN_00062280();
        }
        else {
          (**(code **)(*piVar1 + 0x38))(piVar1,0);
        }
        FUN_000a4d00();
        if (DAT_004698ea == '\0') {
          FUN_002386d0();
          D3D8LTCG__D3DDevice_DrawIndexedVerticesUP(5,0x126,param_1 + 6,local_8,0x18);
        }
        iVar2 = iVar2 + 1;
        local_c = local_c + 1;
        local_8 = local_8 + 0x300;
      } while (iVar2 < *param_1);
    }
    FUN_0006be90(local_18,local_14);
    FUN_00238630();
  }
  return;
}
