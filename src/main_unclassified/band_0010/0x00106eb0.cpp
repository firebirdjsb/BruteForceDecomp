/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: AE5115DB400B064BA496BFA6C073443595DED7B46C7C3AB4E3CD5B9DBA46DF30
 * Entry: 0x00106eb0, Ghidra index: 3367, label: FUN_00106eb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Callee 0x002E5880 returns a guest byte through AL and reads an
 * implicit incoming ECX object address. Existing draft interface only;
 * original guest-register ABI is UNVERIFIED. */
extern undefined1 FUN_002e5880(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
undefined4 FUN_00106eb0(void)

{
  char cVar1;
  int iVar2;
  
  if (((*(int *)(DAT_0046995c + 0x1c) == 0) || (cVar1 = FUN_002e5880(), cVar1 != '\0')) ||
     (iVar2 = FUN_002e5bf0(0), *(int *)(iVar2 + 0x2c) == 0)) {
    cVar1 = FUN_00106600();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}
