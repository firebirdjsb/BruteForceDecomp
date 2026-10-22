/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C1B713094141B19ECB42E2963516ED961F3E952F245148328587074300A73CA6
 * Entry: 0x0014d960, Ghidra index: 4372, label: FUN_0014d960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0039b1ac;
void FUN_0014d960(undefined4 *param_1,int *param_2,char param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int in_ECX;
  int local_1c [2];
  int *local_14;
  int local_10;
  undefined *local_c;
  undefined4 local_8;
  
  local_14 = (int *)0xa;
  local_10 = -1;
  if ((*param_2 == 10) && (param_2[1] == -2)) {
    local_14 = (int *)0xa;
    local_10 = -1;
  }
  else if (*(int *)(in_ECX + 0x1b4) != 0) {
    local_c = &DAT_0039b1ac;
    local_8 = 0xffffffff;
    FUN_0014d610(&local_c);
    cVar1 = FUN_0014c230(*(undefined4 *)(in_ECX + 0x1b4),&param_2,local_1c,&local_c);
    if (cVar1 == '\0') {
      local_14 = (int *)0xa;
      local_10 = -2;
      cVar1 = FUN_0014d680(10,0xfffffffe);
      if (cVar1 == '\0') {
        local_10 = -1;
      }
    }
    else {
      local_14 = param_2;
      local_10 = local_1c[0];
    }
    if ((local_14 != (int *)0xa) || (local_10 != -1)) goto LAB_0014da53;
  }
  if (param_3 != '\0') {
    puVar2 = (undefined4 *)FUN_0014d960(local_1c,&local_14,0);
    local_14 = (int *)*puVar2;
    local_10 = puVar2[1];
  }
LAB_0014da53:
  *param_1 = local_14;
  param_1[1] = local_10;
  return;
}
