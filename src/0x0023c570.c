/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A6B073B8E6958A54404E546C616B9B1E2545DA09BED796C52AB8BF2057F2C067
 * Entry: 0x0023c570, Ghidra index: 7930, label: FUN_0023c570
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443310;
undefined4 FUN_0023c570(void)

{
  int *in_EAX;
  int *piVar1;
  int iVar2;
  int *in_EDX;
  int *unaff_retaddr;
  
  if ((*in_EAX != 0) && (iVar2 = *(int *)(*in_EAX + 0xc), iVar2 != 0)) {
    piVar1 = *(int **)(iVar2 + 4);
    if (piVar1 != *(int **)(iVar2 + 8)) {
      do {
        if (*in_EDX == *piVar1) {
          iVar2 = (**(code **)(*DAT_00443310 + 0x40))(piVar1 + 1);
          if (iVar2 == 0) {
            return 0;
          }
          *unaff_retaddr = iVar2;
          return 1;
        }
        piVar1 = piVar1 + 3;
      } while (piVar1 != *(int **)(iVar2 + 8));
    }
  }
  return 0;
}
