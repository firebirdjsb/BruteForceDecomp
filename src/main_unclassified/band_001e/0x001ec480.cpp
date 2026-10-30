/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0ABB937A6F48E01BEB79FC98B983EA75557EA900E175A260AFFC572ECB7CA54F
 * Entry: 0x001ec480, Ghidra index: 6910, label: FUN_001ec480
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
void FUN_001ec480(void)

{
  char cVar1;
  int in_EAX;
  
  if (*(int *)(in_EAX + 0x2e28) != DAT_004698d0) {
    *(int *)(in_EAX + 0x2e28) = DAT_004698d0;
    *(undefined1 *)(in_EAX + 0xa0) = 0;
    if (*(int *)(in_EAX + 0x1c) != 0) {
      cVar1 = FUN_002e5880();
      if (cVar1 != '\0') {
        FUN_001edf10();
      }
      FUN_001ee340();
      FUN_001ee2f0();
      FUN_001ee590();
    }
  }
  return;
}
