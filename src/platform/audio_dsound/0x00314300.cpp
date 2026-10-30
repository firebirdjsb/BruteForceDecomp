/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1346A607B64D7BA7ABCA826182E1CDAD47D31B6956AF0989060A397E92227EC5
 * Entry: 0x00314300, Ghidra index: 12055, label: FUN_00314300
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003869ec;
void FUN_00314300(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_FUN_003869ec;
  DSOUND__CDirectSoundBufferSettings_SetBufferData(0,0);
  FUN_00311e60(0,0);
  FUN_00313e3c();
  return;
}
