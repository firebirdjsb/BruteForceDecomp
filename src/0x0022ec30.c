/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 19E0F0177A384C732AD51FA56EA961374DF4F9570BF6B79F861672A2E25D0B63
 * Entry: 0x0022ec30, Ghidra index: 7726, label: FUN_0022ec30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00469940;
void FUN_0022ec30(void)

{
  char cVar1;
  int unaff_ESI;
  
  if ((((*(byte *)(unaff_ESI + 0x224) & 4) == 0) && ((*(byte *)(unaff_ESI + 0x224) & 8) != 0)) &&
     (cVar1 = FUN_0022e050(unaff_ESI), cVar1 != '\0')) {
    return;
  }
  if ((*(int *)(unaff_ESI + 0x364) != 0) &&
     (cVar1 = (**(code **)(*DAT_00469940 + 0x2c))(*(int *)(unaff_ESI + 0x364)), cVar1 == '\0')) {
    (**(code **)(*DAT_00469940 + 0x20))(*(undefined4 *)(unaff_ESI + 0x364),1);
    *(undefined4 *)(unaff_ESI + 0x364) = 0;
  }
  return;
}
