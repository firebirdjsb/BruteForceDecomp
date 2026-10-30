/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F48FEF2ECE085B21878A5863BDB0FA1AD0D643E8BEC40E0DCC2BE30644EBD2B2
 * Entry: 0x00160b00, Ghidra index: 4594, label: FUN_00160b00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039aa60;
void FUN_00160b00(void)

{
  undefined4 *in_EAX;
  undefined1 local_4 [4];
  
  *in_EAX = PTR_FUN_0039aa60;
  FUN_0015fcf0();
  FUN_00161760(local_4,*(undefined4 *)in_EAX[0x43],(undefined4 *)in_EAX[0x43]);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_EAX[0x43]);
}
