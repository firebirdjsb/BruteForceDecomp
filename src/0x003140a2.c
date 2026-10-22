/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BF158653C6B5155493809C61AD12C2B561FBFD0ED8524FA6E91BC5D477900AA9
 * Entry: 0x003140a2, Ghidra index: 12046, label: CDirectSoundStream_Constructor
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_CDirectSoundStream_AddRef_003869c4;
extern uint32_t PTR_FUN_003869b8;
void DSOUND__CDirectSoundStream_Constructor(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_00312e3a(param_1);
  in_ECX[1] = &PTR_FUN_003869b8;
  *in_ECX = &PTR_CDirectSoundStream_AddRef_003869c4;
  return;
}
