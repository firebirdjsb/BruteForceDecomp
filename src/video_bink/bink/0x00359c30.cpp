/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 72D663340DA744CE4CBF08D47D935E73C01A4208C40637780130FFA3CE823E11
 * Entry: 0x00359c30, Ghidra index: 13170, label: FUN_00359c30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b168c;
extern uint32_t DAT_004b1690;
void FUN_00359c30(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  FUN_00358ff0(param_1,1);
  if (((param_1[8] & 0x8000000) != 0) || (uVar3 = DAT_004b168c, param_1[0x42] != 0)) {
    uVar3 = 0;
  }
  iVar2 = FUN_0035afc0(uVar3,param_1 + 0x83,-(uint)(param_1[0xbe] != 0) & DAT_004b1690,
                       param_1 + 0xd3,1);
  if (iVar2 == 1) {
LAB_00359c9b:
    DAT_004b168c = 0;
  }
  else if (iVar2 == 2) {
    DAT_004b1690 = 0;
  }
  else if (iVar2 == 3) {
    DAT_004b1690 = 0;
    goto LAB_00359c9b;
  }
  uVar4 = 0;
  if (param_1[0xbe] != 0) {
    iVar2 = 0;
    do {
      (**(code **)(iVar2 + param_1[0xc0] + 0x1c))(iVar2 + param_1[0xc0]);
      thunk_FUN_002f8e70(*(undefined4 *)(iVar2 + 0x3c + param_1[0xc0]));
      iVar1 = *(int *)(iVar2 + 0x2c + param_1[0xc0]);
      if (iVar1 != 0) {
        FUN_002f8e70(iVar1);
      }
      uVar4 = uVar4 + 1;
      iVar2 = iVar2 + 0x178;
    } while (uVar4 < (uint)param_1[0xbe]);
  }
  FUN_0035f9e0();
  iVar2 = param_1[0x42];
  if (iVar2 == 0) {
    (*(code *)param_1[0x49])(param_1 + 0x44);
    iVar2 = param_1[0x93];
  }
  else if ((param_1[8] & 0x4000000) != 0) goto LAB_00359d2e;
  FUN_002f8e70(iVar2);
LAB_00359d2e:
  if (param_1[0x2f] != 0) {
    FUN_002f8e70(param_1[0x2f]);
  }
  puVar5 = param_1;
  for (iVar2 = 0xe3; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  FUN_002f8e70(param_1);
  return;
}
