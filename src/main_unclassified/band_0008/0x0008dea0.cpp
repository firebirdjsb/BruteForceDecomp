/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 582B5CCF20A1843FB2CE0F297A4AC0FEBA6C83CFE9507C7F1951690591D0DA17
 * Entry: 0x0008dea0, Ghidra index: 1723, label: FUN_0008dea0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern undefined4 FUN_0023a280(int param_1);
extern undefined4 FUN_0008f320(undefined4 param_1);

undefined4 FUN_0008dea0(void)

{
  char cVar1;
  int in_EAX;
  int iVar2;
  undefined4 *puVar3;
  
  if (*(int *)(in_EAX + 0x2c) != 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(int *)(in_EAX + 0x2c));
  }
  *(undefined4 *)(in_EAX + 0x2c) = 0;
  *(undefined4 *)(in_EAX + 0x30) = 0;
  *(undefined4 *)(in_EAX + 0x34) = 0;
  puVar3 = (undefined4 *)(in_EAX + 4);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    *(undefined4 *)(in_EAX + 8) = 0;
    *(undefined4 *)(in_EAX + 0xc) = 0;
    *(undefined4 *)(in_EAX + 0x10) = 0;
    *(undefined4 *)(in_EAX + 0x14) = 0;
    *(undefined4 *)(in_EAX + 0x18) = 0;
    *(undefined4 *)(in_EAX + 0x1c) = 0;
    *(undefined4 *)(in_EAX + 0x24) = 0;
    *(undefined4 *)(in_EAX + 0x20) = 0;
  }
  iVar2 = FUN_0023a280();
  if (-1 < iVar2) {
    cVar1 = FUN_0008f320(puVar3);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}
