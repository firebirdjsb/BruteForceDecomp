/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 16F51CE9E39F62C64F480972ECE34344FFD240A259379B37E7FA597D850F01D4
 * Entry: 0x002e9c30, Ghidra index: 10561, label: FUN_002e9c30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_0038697c;
void FUN_002e9c30(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = PTR_LAB_0038697c;
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00237ec0(in_ECX[3]);
}
