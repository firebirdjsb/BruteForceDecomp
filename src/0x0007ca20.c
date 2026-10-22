/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7C18B7723057A5411563780ADA732718AFEF4AD558EF531C8EB3EE9D83D4E56B
 * Entry: 0x0007ca20, Ghidra index: 1481, label: FUN_0007ca20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_0007ca20(int param_1,int param_2)

{
  int in_ECX;
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = (int *)(in_ECX + 0x28);
  while ((piVar1[-1] != param_1 || (*piVar1 != param_2))) {
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 0x2a;
    if (7 < iVar2) {
      return 9;
    }
  }
  return iVar2 + 1;
}
