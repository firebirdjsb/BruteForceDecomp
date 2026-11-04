/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1F79DC68C557F38A92B4215506AE8739D354A477389BEB1585BE0356D0FE9EFC
 * Entry: 0x003183ea, Ghidra index: 12195, label: FUN_003183ea
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Ghidra source-matched call only; original guest ABI_UNVERIFIED. */
extern void FUN_003174e7(void);
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0032ff58;
void FUN_003183ea(int param_1,int param_2)

{
  int *in_ECX;
  
  *in_ECX = param_1 * 0x10 + DAT_0032ff58;
  in_ECX[1] = param_2;
  FUN_003174e7();
  return;
}
