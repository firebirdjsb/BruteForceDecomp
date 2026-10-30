/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B38FF44AD3ACA26F74F66477077814101CA96E688ED6861826429B6EE33FD673
 * Entry: 0x00076a50, Ghidra index: 1381, label: FUN_00076a50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern void FUN_0001bd30(uint32_t unaff_ESI);
extern void FUN_00077d50(void);

extern uint32_t PTR_LAB_003a2530;
void FUN_00076a50(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_003a2530;
  FUN_0001bd30();
  FUN_00077d50();
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0();
  }
  return;
}
