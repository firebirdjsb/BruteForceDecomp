/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5C67A2C95DA9560958FA0C963C0A0F3760CF5BFCFD33D96869567CD3F4912608
 * Entry: 0x001725d0, Ghidra index: 4865, label: FUN_001725d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_001725d0(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  piVar2 = (int *)FUN_000120f0();
  if (((piVar2 != (int *)0x0) && ((*(int *)(in_ECX + 0x88) == 2 || (*(int *)(in_ECX + 0x88) == 3))))
     && ((iVar1 = *(int *)(in_ECX + 0x8c), iVar1 == 5 || (iVar1 == 4)))) {
    (**(code **)(*piVar2 + 0x15c))(iVar1,0);
  }
  return 1;
}
