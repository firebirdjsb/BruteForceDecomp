/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 019F73D46494B0CB406AF2E71A947E40B40E406E93693DEADFB9512EB54387B0
 * Entry: 0x0017d380, Ghidra index: 5066, label: FUN_0017d380
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0017d380(void)

{
  int iVar1;
  int *piVar2;
  int *unaff_ESI;
  
  piVar2 = (int *)*unaff_ESI;
  if (*(char *)((int)piVar2 + 0x81) != '\0') {
    *unaff_ESI = piVar2[2];
    return;
  }
  if (*(char *)(*piVar2 + 0x81) == '\0') {
    iVar1 = FUN_0017d440();
    *unaff_ESI = iVar1;
    return;
  }
  piVar2 = (int *)piVar2[1];
  if (*(char *)((int)piVar2 + 0x81) == '\0') {
    do {
      if (*unaff_ESI != *piVar2) break;
      *unaff_ESI = (int)piVar2;
      piVar2 = (int *)piVar2[1];
    } while (*(char *)((int)piVar2 + 0x81) == '\0');
    if (*(char *)((int)piVar2 + 0x81) == '\0') {
      *unaff_ESI = (int)piVar2;
    }
  }
  return;
}
