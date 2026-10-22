/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: D1D007A81E0A35F89915CEF0F34480031A2E1BF20F6C8B3F7D6F34B647EC8D2F
 * Entry: 0x0008a1a0, Ghidra index: 1655, label: FUN_0008a1a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0008a1a0(void)

{
  int unaff_EBX;
  
  if (*(int *)(unaff_EBX + 0x28) != 0) {
    FUN_0005bb20(*(int *)(unaff_EBX + 0x28),unaff_EBX);
    *(undefined4 *)(unaff_EBX + 0x28) = 0;
  }
  if ((*(int *)(unaff_EBX + 0x24) != 0) && (*(int *)(unaff_EBX + 0x38) != 0)) {
    FUN_000de700();
    if (*(int *)(unaff_EBX + 0x24) != 0) {
      FUN_0008f6a0(0);
    }
  }
  if (*(int *)(unaff_EBX + 0x1c) != 0) {
    FUN_000de700();
    *(undefined4 *)(unaff_EBX + 0x1c) = 0;
  }
  FUN_0008a560(0);
  FUN_0008a720(unaff_EBX,0);
  if (*(int *)(unaff_EBX + 0x30) != 0) {
    FUN_000ba0d0();
  }
  if (*(undefined4 **)(unaff_EBX + 0x2c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(unaff_EBX + 0x2c))(1);
    *(undefined4 *)(unaff_EBX + 0x2c) = 0;
  }
  if (*(int *)(unaff_EBX + 0x68) != 0) {
    FUN_0008f6a0(0);
  }
  FUN_0008f720();
  if (*(int *)(unaff_EBX + 0x68) != 0) {
    FUN_0008f6e0();
  }
  if (*(int *)(unaff_EBX + 0x60) != 0) {
    FUN_0008f6e0();
  }
  if (7 < *(uint *)(unaff_EBX + 0x54)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00237ec0(*(undefined4 *)(unaff_EBX + 0x40));
  }
  *(undefined4 *)(unaff_EBX + 0x54) = 7;
  *(undefined4 *)(unaff_EBX + 0x50) = 0;
  *(undefined2 *)(unaff_EBX + 0x40) = 0;
  if (*(int *)(unaff_EBX + 0x24) != 0) {
    FUN_0008f6e0();
  }
  if (*(int *)(unaff_EBX + 0x18) != 0) {
    FUN_0008f6e0();
  }
  if (*(int *)(unaff_EBX + 0x10) != 0) {
    FUN_0008f6e0();
    return;
  }
  return;
}
