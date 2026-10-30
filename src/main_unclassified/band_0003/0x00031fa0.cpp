/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F33773463199E0EBAD48B9F14253A198C719E8E61427A8B3591665071BB37FDD
 * Entry: 0x00031fa0, Ghidra index: 322, label: FUN_00031fa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint FUN_0003f0e0(char param_1);

void FUN_00031fa0(void)

{
  int *in_ECX;
  
  FUN_0003f0e0(0);
                    /* WARNING: Could not recover jumptable at 0x00031fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0xac))();
  return;
}
