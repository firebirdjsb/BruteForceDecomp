/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A78ADE8524ADB90B4DA85DE0888679398EE15B4F5D45BD7A6A53C4EFF7ECC7CA
 * Entry: 0x00047ac0, Ghidra index: 564, label: FUN_00047ac0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
extern uint32_t FUN_000120f0(int32_t in_EAX);

void FUN_00047ac0(undefined4 param_1)

{
  int *piVar1;
  char *unaff_EBX;
  
  piVar1 = (int *)FUN_000120f0();
  if (piVar1 != (int *)0x0) {
    (*(code *)**(undefined4 **)(unaff_EBX + 4))(param_1);
    if (((unaff_EBX[0xc] & 1U) != 0) && (((byte)unaff_EBX[0xc] >> 1 & 1) != 0)) {
      unaff_EBX[0x10] = -0x33;
      unaff_EBX[0x11] = -0x34;
      unaff_EBX[0x12] = 'L';
      unaff_EBX[0x13] = '>';
      unaff_EBX[8] = -0x33;
      unaff_EBX[9] = -0x34;
      unaff_EBX[10] = 'L';
      unaff_EBX[0xb] = '>';
      unaff_EBX[0xc] = unaff_EBX[0xc] & 0xf9U | 1;
      if (*unaff_EBX == '\x01') {
        if (piVar1[0x7e] != 8) {
          (**(code **)(*piVar1 + 0x15c))(0x13,0);
          return;
        }
      }
      else if (piVar1[0x7e] == 8) {
        (**(code **)(*piVar1 + 0x15c))(0x13,0);
      }
    }
  }
  return;
}
