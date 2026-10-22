/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 219441E86E852DF863D3A15B81F75FAA0E73511E2653D45EF37EAB154AC621EF
 * Entry: 0x000b7f60, Ghidra index: 2215, label: FUN_000b7f60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039f8bc;
extern uint32_t PTR_FUN_0039fcc8;
extern uint32_t PTR_FUN_0039ffc0;
extern uint32_t PTR_LAB_0039fcb4;
extern uint32_t PTR_LAB_0039fff0;
void FUN_000b7f60(void)

{
  int *piVar1;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = &PTR_FUN_0039fcc8;
  unaff_ESI[0xb] = &PTR_LAB_0039fcb4;
  if (unaff_ESI[0x1d] != 0) {
    FUN_0008f6e0();
  }
  *unaff_ESI = &PTR_FUN_0039ffc0;
  unaff_ESI[0xb] = &PTR_LAB_0039fff0;
  FUN_000b2530();
  *unaff_ESI = &PTR_FUN_0039f8bc;
  piVar1 = (int *)unaff_ESI[8];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    unaff_ESI[8] = 0;
  }
  return;
}
