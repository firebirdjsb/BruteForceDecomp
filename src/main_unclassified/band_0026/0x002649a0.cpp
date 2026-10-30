/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 63FC75502E86F3EB0E5EA95000289F89662D772719D3F3F1E40ECF9DFEA9B692
 * Entry: 0x002649a0, Ghidra index: 8709, label: FUN_002649a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046b22c;
int FUN_002649a0(int param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 5) != '\0') {
    return -0x7fffbffb;
  }
  RtlEnterCriticalSection(&DAT_0046b22c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 **)(param_1 + 0x20) = param_2;
  *(int *)(param_1 + 0x24) = param_1;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x20);
  iVar2 = FUN_00264a50();
  RtlLeaveCriticalSection(&DAT_0046b22c);
  if (iVar2 < 0) {
    return iVar2;
  }
  if (*(char *)(param_1 + 4) == '\0') {
    cVar1 = *(char *)(param_1 + 5);
    while (cVar1 != '\0') {
      XAPILIB__SleepEx(10,1);
      cVar1 = *(char *)(param_1 + 5);
    }
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(param_1 + 0x38);
    }
    return *(int *)(param_1 + 0x3c);
  }
  return 0;
}
