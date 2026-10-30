/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 52352F31AFD923C04B0856637FB636A5E4E9A44F6C728D8E39A4907E5FCBAD25
 * Entry: 0x00273960, Ghidra index: 8863, label: FUN_00273960
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00392428;
void FUN_00273960(void)

{
  undefined4 in_EAX;
  undefined4 *unaff_ESI;
  
  FUN_002710e0(unaff_ESI,in_EAX);
  *unaff_ESI = &PTR_FUN_00392428;
  unaff_ESI[0x38] = 0;
  FUN_002739f0(in_EAX);
  FUN_00271330();
  FUN_00271430(unaff_ESI,unaff_ESI + 0x26,unaff_ESI + 0x15);
  return;
}
