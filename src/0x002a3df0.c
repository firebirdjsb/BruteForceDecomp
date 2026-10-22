/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7D16A031A8F6B17C0EA5144D7D0F02E2C8F52178E557CF98B9282698F68D68D1
 * Entry: 0x002a3df0, Ghidra index: 9537, label: FUN_002a3df0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a3df0(void)

{
  int iVar1;
  int *piVar2;
  int *unaff_ESI;
  undefined1 local_4 [4];
  
  FUN_002a4100(unaff_ESI,local_4,*unaff_ESI,0);
  iVar1 = *unaff_ESI;
  while (iVar1 != 0) {
    piVar2 = (int *)*unaff_ESI;
    *unaff_ESI = *piVar2;
    *piVar2 = 0;
    piVar2[1] = 0;
    iVar1 = *unaff_ESI;
  }
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  return;
}
