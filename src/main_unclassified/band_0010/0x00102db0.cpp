/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 4E0E8F6FD69798A0C715654265EACB899124A3538B4D84A0DE702DE2D4BAB064
 * Entry: 0x00102db0, Ghidra index: 3281, label: FUN_00102db0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* WARNING: Removing unreachable block (ram,0x00102dd1) */
/* WARNING: Removing unreachable block (ram,0x00102dd8) */
/* WARNING: Removing unreachable block (ram,0x00102de2) */

void FUN_00102db0(void)

{
  int *piVar1;
  int *piVar2;
  int in_EAX;
  int *piVar3;
  
  piVar1 = *(int **)(in_EAX + 0x80);
  for (piVar3 = *(int **)(in_EAX + 0x7c); piVar3 != piVar1; piVar3 = piVar3 + 1) {
    piVar2 = (int *)*piVar3;
    *(byte *)(piVar2 + 10) = *(byte *)(piVar2 + 10) & 0xfe;
    (**(code **)(*piVar2 + 0x20))();
    if ((*(byte *)(piVar2 + 10) & 4) != 0) {
      *(byte *)(piVar2 + 10) = *(byte *)(piVar2 + 10) & 0xfb;
      (**(code **)(*piVar2 + 0x28))();
    }
  }
  return;
}
