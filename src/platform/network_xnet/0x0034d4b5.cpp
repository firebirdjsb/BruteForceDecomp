/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 764CCD3F8F9B8BA3766CCC6A797525A9DF570ABA6087CDE51834D7E5D63C8A3C
 * Entry: 0x0034d4b5, Ghidra index: 13002, label: FUN_0034d4b5
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_fef00144;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0034d4b5(void)

{
  int *piVar1;
  uint *in_ECX;
  int iVar2;
  
  piVar1 = (int *)in_ECX[0x98];
  if (piVar1 == (int *)0x0) {
    if (((*in_ECX & 0x400) != 0) && ((*in_ECX & 0x2000) == 0)) {
      FUN_00355ffd();
      iVar2 = 10000;
      do {
        if (in_ECX[0x8e] == 0) {
          return;
        }
        _DAT_fef00144 = 1;
        FUN_0034d1e4();
        KeStallExecutionProcessor(0x32);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else if ((piVar1[2] == 0x58424456) && (1 < (uint)piVar1[3])) {
                    /* WARNING: Could not recover jumptable at 0x0034d4d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0x20))();
    return;
  }
  return;
}
