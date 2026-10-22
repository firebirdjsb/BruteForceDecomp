/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 0A627D526DEBEFD04C72E4601BD3E7A7664761EE98F0C099BA3DE6B954EBE580
 * Entry: 0x000fcc60, Ghidra index: 3155, label: FUN_000fcc60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000fcc60(void)

{
  int *piVar1;
  int *in_EAX;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)*in_EAX;
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  iVar2 = FUN_002ea01d(0xb8);
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_00102700();
  }
  iVar2 = piVar1[2];
  piVar3[3] = piVar1[1];
  piVar3[4] = iVar2;
  (**(code **)(*piVar3 + 0x1c))();
  piVar3[5] = piVar1[3];
  (**(code **)(*piVar3 + 0x1c))();
  piVar3[6] = piVar1[4];
  (**(code **)(*piVar3 + 0x1c))();
  piVar3[9] = *piVar1;
  (**(code **)(*piVar3 + 0x2c))();
  piVar3[0x2a] = piVar1[0xc];
  iVar2 = piVar1[0xb];
  piVar3[0x2b] = piVar1[10];
  piVar3[0x2c] = iVar2;
  if ((int *)piVar1[0xd] != (int *)0x0) {
    piVar3[0x22] = *(int *)piVar1[0xd];
  }
  if (piVar1[5] != 0) {
    FUN_000fc950();
  }
  iVar2 = FUN_000ff9e0(piVar3);
  if (iVar2 != -1) {
    FUN_000fbd40();
    return 1;
  }
  return 0;
}
