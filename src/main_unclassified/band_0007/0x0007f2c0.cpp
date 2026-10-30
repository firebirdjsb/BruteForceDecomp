/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 60F320F45D000ACD7E94C8E8A1840ACABE9F70FECBBA1F05972A904ECE4B866B
 * Entry: 0x0007f2c0, Ghidra index: 1499, label: FUN_0007f2c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint FUN_00076f10(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int FUN_00076f80(void);
extern undefined4 FUN_0023a1c0(undefined4 param_1);

extern uint32_t DAT_00400538;
extern uint32_t DAT_0040054c;
extern uint32_t DAT_004698bc;
extern uint32_t *DAT_00469908;
extern uint32_t DAT_00469924;
extern uint32_t DAT_00469974;
extern char s__s_s_s_0040dd8c[];
extern char s_campaign_0040dd68[];
bool FUN_0007f2c0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_EAX;
  int iVar4;
  undefined4 *puVar5;
  bool local_10d;
  int *local_10c;
  int *local_108;
  undefined1 local_104 [260];
  
  local_10d = false;
  if (in_EAX == 0) {
    return false;
  }
  local_108 = (int *)0x0;
  local_10c = (int *)0x0;
  iVar4 = FUN_00076f10(&local_108,in_EAX + 0x10,*(undefined4 *)(in_EAX + 0x28));
  piVar1 = local_108;
  uVar2 = DAT_004698bc;
  uVar3 = DAT_00469924;
  if (-1 < iVar4) {
    puVar5 = DAT_00400538;
    if (DAT_0040054c < 0x10) {
      puVar5 = &DAT_00400538;
    }
    FUN_002eaa19(local_104,0x104,s__s_s_s_0040dd8c,param_2,s_campaign_0040dd68,puVar5);
    if (local_10c != (int *)0x0) {
      (**(code **)(*local_10c + 8))(local_10c);
      local_10c = (int *)0x0;
    }
    iVar4 = (**(code **)(*DAT_00469908 + 0xc))(DAT_00469908,local_104,0x40000001,&local_10c);
    uVar3 = DAT_00469924;
    uVar2 = DAT_004698bc;
    if (-1 < iVar4) {
      if (DAT_00469974 != '\0') {
        DAT_00469924 = 1;
        DAT_004698bc = 7;
        (**(code **)(*local_10c + 0x38))(local_10c,7);
      }
      iVar4 = FUN_00076f80();
      if (-1 < iVar4) {
        iVar4 = FUN_0023a1c0(local_104);
        local_10d = -1 < iVar4;
      }
    }
  }
  DAT_00469924 = uVar3;
  DAT_004698bc = uVar2;
  if (local_10c != (int *)0x0) {
    (**(code **)(*local_10c + 8))(local_10c);
    local_10c = (int *)0x0;
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return local_10d;
}
