/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: C6018939B6128267FC631F2A4590987D6ABF14567D40AB0C38623BE91C676DB6
 * Entry: 0x0009fd40, Ghidra index: 1889, label: FUN_0009fd40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_0009e8b0(void);

int * FUN_0009fd40(int *param_1)

{
  undefined4 in_EAX;
  int iVar1;
  int *in_ECX;
  int iVar2;
  int *piVar3;
  
  iVar1 = FUN_0009e8b0(in_EAX);
  iVar2 = 0;
  if (0 < iVar1) {
    piVar3 = in_ECX;
    do {
      if (*piVar3 == *param_1) {
        return in_ECX + iVar2 * 6;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 6;
    } while (iVar2 < iVar1);
  }
  return (int *)0x0;
}
