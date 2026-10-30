/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D57469180DADA2508ECA2C64A583FDFD4BC3290E1AB69AE84A706189E7E78B8B
 * Entry: 0x000a22e0, Ghidra index: 1921, label: FUN_000a22e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_003a0bb0;
void FUN_000a22e0(void)

{
  undefined4 *in_EAX;
  undefined1 local_4 [4];
  
  *in_EAX = PTR_LAB_003a0bb0;
  FUN_000a1ff0();
  FUN_000a27c0(local_4,*(undefined4 *)in_EAX[0x43],(undefined4 *)in_EAX[0x43]);
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_EAX[0x43]);
}
