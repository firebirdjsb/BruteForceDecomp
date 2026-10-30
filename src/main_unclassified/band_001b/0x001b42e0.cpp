/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 46C132B5DF12F4D788FADBCBCF8F061F77ACED7D3F140B7F599F9533D457A558
 * Entry: 0x001b42e0, Ghidra index: 5653, label: FUN_001b42e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_001b42e0(void)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  undefined4 uVar3;
  uint uVar4;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 4);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (*(int *)(unaff_ESI + 8) - iVar1) / 0x48;
  }
  if (uVar4 < in_EAX) {
    FUN_001c1fa0(unaff_ESI);
    return;
  }
  if (((iVar1 != 0) && (iVar2 = *(int *)(unaff_ESI + 8), in_EAX < (uint)((iVar2 - iVar1) / 0x48)))
     && (iVar1 + in_EAX * 0x48 != iVar2)) {
    uVar3 = FUN_001d0840(iVar2);
    *(undefined4 *)(unaff_ESI + 8) = uVar3;
  }
  return;
}
