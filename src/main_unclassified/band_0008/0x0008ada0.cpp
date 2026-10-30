/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 78CDABA190FFDFC9AED8A3AAD7E72D14D7D60BCF96C60D82058225BD7C9B3952
 * Entry: 0x0008ada0, Ghidra index: 1669, label: FUN_0008ada0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0014bc50(void);
extern undefined4 FUN_0005c0d0(void);
extern void FUN_00074c80(int param_1);
extern void FUN_0005bee0(int param_1,int param_2);
extern uint FUN_000db3e0(int *param_1);
extern void FUN_0005b9a0(uint *param_1,int param_2);
extern void FUN_0005bda0(void);
extern void FUN_00056fe0(int param_1,int param_2,int *param_3);
extern void FUN_00017b60(int32_t* param_1, int32_t param_2);
extern void FUN_00209a80(void);
extern void FUN_0005b5d0(byte param_1);

extern uint32_t DAT_00469b58;
int * FUN_0008ada0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  
  if (((param_2 != 0) && (*(int *)(param_1 + 0x28) != 0)) && ((*(byte *)(param_2 + 0x70) & 1) != 0))
  {
    piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x58))();
    if (*piVar2 == 0x120785ef) {
      FUN_0014bc50();
    }
    iVar3 = FUN_0005c0d0();
    if (iVar3 != 0) {
      piVar2 = (int *)FUN_0008b300(param_1);
      if (piVar2 != (int *)0x0) {
        iVar1 = piVar2[2];
        FUN_00074c80(piVar2);
        FUN_0005bee0(*(undefined4 *)(param_1 + 0x28),param_2);
        fVar5 = *(float *)(param_2 + 0x1a8);
        if (2.0 <= *(float *)(param_2 + 0x1a8)) {
          fVar5 = 2.0;
        }
        *(float *)(param_2 + 0x1a8) = fVar5;
        if ((*(byte *)(param_2 + 0x26) & 8) == 0) {
          FUN_000db3e0(param_2);
        }
        FUN_0005b9a0(*(undefined4 *)(param_1 + 0x28),piVar2);
        FUN_0005bda0();
        if (*(int *)(iVar1 + 0x1f8) != 0) {
          FUN_00056fe0(*(int *)(iVar1 + 0x1f8),piVar2,0);
        }
        uVar6 = 0;
        uVar4 = (**(code **)(*piVar2 + 0xf4))(0);
        FUN_00017b60(uVar4,uVar6);
        if (*(int *)(iVar3 + 0xc) != 0) {
          FUN_00209a80();
        }
        (**(code **)(**(int **)(*(int *)(param_1 + 0x38) + 0xbec) + 0x78))(piVar2);
        return piVar2;
      }
      FUN_0005b5d0(1);
    }
    return (int *)0x0;
  }
  return (int *)0x0;
}
