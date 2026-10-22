/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 18E20DACA3AF3E888D16AE42C526920B1844CD017358D4E677023CE1349F48F7
 * Entry: 0x00246e40, Ghidra index: 8098, label: FUN_00246e40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_00246e40(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  if (param_2 != param_3) {
    uVar1 = FUN_0024af50(param_3);
    FUN_0024a8d0(*(undefined4 *)(unaff_ESI + 8));
    *(undefined4 *)(unaff_ESI + 8) = uVar1;
  }
  *param_1 = param_2;
  return param_1;
}
