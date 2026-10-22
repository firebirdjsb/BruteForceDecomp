/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 00D1629CEAB4EC9DD07BE0373A95506A907E64B0C1A9470353840296E7B9F626
 * Entry: 0x00103710, Ghidra index: 3302, label: FUN_00103710
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0039e248;
void FUN_00103710(void)

{
  int *piVar1;
  undefined4 *in_EAX;
  int iVar2;
  
  FUN_000ee640();
  in_EAX[0x1a] = 0;
  in_EAX[0x1b] = 0;
  in_EAX[0x1c] = 0;
  in_EAX[0x18] = 0;
  *(undefined1 *)(in_EAX + 0x1d) = 0;
  *in_EAX = &PTR_FUN_0039e248;
  in_EAX[0x22] = 0;
  in_EAX[0x23] = 0;
  in_EAX[0x24] = 0;
  in_EAX[0x26] = 0;
  in_EAX[0x25] = 0xffffffff;
  in_EAX[0x1e] = 0;
  *(undefined1 *)(in_EAX + 0x28) = 0;
  iVar2 = FUN_002ea01d(0x88);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_001032e0();
  }
  in_EAX[0x27] = iVar2;
  *(undefined4 *)(iVar2 + 100) = 0xff000000;
  piVar1 = (int *)in_EAX[0x27];
  piVar1[2] = (int)in_EAX;
  (**(code **)(*piVar1 + 0x30))();
  *(undefined1 *)(in_EAX + 0x2a) = 0;
  iVar2 = FUN_002ea01d(0x88);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_001032e0();
  }
  in_EAX[0x29] = iVar2;
  *(undefined4 *)(iVar2 + 100) = 0xff000000;
  piVar1 = (int *)in_EAX[0x29];
  piVar1[2] = (int)in_EAX;
  (**(code **)(*piVar1 + 0x30))();
  return;
}
