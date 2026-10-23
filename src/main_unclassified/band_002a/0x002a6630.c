/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0E7B8FEF9A03165E576FDCECCC7BFFB0CEAB8EB685A67887B2B339279C3E5E65
 * Entry: 0x002a6630, Ghidra index: 9587, label: FUN_002a6630
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002a6630(int *param_1)

{
  int *in_EAX;
  byte bVar1;
  int *piStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *piStack_20;
  int *piStack_1c;
  
  piStack_1c = param_1;
  piStack_20 = (int *)0x2a6643;
  (**(code **)(*param_1 + 0x30))();
  piStack_20 = param_1;
  uStack_24 = 0x2a664e;
  (**(code **)(*param_1 + 0x38))();
  uStack_24 = 0;
  uStack_28 = 1;
  puStack_2c = &stack0xffffffef;
  uStack_34 = 0x2a6661;
  (**(code **)(*in_EAX + 0x14))();
  uStack_34 = 0;
  uStack_38 = 1;
  piStack_3c = (int *)&stack0xffffffec;
  (**(code **)(*in_EAX + 0x14))();
  bVar1 = 0;
  if ((byte)uStack_24 != '\0') {
    do {
      piStack_30 = (int *)0x0;
      (**(code **)(*param_1 + 0x20))(param_1,bVar1,&puStack_2c);
      if (piStack_3c != (int *)0x0) {
        (**(code **)(*piStack_3c + 8))(piStack_3c);
        piStack_3c = (int *)0x0;
      }
      (**(code **)(*param_1 + 0x24))(param_1,bVar1,&piStack_3c);
      (**(code **)(*in_EAX + 0x14))();
      FUN_002a6450();
      if (piStack_30 != (int *)0x0) {
        (**(code **)(*piStack_30 + 8))(piStack_30);
      }
      bVar1 = bVar1 + 1;
    } while (bVar1 < (byte)uStack_24);
  }
  return;
}
