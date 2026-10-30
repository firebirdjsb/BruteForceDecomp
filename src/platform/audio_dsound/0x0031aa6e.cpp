/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D5A21810BF144AC242E095C71B4622FA5B696A16FE81DA5BFD9C34E1BE4542B2
 * Entry: 0x0031aa6e, Ghidra index: 12270, label: FUN_0031aa6e
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032f7d4;
extern uint32_t PTR_FUN_00386ad4;
void FUN_0031aa6e(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = in_ECX + 1;
  in_ECX[2] = *puVar1;
  *puVar1 = *puVar1;
  puVar1 = in_ECX + 3;
  *in_ECX = PTR_FUN_00386ad4;
  in_ECX[7] = DAT_0032f7d4;
  in_ECX[4] = *puVar1;
  *puVar1 = *puVar1;
  return;
}
