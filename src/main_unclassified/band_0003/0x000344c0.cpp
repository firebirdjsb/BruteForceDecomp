/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B7AE7F5F2181A25BB015E7BBE7C6C4C316CB1EDF43E64BBDD4A8B7951EB5E51C
 * Entry: 0x000344c0, Ghidra index: 341, label: FUN_000344c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint FUN_0003f0e0(char param_1);

void FUN_000344c0(void)

{
  int *in_ECX;
  
  FUN_0003f0e0(0);
                    /* WARNING: Could not recover jumptable at 0x000344d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0xcc))();
  return;
}
