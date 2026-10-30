/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EDCA1453D8D625E61FB8422877BE9E3F615961ABCE325CDC5ADBB04A4630A535
 * Entry: 0x000def50, Ghidra index: 2727, label: FUN_000def50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern int FUN_000da800(void);
extern void FUN_0021c380(float param_1);

extern uint32_t DAT_0046d064;
int * FUN_000def50(void)

{
  int *piVar1;
  int *in_EDX;
  int unaff_EBX;
  undefined4 unaff_retaddr;
  
  if ((*in_EDX != DAT_0046d064) && (unaff_EBX != 0)) {
    piVar1 = (int *)FUN_000da800();
    if (piVar1 != (int *)0x0) {
      *(undefined4 *)(piVar1[0x3a] + 0xc) = 0;
      (**(code **)(*piVar1 + 0x44))();
      FUN_0021c380(unaff_retaddr);
    }
    return piVar1;
  }
  return (int *)0x0;
}
