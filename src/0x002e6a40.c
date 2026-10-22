/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4FAFF7AE3B48531801DA6E25B35CD458813265839C48CBA3AFF3FADBB6EDDB8E
 * Entry: 0x002e6a40, Ghidra index: 10498, label: FUN_002e6a40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0040e88c;
extern uint32_t PTR_FUN_003868c0;
extern uint32_t PTR_LAB_003868ac;
extern uint32_t PTR_LAB_003868b4;
void FUN_002e6a40(void)

{
  undefined4 *in_ECX;
  int iVar1;
  
  *in_ECX = &PTR_FUN_003868c0;
  in_ECX[1] = &PTR_LAB_003868b4;
  in_ECX[2] = &PTR_LAB_003868ac;
  FUN_002e5b10();
  DAT_0040e88c = 0;
  iVar1 = 0x1e;
  do {
    FUN_002e4fc0();
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_002e5630();
  return;
}
