/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 7B4AB07DA2921F2707CBE68DC857EEF53017C3846BCFCDF1822C52073F860E01
 * Entry: 0x00273790, Ghidra index: 8860, label: FUN_00273790
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_00273790(void)

{
  int *piVar1;
  int in_EAX;
  undefined4 *in_ECX;
  
  *(undefined4 *)(in_EAX + 0x114) = in_ECX[4];
  *(undefined4 *)(in_EAX + 0x110) = in_ECX[3];
  *(undefined4 *)(in_EAX + 0x104) = *in_ECX;
  *(undefined4 *)(in_EAX + 0x108) = in_ECX[1];
  *(undefined4 *)(in_EAX + 0x10c) = in_ECX[2];
  *(undefined4 *)(in_EAX + 0x11c) = in_ECX[6];
  *(undefined4 *)(in_EAX + 0x118) = in_ECX[5];
  piVar1 = *(int **)(in_EAX + 0xf8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,(undefined4 *)(in_EAX + 0x104));
  }
  return;
}
