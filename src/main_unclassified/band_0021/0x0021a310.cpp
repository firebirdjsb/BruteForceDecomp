/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5E2FB42966EDC3309DED34681AA1906C05E48821EC212A3144EE5D402CC9EB8D
 * Entry: 0x0021a310, Ghidra index: 7509, label: FUN_0021a310
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00394c58;
extern uint32_t PTR_FUN_0039af8c;
void FUN_0021a310(void)

{
  int *in_EAX;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  FUN_00155340();
  in_EAX[0x19] = 0;
  in_EAX[0x18] = 0;
  in_EAX[0x17] = 0;
  in_EAX[0x15] = 0;
  in_EAX[0x14] = 0;
  in_EAX[0x13] = 0;
  in_EAX[0x1a] = 0x3f800000;
  in_EAX[0x16] = 0x3f800000;
  in_EAX[0x12] = 0x3f800000;
  in_EAX[0x1d] = 0;
  in_EAX[0x1c] = 0;
  in_EAX[0x1b] = 0;
  *in_EAX = (int)&PTR_FUN_00394c58;
  in_EAX[0x1e] = 0;
  in_EAX[0x33] = 0;
  in_EAX[0x35] = 0;
  iVar1 = FUN_001fadb0(in_EAX + 0x3c);
  in_EAX[0x3d] = iVar1;
  in_EAX[0x3e] = 0;
  in_EAX[0x3f] = (int)&PTR_FUN_0039af8c;
  in_EAX[0x40] = 0;
  in_EAX[0x41] = 0;
  in_EAX[0x42] = 0;
  in_EAX[0x29] = 0;
  in_EAX[0x2b] = 0;
  in_EAX[0x2c] = 0;
  in_EAX[0x2a] = 0;
  piVar3 = in_EAX + 0x1f;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = 0;
    piVar3 = piVar3 + 1;
  }
  *(byte *)(in_EAX + 0x43) = *(byte *)(in_EAX + 0x43) & 0xfb | 2;
  in_EAX[0x39] = 0;
  in_EAX[0x2e] = 0x3f800000;
  in_EAX[0x2f] = 0x3f800000;
  in_EAX[0x2d] = 0;
  in_EAX[0x31] = 0x3f800000;
  in_EAX[0x30] = -0x40800000;
  in_EAX[0x38] = 0;
  in_EAX[0x37] = 0;
  in_EAX[0x36] = 0;
  *(byte *)(in_EAX + 0x43) = *(byte *)(in_EAX + 0x43) & 0xdf;
  in_EAX[0x3b] = 0;
  iVar1 = FUN_002ea01d(0x4c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x20) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x10) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x3c) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined1 *)(iVar1 + 0x48) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0x44) = 0;
  }
  in_EAX[0x3a] = iVar1;
  iVar2 = (**(code **)(*in_EAX + 4))();
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*in_EAX + 0xc))();
    *(undefined1 *)(iVar1 + 0x48) = 1;
  }
  else {
    *(undefined1 *)(iVar1 + 0x48) = 0;
  }
  *(int *)(iVar1 + 8) = iVar2;
  in_EAX[0x28] = -0x40800000;
  in_EAX[0x27] = 0;
  *(byte *)(in_EAX + 0x43) = *(byte *)(in_EAX + 0x43) & 0x26 | 0x80;
  return;
}
