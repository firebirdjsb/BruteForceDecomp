/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A33350F27795C1ECD8D9641E5A0D4FB41E6406719095A23337578E2B21DD4361
 * Entry: 0x001699c0, Ghidra index: 4755, label: FUN_001699c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001699c0(void)

{
  char cVar1;
  int *in_EAX;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  if (*in_EAX == 5) {
    piVar3 = (int *)in_EAX[1];
  }
  else {
    piVar3 = (int *)0x0;
  }
  if (*(int *)(in_ECX + 4) != 0) {
    iVar2 = (**(code **)(*piVar3 + 0x50))();
    if (iVar2 != 0) {
      cVar1 = FUN_001fb980();
      if (cVar1 != '\0') {
        return 1;
      }
      return 0;
    }
  }
  return 0;
}
