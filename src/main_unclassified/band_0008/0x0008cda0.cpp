/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EBDA5E357D1B33B92755931486B952F5601FD974629316A26C85A1A862860EB9
 * Entry: 0x0008cda0, Ghidra index: 1705, label: FUN_0008cda0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469948;
undefined4 FUN_0008cda0(void)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  int unaff_EDI;
  
  if (unaff_EDI == 0) {
    return 0;
  }
  iVar1 = *(int *)(unaff_EDI + 4);
  iVar2 = (**(code **)(*in_EAX + 8))(iVar1);
  if (iVar2 != 0) {
    return 0;
  }
  if (in_EAX[iVar1 * 2] != unaff_EDI) {
    FUN_0008f6a0();
  }
  FUN_001e5510(DAT_00469948);
  return 1;
}
