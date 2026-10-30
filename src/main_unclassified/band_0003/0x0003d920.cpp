/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A8E857A6833C459270389AA3E281D1D832B09045173FEED51D049453ACDC4106
 * Entry: 0x0003d920, Ghidra index: 456, label: FUN_0003d920
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern void FUN_00016030(uint32_t in_EAX);

char FUN_0003d920(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int in_EAX;
  int *piVar3;
  char cVar4;
  
  piVar3 = *(int **)(in_EAX + 8);
  piVar1 = *(int **)(in_EAX + 0xc);
  cVar4 = '\0';
  if (piVar3 != piVar1) {
    do {
      iVar2 = *piVar3;
      if ((*(int *)(iVar2 + 0xc) == param_1) && (*(int *)(iVar2 + 4) == param_2)) {
        *(undefined4 *)(iVar2 + 0x2c) = 0x7f7fffff;
        cVar4 = '\x01';
      }
      piVar3 = piVar3 + 1;
    } while (piVar3 != piVar1);
    if (cVar4 != '\0') {
      FUN_00016030();
    }
  }
  return cVar4;
}
