/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 26ADAAE453B190FE795E7A367798CE9BC25C2526EBEC2F1B46B505A0E7C5EC7E
 * Entry: 0x0014d7c0, Ghidra index: 4370, label: FUN_0014d7c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0039b1ac;
int * FUN_0014d7c0(int *param_1,int *param_2,char param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int local_1c [2];
  int *local_14;
  int local_10;
  undefined *local_c;
  undefined4 local_8;
  
  if (*(int *)(in_ECX + 0x1b4) == 0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    return param_1;
  }
  iVar3 = *param_2;
  iVar4 = param_2[1];
  local_14 = (int *)0xa;
  local_10 = -1;
  local_c = &DAT_0039b1ac;
  local_8 = 0xffffffff;
  FUN_0014d610(&local_c);
  if (iVar3 == 10) {
    if (iVar4 == -1) {
      iVar4 = -2;
      cVar1 = FUN_0014d680(10,0xfffffffe);
      if (cVar1 == '\0') {
        iVar4 = -1;
      }
      local_14 = (int *)0xa;
      local_10 = iVar4;
      goto LAB_0014d860;
    }
    if (iVar4 == -2) {
      iVar3 = 10;
      iVar4 = -1;
    }
  }
  else {
LAB_0014d860:
    if (iVar4 == -2) goto LAB_0014d89c;
  }
  cVar1 = FUN_0014c300(*(undefined4 *)(in_ECX + 0x1b4),iVar3,iVar4,&param_2,local_1c,&local_c);
  if (cVar1 != '\0') {
    local_14 = param_2;
    local_10 = local_1c[0];
  }
LAB_0014d89c:
  if (((local_14 == (int *)0xa) && (local_10 == -1)) && (param_3 != '\0')) {
    puVar2 = (undefined4 *)FUN_0014d7c0(local_1c,&local_14,0);
    local_14 = (int *)*puVar2;
    local_10 = puVar2[1];
  }
  param_1[1] = local_10;
  *param_1 = (int)local_14;
  return param_1;
}
