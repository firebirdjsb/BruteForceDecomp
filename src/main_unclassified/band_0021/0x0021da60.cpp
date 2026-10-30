/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 462C6AF569310AB8781BF923178CB3A440F6D8DEEE7F34DC647058194800A742
 * Entry: 0x0021da60, Ghidra index: 7549, label: FUN_0021da60
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_00394a98;
extern uint32_t PTR_LAB_0039af90;
void FUN_0021da60(void)

{
  int *piVar1;
  undefined4 *in_EAX;
  undefined4 *unaff_ESI;
  
  *unaff_ESI = PTR_LAB_0039af90;
  unaff_ESI[2] = 0;
  unaff_ESI[1] = 0xffffffff;
  unaff_ESI[2] = *in_EAX;
  unaff_ESI[4] = 0;
  *(byte *)(unaff_ESI + 3) = *(byte *)(unaff_ESI + 3) | 1;
  unaff_ESI[5] = 0;
  *unaff_ESI = PTR_FUN_00394a98;
  unaff_ESI[7] = 0;
  unaff_ESI[1] = 0xf;
  piVar1 = (int *)unaff_ESI[7];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    unaff_ESI[7] = 0;
  }
  return;
}
