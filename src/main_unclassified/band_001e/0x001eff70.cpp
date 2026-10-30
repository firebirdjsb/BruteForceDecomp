/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 541D0149E282730C1AABA9325BCB8ADD3AB555229D13148BB98CB11A02DDB8B7
 * Entry: 0x001eff70, Ghidra index: 6971, label: FUN_001eff70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Byte-returning 0x002E5880 callee reads implicit guest ECX.
 * Host C++ declaration matches existing draft only; ABI_UNVERIFIED. */
extern undefined1 FUN_002e5880(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004698d0;
undefined4 FUN_001eff70(int param_1)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_002e5880();
  if ((cVar1 != '\0') && (*(int *)(param_1 + 0x18) == -1)) {
    if (*(int *)(in_ECX + 0x1c) == 5) {
      *(int *)(param_1 + 0x18) = DAT_004698d0 + 10;
      FUN_002e7f50(0xfffffffc,param_1,1,1);
      return 0;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_002e7f50(0xfffffffc,param_1,1,1);
    return 0;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x1c) * 0x598 + 0x158 + in_ECX) =
       *(undefined4 *)(param_1 + 0x18);
  return 0;
}
