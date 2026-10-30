/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 5BE798EEC8D8DC2449D2E903C3060EA443897D5F05125F3EA5A9E668C205C61F
 * Entry: 0x002138f0, Ghidra index: 7447, label: FUN_002138f0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_LAB_00394dac;
extern uint32_t PTR_LAB_0039af90;
void FUN_002138f0(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *in_EAX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = PTR_LAB_0039af90;
  unaff_ESI[2] = 0;
  unaff_ESI[1] = 0xffffffff;
  unaff_ESI[2] = *in_EAX;
  unaff_ESI[4] = 0;
  unaff_ESI[5] = 0;
  *unaff_ESI = PTR_LAB_00394dac;
  *(byte *)(unaff_ESI + 3) = *(byte *)(unaff_ESI + 3) | 1;
  *(undefined1 *)(unaff_ESI + 8) = 1;
  *(undefined1 *)((int)unaff_ESI + 0x22) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x23) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x27) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x26) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x25) = 0xff;
  *(undefined1 *)(unaff_ESI + 9) = 0xff;
  *(undefined1 *)((int)unaff_ESI + 0x21) = 0;
  piVar2 = unaff_ESI + 0x10;
  *piVar2 = 0;
  unaff_ESI[0x11] = 0;
  unaff_ESI[0x12] = 0;
  unaff_ESI[1] = 0x1e;
  piVar1 = (int *)*piVar2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *piVar2 = 0;
  }
  piVar2 = (int *)unaff_ESI[0x11];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    unaff_ESI[0x11] = 0;
  }
  piVar2 = (int *)unaff_ESI[0x12];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    unaff_ESI[0x12] = 0;
  }
  unaff_ESI[10] = 0x3e99999a;
  unaff_ESI[0xb] = 0x3e99999a;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xd] = 0;
  *(undefined1 *)(unaff_ESI + 0xf) = 0;
  unaff_ESI[0xe] = 0;
  return;
}
