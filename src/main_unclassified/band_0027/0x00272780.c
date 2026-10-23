/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D1F5E6F3E2A3257FBA11019EE4DACEAB02B121324C8DB4892297D26421CB7C5B
 * Entry: 0x00272780, Ghidra index: 8837, label: FUN_00272780
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00272780(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x104);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x104) = 0;
  }
  piVar1 = *(int **)(in_ECX + 8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 8) = 0;
  }
  piVar1 = *(int **)(in_ECX + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0xc) = 0;
  }
  *(undefined1 *)(in_ECX + 0x7c) = 0;
  return;
}
