/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DA7DED3B8C4B8DDF1B3BAE9D73E02AC3B1DB33B78D649C01B98D674A038FA862
 * Entry: 0x001ec680, Ghidra index: 6914, label: FUN_001ec680
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698d0;
int FUN_001ec680(int param_1)

{
  int iVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int local_c;
  int local_8;
  int local_4;
  
  iVar1 = param_1;
  local_c = param_1;
  if ((*(int *)(in_EAX + 0x1c) != 0) && (*(int *)(in_EAX + 0x1c) == 5)) {
    iVar3 = FUN_001ec790();
    local_4 = iVar3;
    cVar2 = FUN_002e5880();
    iVar6 = iVar1;
    if (cVar2 == '\0') {
      if (iVar3 < iVar1) {
        local_c = iVar3 + -1;
        local_8 = 0;
        piVar4 = &local_c;
        if (iVar3 + -1 < 1) {
          piVar4 = &local_8;
        }
        local_c = *piVar4;
        iVar6 = *piVar4;
        param_1 = iVar1;
      }
      else if (iVar1 + 7 < iVar3) {
        local_8 = iVar3 + -1;
        local_c = 0;
        piVar4 = &local_8;
        if (iVar3 + -1 < 1) {
          piVar4 = &local_c;
        }
        local_c = *piVar4;
        iVar6 = *piVar4;
        param_1 = iVar1;
      }
      else {
        local_c = iVar1 + 1;
        param_1 = iVar1;
        if (local_c < iVar3) {
          iVar6 = local_c;
        }
      }
    }
    else if (iVar3 == 0) {
      uVar5 = FUN_001f0b30();
      if (199 < uVar5) {
        XAPILIB__QueryPerformanceCounter(in_EAX + 0x5740);
        FUN_001eec50(in_EAX,DAT_004698d0 + 1);
      }
    }
    else {
      XAPILIB__QueryPerformanceCounter(in_EAX + 0x5740);
      param_1 = iVar1;
    }
    piVar4 = &local_4;
    if (param_1 <= iVar3) {
      piVar4 = &param_1;
    }
    if (iVar6 < *piVar4) {
      piVar4 = &local_c;
    }
    return *piVar4;
  }
  return param_1;
}
