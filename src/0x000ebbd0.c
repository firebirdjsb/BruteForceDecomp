/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7439CBF6E6E1591BD8D32545AA942BAA282F5029B01FCBE2D43E69D843FE2C0C
 * Entry: 0x000ebbd0, Ghidra index: 2906, label: FUN_000ebbd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e7e8;
extern uint32_t PTR_FUN_0039ea48;
extern uint32_t PTR_LAB_003a3f18;
void FUN_000ebbd0(void)

{
  undefined4 *unaff_ESI;
  
  FUN_000eb9d0();
  *unaff_ESI = &PTR_FUN_0039ea48;
  unaff_ESI[2] = &PTR_LAB_003a3f18;
  unaff_ESI[3] = &PTR_FUN_0039e7e8;
  unaff_ESI[0x25] = 0;
  unaff_ESI[0x26] = 0;
  unaff_ESI[0x27] = 0;
  *(undefined1 *)(unaff_ESI + 0x23) = 0;
  return;
}
