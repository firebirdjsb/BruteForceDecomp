/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E7B1558B39CD4263C8394C05444F0049F3C099F57DF35786CDAFC1E7E539CA01
 * Entry: 0x00236e00, Ghidra index: 7840, label: FUN_00236e00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int * FUN_00236e00(void)

{
  int iVar1;
  int *in_EAX;
  int *piVar2;
  int *in_EDX;
  
  if ((*in_EAX != 0) && (iVar1 = *(int *)(*in_EAX + 0x14), iVar1 != 0)) {
    piVar2 = *(int **)(iVar1 + 4);
    if (piVar2 != *(int **)(iVar1 + 8)) {
      do {
        if (*piVar2 == *in_EDX) {
          return piVar2;
        }
        piVar2 = piVar2 + 0xe;
      } while (piVar2 != *(int **)(iVar1 + 8));
    }
  }
  return (int *)0x0;
}
