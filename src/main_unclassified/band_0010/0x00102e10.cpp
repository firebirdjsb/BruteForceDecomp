/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 65C79C2AA9B9FAC4A04FA80CEF9E137D5495329D1046439C1D74953E9C7BFFF7
 * Entry: 0x00102e10, Ghidra index: 3282, label: FUN_00102e10
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; original x86 guest ABI remains ABI_UNVERIFIED. */
extern undefined4 FUN_00102e60(void);
uint FUN_00102e10(int *param_1)

{
  uint in_EAX;
  uint uVar1;
  int *piVar2;
  
  piVar2 = *(int **)(in_EAX + 0x7c);
  uVar1 = in_EAX & 0xffffff00;
  if (piVar2 != *(int **)(in_EAX + 0x80)) {
    while (*(int *)(*piVar2 + 0x24) != *param_1) {
      piVar2 = piVar2 + 1;
      if (piVar2 == *(int **)(in_EAX + 0x80)) {
        return uVar1;
      }
    }
    uVar1 = FUN_00102e60();
  }
  return uVar1;
}
