/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1D784E6466BEBD0BEB95DAF2CFD582318B17636FA64CEFFC466D65A284738DE5
 * Entry: 0x0014aee0, Ghidra index: 4309, label: FUN_0014aee0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0014aee0(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = in_ECX[8];
  if (iVar1 != 0) {
    (**(code **)(*in_ECX + 0x30))();
    FUN_0014ae80();
    FUN_000cdbc0(iVar1);
    FUN_000db3e0(iVar1);
  }
  return;
}
