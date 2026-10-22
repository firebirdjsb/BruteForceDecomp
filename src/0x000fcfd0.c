/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: DF7013DF948C3672E13F3FD5F892D3917557138E5E9C5A0C187DAE7D9E690D4D
 * Entry: 0x000fcfd0, Ghidra index: 3159, label: FUN_000fcfd0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046d064;
int * FUN_000fcfd0(void)

{
  int *in_EAX;
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_002ea01d(0xf4);
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_00109f80(iVar1);
  }
  piVar2[9] = *in_EAX;
  (**(code **)(*piVar2 + 0x2c))();
  iVar1 = in_EAX[2];
  piVar2[3] = in_EAX[1];
  piVar2[4] = iVar1;
  (**(code **)(*piVar2 + 0x1c))();
  piVar2[5] = in_EAX[3];
  (**(code **)(*piVar2 + 0x1c))();
  piVar2[6] = in_EAX[4];
  (**(code **)(*piVar2 + 0x1c))();
  if (in_EAX[5] != 0) {
    FUN_000fbfb0(in_EAX[5]);
  }
  FUN_001e97c0();
  FUN_0010a7d0();
  if (piVar2[9] == DAT_0046d064) {
    piVar2[9] = in_EAX[10];
    (**(code **)(*piVar2 + 0x2c))();
  }
  return piVar2;
}
