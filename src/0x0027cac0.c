/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 31C31481B3FD03C996A9BA81B4155FB3D88C630A81D884F5F729CC2C0E48864C
 * Entry: 0x0027cac0, Ghidra index: 8987, label: FUN_0027cac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0027cac0(void)

{
  char cVar1;
  int *piVar2;
  int *in_EAX;
  
  piVar2 = (int *)*in_EAX;
  cVar1 = *(char *)((int)piVar2 + 0x1d);
  while (cVar1 == '\0') {
    piVar2 = (int *)*piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x1d);
  }
  return;
}
