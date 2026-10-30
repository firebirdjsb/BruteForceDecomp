/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DA1BE666F0AAC800A85E13AAD214E19722A82DD41ACBA8614084A8149713F410
 * Entry: 0x000fd430, Ghidra index: 3164, label: FUN_000fd430
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000fd430(void)

{
  int *piVar1;
  int *in_EAX;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar1 = (int *)*in_EAX;
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  iVar2 = FUN_002ea01d(0x1e0);
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_0010d240();
  }
  piVar3[9] = *piVar1;
  (**(code **)(*piVar3 + 0x2c))();
  iVar2 = piVar1[2];
  piVar3[3] = piVar1[1];
  piVar3[4] = iVar2;
  (**(code **)(*piVar3 + 0x1c))();
  piVar3[5] = piVar1[3];
  (**(code **)(*piVar3 + 0x1c))();
  piVar3[6] = piVar1[4];
  (**(code **)(*piVar3 + 0x1c))();
  if (piVar1[5] != 0) {
    FUN_000fd340(piVar1[5]);
  }
  piVar3[0x6f] = piVar1[0xd];
  FUN_0010dd50(piVar1[10]);
  FUN_0010dc60();
  piVar3[0x38] = piVar1[0xb];
  (**(code **)(piVar3[0x32] + 0x1c))();
  piVar3[0x1e] = piVar1[0xc];
  iVar2 = piVar1[0x12];
  for (iVar4 = piVar1[0x11]; iVar4 != iVar2; iVar4 = iVar4 + 0xc) {
    FUN_0010e2f0(iVar4,*(undefined4 *)(iVar4 + 4));
  }
  FUN_0010dcb0();
  iVar2 = FUN_000ff9e0(piVar3);
  if (iVar2 == -1) {
    return 0;
  }
  FUN_000fbd40();
  return 1;
}
