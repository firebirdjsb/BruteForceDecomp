/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 3368068813B5BA4375BF4C07CDABB529BE98969658C21B5B74F8065139B54F39
 * Entry: 0x0031c702, Ghidra index: 12338, label: FUN_0031c702
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0031c702(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  FUN_003118f0();
  piVar1 = (int *)(in_ECX + param_1 * 4);
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    FUN_0031c513();
    FUN_00314937(iVar2);
    *piVar1 = 0;
  }
  FUN_00311923();
  return;
}
