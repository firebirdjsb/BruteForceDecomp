/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7F1C0CEF654C494458B2B93DB1A8F2442DE0FA3E221B94C69F8AFF9D7D81D512
 * Entry: 0x0034dd88, Ghidra index: 13013, label: FUN_0034dd88
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0034dd88(int *param_1)

{
  int in_ECX;
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  
  KeRaiseIrqlToDpcLevel();
  piVar2 = *(int **)(in_ECX + 0xa88);
  piVar4 = (int *)(in_ECX + 0xa88);
  if (piVar2 != (int *)0x0) {
    do {
      piVar1 = piVar2;
      piVar2 = piVar1;
      if (param_1 == piVar1 + 8) break;
      piVar2 = (int *)*piVar1;
      piVar4 = piVar1;
    } while (piVar2 != (int *)0x0);
    if (piVar2 != (int *)0x0) {
      FUN_0034c35a(piVar2 + 1,0xffffffff);
      if (piVar2[7] != 0) {
        ObfDereferenceObject();
      }
      *piVar4 = *piVar2;
      FUN_0034c6bc(piVar2);
      uVar3 = 0;
      goto LAB_0034dde9;
    }
  }
  uVar3 = 0x2726;
LAB_0034dde9:
  KfLowerIrql();
  return uVar3;
}
