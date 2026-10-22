/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 91600081141714A7FA98BFA1CE5DF3AFF30FAC0FDC31D195B265BDA24034EED8
 * Entry: 0x002a5930, Ghidra index: 9572, label: FUN_002a5930
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a5930(void)

{
  int iVar1;
  int *piVar2;
  int *unaff_ESI;
  
  iVar1 = (**(code **)(*(int *)*unaff_ESI + 0x30))((int *)*unaff_ESI);
  piVar2 = (int *)*unaff_ESI;
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*piVar2 + 0x30))(piVar2);
    *unaff_ESI = iVar1;
    return;
  }
  if (piVar2 != (int *)unaff_ESI[1]) {
    iVar1 = (**(code **)(*piVar2 + 0x38))(piVar2);
    piVar2 = (int *)*unaff_ESI;
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*piVar2 + 0x38))(piVar2);
      *unaff_ESI = iVar1;
      return;
    }
    piVar2 = (int *)(**(code **)(*piVar2 + 0x2c))(piVar2);
    *unaff_ESI = 0;
    do {
      if (piVar2 == (int *)unaff_ESI[1]) {
        return;
      }
      iVar1 = (**(code **)(*piVar2 + 0x38))(piVar2);
      *unaff_ESI = iVar1;
      piVar2 = (int *)(**(code **)(*piVar2 + 0x2c))(piVar2);
    } while (*unaff_ESI == 0);
    return;
  }
  *unaff_ESI = 0;
  return;
}
