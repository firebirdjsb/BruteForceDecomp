/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 03497A072D6B65C2B97F4B63F36DD1AF1C5CCD4221591517CBA536FC8BBCBC15
 * Entry: 0x0003c5c0, Ghidra index: 431, label: FUN_0003c5c0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_0001c530(void);

void FUN_0003c5c0(void)

{
  int iVar1;
  int *piVar2;
  int *unaff_ESI;
  
  piVar2 = (int *)*unaff_ESI;
  if (*(char *)((int)piVar2 + 0xa9) != '\0') {
    *unaff_ESI = piVar2[2];
    return;
  }
  if (*(char *)(*piVar2 + 0xa9) == '\0') {
    iVar1 = FUN_0001c530();
    *unaff_ESI = iVar1;
    return;
  }
  piVar2 = (int *)piVar2[1];
  if (*(char *)((int)piVar2 + 0xa9) == '\0') {
    do {
      if (*unaff_ESI != *piVar2) break;
      *unaff_ESI = (int)piVar2;
      piVar2 = (int *)piVar2[1];
    } while (*(char *)((int)piVar2 + 0xa9) == '\0');
    if (*(char *)((int)piVar2 + 0xa9) == '\0') {
      *unaff_ESI = (int)piVar2;
    }
  }
  return;
}
