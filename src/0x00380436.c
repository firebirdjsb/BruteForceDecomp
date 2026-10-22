/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4EAF03658D59EE4358D3F5C240482491B0C8084651D6F192B27FD949F5FEC9E7
 * Entry: 0x00380436, Ghidra index: 13529, label: FUN_00380436
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00380436(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 *in_EDX;
  
  iVar1 = in_EDX[3];
  uVar2 = FUN_00380fe3(*(undefined4 *)(in_ECX + 4));
  *in_EDX = uVar2;
  if (iVar1 != 0) {
    KeSetEvent(iVar1,0,0);
                    /* WARNING: Could not recover jumptable at 0x0038045a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ObfDereferenceObject();
    return;
  }
  return;
}
