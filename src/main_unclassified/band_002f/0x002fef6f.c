/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7AEA9255ACAECBBDC2D32CDE9A01A1B970E1614E98C2122C050AAB1F712A405E
 * Entry: 0x002fef6f, Ghidra index: 11050, label: FUN_002fef6f
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00414b4c;
extern uint32_t DAT_00414b50;
void FUN_002fef6f(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 char param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint local_28;
  int *local_24;
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int *local_10;
  uint local_c;
  int local_8;
  
  local_1c = *(int *)(param_2 + 8);
  local_20 = local_20 & 0xffffff00;
  if ((local_1c < -1) || (*(int *)(param_5 + 4) <= local_1c)) {
    __inconsistency__YAXXZ();
  }
  piVar4 = DAT_00414b4c;
  if (*param_1 == -0x1f928c9d) {
    if (((param_1[4] == 3) && (param_1[5] == 0x19930520)) && (param_1[7] == 0)) {
      if (DAT_00414b4c == (int *)0x0) {
        return;
      }
      param_1 = DAT_00414b4c;
      param_3 = DAT_00414b50;
      local_20 = CONCAT31(local_20._1_3_,1);
      iVar3 = FUN_002ff3a8(DAT_00414b4c,1);
      if (iVar3 == 0) {
        __inconsistency__YAXXZ();
      }
      if (*piVar4 != -0x1f928c9d) goto LAB_002ff121;
      if (((piVar4[4] == 3) && (piVar4[5] == 0x19930520)) && (piVar4[7] == 0)) {
        __inconsistency__YAXXZ();
      }
    }
    if (((*param_1 == -0x1f928c9d) && (param_1[4] == 3)) && (param_1[5] == 0x19930520)) {
      piVar4 = (int *)__GetRangeOfTrysToCheck__YAPBU_s_TryBlockMapEntry__PBU_s_FuncInfo__HHPAI1_Z
                                (param_5,param_7,local_1c,&local_c,&local_28);
      do {
        local_24 = piVar4;
        if (local_28 <= local_c) {
          if (param_6 == '\0') {
            return;
          }
          ___DestructExceptionObject(param_1,1);
          return;
        }
        if ((*piVar4 <= local_1c) && (local_1c <= piVar4[1])) {
          local_8 = piVar4[4];
          local_18 = piVar4[3];
          if (0 < local_18) {
            piVar1 = *(int **)(param_1[7] + 0xc);
            iVar3 = *piVar1;
            iVar5 = iVar3;
            piVar2 = piVar1;
            do {
              while (local_14 = iVar5, local_10 = piVar2 + 1, 0 < local_14) {
                iVar5 = FUN_002fe98a(param_1[7]);
                if (iVar5 != 0) {
                  _CatchIt__YAXPAUEHExceptionRecord__PAUEHRegistrationNode__PAU_CONTEXT__PAXPBU_s_FuncInfo__PBU_s_HandlerType__PBU_s_CatchableType__PBU_s_TryBlockMapEntry__H1E_Z
                            (param_1,param_3,param_4,param_5,param_7,param_8,local_20);
                  piVar4 = local_24;
                  goto LAB_002ff0f4;
                }
                piVar2 = local_10;
                iVar5 = local_14 + -1;
              }
              local_18 = local_18 + -1;
              local_8 = local_8 + 0x10;
              iVar5 = iVar3;
              piVar2 = piVar1;
            } while (0 < local_18);
          }
        }
LAB_002ff0f4:
        local_c = local_c + 1;
        piVar4 = piVar4 + 5;
      } while( true );
    }
  }
LAB_002ff121:
  if (param_6 == '\0') {
    FUN_002feead(param_1,param_2,param_3,param_4,param_5,local_1c,param_7,param_8);
    return;
  }
  FUN_002ff1ee();
  return;
}
