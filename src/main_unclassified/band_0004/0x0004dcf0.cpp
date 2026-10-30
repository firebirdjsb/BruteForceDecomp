/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 05E33F72AB632245EC7A684D576FC0A9CE6330EBAA5AA93F270E2300F711332D
 * Entry: 0x0004dcf0, Ghidra index: 658, label: FUN_0004dcf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0004dd70(void);

void FUN_0004dcf0(void)

{
  int *in_ECX;
  
  if (in_ECX != (int *)0x0) {
    if (((*(int *)(in_ECX[3] + 4) != 3) || (in_ECX[0xfa] == 0)) || (in_ECX[0xfa] == -1)) {
      (**(code **)(*in_ECX + 0x40))();
    }
    FUN_0004dd70();
  }
  return;
}
