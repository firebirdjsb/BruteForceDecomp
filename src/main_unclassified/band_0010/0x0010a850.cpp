/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 96F323E93655041B5A22F90B438DC91F1D5BF478A9F49B58EE0BA43803F74C9E
 * Entry: 0x0010a850, Ghidra index: 3430, label: FUN_0010a850
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
void FUN_0010a850(void)

{
  int *in_EAX;
  int *in_ECX;
  
  FUN_001e97c0();
  FUN_0010a7d0();
  if (in_ECX[9] == DAT_0046d064) {
    in_ECX[9] = *in_EAX;
                    /* WARNING: Could not recover jumptable at 0x0010a87a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_ECX + 0x2c))();
    return;
  }
  return;
}
