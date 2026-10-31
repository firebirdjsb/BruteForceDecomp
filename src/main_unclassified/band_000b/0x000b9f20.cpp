/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 62F98E699C4125F915029B68F0D2D37432F7BA7E4FD2D0606CE7ED26606466C3
 * Entry: 0x000b9f20, Ghidra index: 2244, label: FUN_000b9f20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_000c4550(void);

extern uint32_t PTR_FUN_0039fa78;
void FUN_000b9f20(void)

{
  undefined4 *in_EAX;
  
  FUN_000c4550();
  /* XBE 0x000b9f28: MOV m32,0x0039fa78 stores a 32-bit guest VA.
   * Register ABI and guest memory translation remain ABI_UNVERIFIED. */
  *in_EAX = UINT32_C(0x0039fa78);
  return;
}
