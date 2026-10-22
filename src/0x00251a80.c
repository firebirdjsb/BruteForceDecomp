/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A2D4D9136F03A6DD6BA72B3A0D83D88838A162E24D4282E0DC8A079F5F63C392
 * Entry: 0x00251a80, Ghidra index: 8371, label: FUN_00251a80
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
uint FUN_00251a80(void)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  
  if (((unaff_ESI != 0) && (iVar1 = *(int *)(unaff_ESI + 0x1c), iVar1 != 0)) &&
     ((iVar2 = *(int *)(iVar1 + 4), iVar2 == 0x2a || ((iVar2 == 0x71 || (iVar2 == 0x29a)))))) {
    if (*(int *)(iVar1 + 8) != 0) {
      (**(code **)(unaff_ESI + 0x24))(*(undefined4 *)(unaff_ESI + 0x28),*(int *)(iVar1 + 8));
    }
    iVar1 = *(int *)(*(int *)(unaff_ESI + 0x1c) + 0x3c);
    if (iVar1 != 0) {
      (**(code **)(unaff_ESI + 0x24))(*(undefined4 *)(unaff_ESI + 0x28),iVar1);
    }
    iVar1 = *(int *)(*(int *)(unaff_ESI + 0x1c) + 0x38);
    if (iVar1 != 0) {
      (**(code **)(unaff_ESI + 0x24))(*(undefined4 *)(unaff_ESI + 0x28),iVar1);
    }
    iVar1 = *(int *)(*(int *)(unaff_ESI + 0x1c) + 0x30);
    if (iVar1 != 0) {
      (**(code **)(unaff_ESI + 0x24))(*(undefined4 *)(unaff_ESI + 0x28),iVar1);
    }
    (**(code **)(unaff_ESI + 0x24))
              (*(undefined4 *)(unaff_ESI + 0x28),*(undefined4 *)(unaff_ESI + 0x1c));
    *(undefined4 *)(unaff_ESI + 0x1c) = 0;
    return (iVar2 != 0x71) - 1 & 0xfffffffd;
  }
  return 0xfffffffe;
}
