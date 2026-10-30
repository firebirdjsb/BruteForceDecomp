/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7822B9F2F6BB3795F284A9C216E476E3622F8FB0A9B868E72FA5FD1024584D07
 * Entry: 0x002e7e10, Ghidra index: 10531, label: FUN_002e7e10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_003a1a68;
extern uint32_t PTR_LAB_003868f8;
extern uint32_t PTR_LAB_00386904;
void FUN_002e7e10(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = PTR_FUN_003a1a68;
  *in_ECX = PTR_LAB_00386904;
  in_ECX[1] = PTR_LAB_003868f8;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 500;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0x10] = 0;
  in_ECX[3] = 0;
  return;
}
