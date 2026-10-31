/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7A5B498743E66001720F02293709869F3499C61519019FB495A41EC530638E7F
 * Entry: 0x00259570, Ghidra index: 8501, label: FUN_00259570
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Source-draft declaration only; original Xbox guest ABI remains ABI_UNVERIFIED. */
extern void FUN_0012aba0(void);
undefined4 FUN_00259570(void)

{
  int *piVar1;
  int *piVar2;
  int in_EAX;
  int in_ECX;
  
  piVar1 = *(int **)(in_EAX + 0x14);
  piVar2 = (int *)*piVar1;
  for (; 0 < in_ECX; in_ECX = in_ECX + -1) {
    if (piVar2 == piVar1) {
      return 0;
    }
    FUN_0012aba0();
  }
  if ((piVar2 != piVar1) && (piVar1 != piVar2)) {
    return piVar2[4];
  }
  return 0;
}
