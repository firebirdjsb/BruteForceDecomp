/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 03E1D602B380E5AD5B447185D0369EF2BCF150D399538A9B481E21323752C464
 * Entry: 0x002138b0, Ghidra index: 7446, label: FUN_002138b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t _DAT_00000000;
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_002138b0(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_002ea01d(0x4c);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_002138f0();
    (**(code **)(*piVar2 + 4))();
    return piVar2;
  }
  (**(code **)(_DAT_00000000 + 4))();
  return (int *)0x0;
}
