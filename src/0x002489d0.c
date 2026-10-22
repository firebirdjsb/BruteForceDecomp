/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DC19496A594FFAF2E84C50ABAD7949A16AB7063D137AD73443ACDDC462E24F4A
 * Entry: 0x002489d0, Ghidra index: 8134, label: FUN_002489d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002489d0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *in_EAX;
  int *unaff_EBX;
  
  if (*unaff_EBX == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*in_EAX);
  }
  if (*in_EAX == 0) {
    FUN_00243850();
  }
  puVar1 = (undefined4 *)*unaff_EBX;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = puVar1[2];
    puVar3 = (undefined4 *)*in_EAX;
    uVar4 = puVar1[1];
    *puVar3 = *puVar1;
    puVar3[1] = uVar4;
    puVar3[2] = uVar2;
  }
  return;
}
