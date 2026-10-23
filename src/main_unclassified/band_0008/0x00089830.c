/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 12761914265AC498C8A3B0E2C2848E6D8C7852415B0360C1C89316E9D495D148
 * Entry: 0x00089830, Ghidra index: 1641, label: FUN_00089830
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00089830(void)

{
  int *piVar1;
  int unaff_EBX;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_8;
  int local_4;
  
  iVar3 = 0;
  local_8 = 0;
  piVar4 = (int *)(unaff_EBX + 0x30);
  iVar2 = 8;
  do {
    if (*piVar4 != 0) {
      local_4 = FUN_00089770(unaff_EBX,*piVar4);
      piVar1 = &local_4;
      if (local_4 <= iVar3) {
        piVar1 = &local_8;
      }
      iVar3 = *piVar1;
      local_8 = iVar3;
    }
    piVar4 = piVar4 + 3;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return iVar3;
}
