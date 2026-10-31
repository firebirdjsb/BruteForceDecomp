/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 186AE49464CB96E074E932888CFE7E98F72593507D6F992B40707344B4D6CE75
 * Entry: 0x0022d800, Ghidra index: 7708, label: FUN_0022d800
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; original Xbox guest ABI remains ABI_UNVERIFIED. */
extern void FUN_00159430(void);
void FUN_0022d800(void)

{
  int in_ECX;
  
  FUN_00159430();
  if (*(int **)(in_ECX + 0x358) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0022d815. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x358) + 0xbc))();
    return;
  }
  return;
}
