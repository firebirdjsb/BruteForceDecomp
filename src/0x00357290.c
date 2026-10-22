/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 843DF75260BA48C12175D332D73BDD2BC997ADFD629888EADC5F5F1F044E23F1
 * Entry: 0x00357290, Ghidra index: 13153, label: FUN_00357290
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_004b16a0;
extern uint32_t DAT_004b16a4;
void FUN_00357290(uint param_1,int param_2)

{
  uint uVar1;
  
  if (8 < param_1) {
    param_1 = 8;
  }
  uVar1 = 0;
  DAT_004b16a0 = param_1;
  if (param_1 != 0) {
    do {
      (&DAT_004b16a4)[uVar1] = *(undefined4 *)(param_2 + uVar1 * 4);
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_1);
  }
  return;
}
