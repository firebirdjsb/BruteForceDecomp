/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A049E4103FA559A8FEF8621C40C1090E56F8B6DE40278AAF0AE46CDC99224667
 * Entry: 0x00091070, Ghidra index: 1782, label: FUN_00091070
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern undefined4 FUN_000a4cb0(void);
extern int FUN_00091670(void);
extern undefined4 FUN_002385a0(void);
extern undefined4 FUN_0006a610(int *param_1);
extern undefined4 FUN_000a4a60(int param_1);
extern undefined4 FUN_000a4d00(void);
extern void FUN_000a4d80(void);
extern undefined4 FUN_002386d0(void);
extern void FUN_00238630(void);

extern uint32_t DAT_0037bd48;
extern uint32_t DAT_0037e2c8;
extern uint32_t DAT_003e2304;
undefined4 FUN_00091070(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined3 uVar4;
  undefined3 extraout_var;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *local_14;
  undefined4 *local_10;
  uint local_c;
  uint local_8;
  
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
  if (*(int *)(*(int *)(param_2 + 0xc) + 4) == -0x10bb0c68) {
    iVar2 = FUN_000a4cb0();
    uVar3 = (&DAT_003e2304)[iVar2 * 2];
  }
  else {
    uVar3 = FUN_00091670();
  }
  uVar3 = D3D8LTCG__D3DDevice_SetStreamSource_4(uVar3);
  uVar4 = (undefined3)((uint)uVar3 >> 8);
  if (*(char *)(param_2 + 0x54) != '\0') {
    FUN_002385a0();
    local_14 = (undefined4 *)0x1;
    FUN_0006a610(&local_14);
    local_14 = (undefined4 *)0x1;
    FUN_0006a610(&local_14);
    local_14 = (undefined4 *)0x204;
    FUN_0006a610(&local_14);
    local_14 = (undefined4 *)0x10;
    FUN_0006a610(&local_14);
    local_14 = (undefined4 *)0x1;
    FUN_0006a610(&local_14);
    local_14 = (undefined4 *)0x1;
    FUN_0006a610(&local_14);
    FUN_000a4a60(8);
    FUN_000a4d00();
    puVar5 = *(undefined4 **)(param_2 + 0x50);
    local_c = (uint)*(byte *)(param_2 + 0x54);
    if (local_c != 0) {
      local_14 = puVar5 + local_c * 4 + 2;
      do {
        local_10 = puVar5;
        if ((int)local_c < 3) {
          local_8 = local_c;
          if (local_c == 1) {
            D3D8LTCG__D3DDevice_SetVertexShaderConstant1();
          }
          else {
            if (local_c != 4) goto LAB_00091218;
            D3D8LTCG__D3DDevice_SetVertexShaderConstant4();
          }
        }
        else {
          local_8 = 3;
LAB_00091218:
          if (((byte)DAT_0037bd48 & 0x10) == 0) {
            puVar6 = &DAT_0037e2c8;
            for (iVar2 = local_8 << 2; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar6 = *puVar5;
              puVar5 = puVar5 + 1;
              puVar6 = puVar6 + 1;
            }
          }
          D3D8LTCG__D3DDevice_SetVertexShaderConstantNotInlineFast(local_8 << 2);
        }
        FUN_000a4d80();
        uVar3 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0xc);
        uVar1 = *(undefined4 *)(*(int *)(param_2 + 0x10) + 0x10);
        FUN_002386d0();
        D3D8LTCG__D3DDevice_DrawIndexedVertices(param_3,uVar1,uVar3);
        local_c = local_c - 3;
        puVar5 = local_10 + 0xc;
        local_14 = local_14 + 0xc;
        local_10 = puVar5;
      } while (0 < (int)local_c);
    }
    FUN_00238630();
    uVar4 = extraout_var;
  }
  return CONCAT31(uVar4,1);
}
