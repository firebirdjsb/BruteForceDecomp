/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 721E392F0A81ABA45EFEAB4B6DFB10D1BC48CD4497DDB5118FF70DCF0E4120D0
 * Entry: 0x0020caa0, Ghidra index: 7360, label: FUN_0020caa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0020caa0(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_0020d9c0(param_3);
    FUN_0020da30();
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  *param_1 = param_2;
  return;
}
