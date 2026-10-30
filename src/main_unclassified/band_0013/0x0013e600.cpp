/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 51AAB351D757F4C3B99A3415BBD92C0A38A8AF320147E7CC668498937560B3FD
 * Entry: 0x0013e600, Ghidra index: 4027, label: FUN_0013e600
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046cfd8;
extern uint32_t DAT_0046d064;
void FUN_0013e600(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_3[2];
  local_8 = param_3[1];
  local_c = *param_3;
  local_30 = *param_4;
  uStack_2c = param_4[1];
  uStack_28 = param_4[2];
  uStack_24 = param_4[3];
  local_10 = param_4[8];
  local_20 = param_4[4];
  uStack_1c = param_4[5];
  uStack_18 = param_4[6];
  uStack_14 = param_4[7];
  DAT_0046cfd8 = DAT_0046cfd8 * 0x19660d + 0x3c6ef35f;
  if ((*(int *)(param_1 + 0x38 + param_2 * 4) != DAT_0046d064) &&
     (piVar1 = (int *)FUN_000da800(), piVar1 != (int *)0x0)) {
    *(undefined4 *)(piVar1[0x3a] + 0xc) = 0;
    (**(code **)(*piVar1 + 0x44))(&local_30);
    FUN_0021c380(param_4);
    if ((undefined4 *)piVar1[0x33] != param_4) {
      FUN_0008f6a0(param_4);
    }
    if (param_4 == (undefined4 *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (**(code **)(**(int **)(param_4[2] + 0xbec) + 0xc))(param_4);
    }
    if (piVar1[0x35] != iVar2) {
      FUN_0008f6a0(iVar2);
    }
  }
  return;
}
