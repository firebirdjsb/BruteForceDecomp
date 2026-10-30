/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 89DB51ED74D6399B2C40C9BB4598EE4B6BD5D071483D19956BF02E2E1498F7C9
 * Entry: 0x000794c0, Ghidra index: 1448, label: FUN_000794c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing 0x001E97C0 source draft returns int* with no explicit args.
 * These callsites discard EAX; incoming guest ECX/EBX and ABI remain UNVERIFIED. */
extern int * FUN_001e97c0(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469b58;
void FUN_000794c0(void)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = (**(code **)(*DAT_00469b58 + 0x48))();
  if (unaff_ESI == *(int *)(iVar1 + 0x50)) {
    FUN_001e97c0();
    return;
  }
  FUN_001e97c0();
  return;
}
