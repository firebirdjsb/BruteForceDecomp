/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9815A6CDA611C029C55825F7F4223A95A80E61B37F2E40C9234591B4AC542FAB
 * Entry: 0x002a4c70, Ghidra index: 9551, label: FUN_002a4c70
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a4c70(void)

{
  int iVar1;
  int *piVar2;
  int *in_EAX;
  undefined1 local_4 [4];
  
  FUN_002a4ee0(local_4,*in_EAX,0);
  iVar1 = *in_EAX;
  while (iVar1 != 0) {
    piVar2 = (int *)*in_EAX;
    *in_EAX = *piVar2;
    *piVar2 = 0;
    piVar2[1] = 0;
    iVar1 = *in_EAX;
  }
  *in_EAX = 0;
  in_EAX[1] = 0;
  return;
}
