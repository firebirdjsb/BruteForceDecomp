/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 64A8499D10BE9174F5557106CD89BF8A3FD6B22A696874F781C29535A9DA24A4
 * Entry: 0x00100580, Ghidra index: 3217, label: FUN_00100580
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469b58;
undefined4 FUN_00100580(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  cVar1 = (**(code **)(*piVar2 + 0x2c))();
  if (cVar1 != '\0') {
    iVar3 = FUN_001001d0();
    if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x7c) & 2) == 0)) {
      cVar1 = FUN_001786f0();
      if (cVar1 == '\0') {
        piVar2 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
        (**(code **)(*piVar2 + 0x14))();
        return 1;
      }
    }
  }
  return 0;
}
