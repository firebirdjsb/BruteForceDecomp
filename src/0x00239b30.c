/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 1644CCE5280F5CE96F47F8457B67AA0BDB8C44281E9AB747EF45CDDF80D784CA
 * Entry: 0x00239b30, Ghidra index: 7891, label: FUN_00239b30
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
char FUN_00239b30(void)

{
  int *in_EAX;
  int iVar1;
  int *unaff_EBX;
  
  iVar1 = (**(code **)*in_EAX)();
  if (-1 < iVar1) {
    iVar1 = (**(code **)(*in_EAX + 0xc))(in_EAX);
    if (unaff_EBX != (int *)0x0) {
      (**(code **)(*unaff_EBX + 8))(unaff_EBX);
    }
    return '\x01' - (iVar1 != 0);
  }
  if (in_EAX != (int *)0x0) {
    (**(code **)(*in_EAX + 8))(in_EAX);
  }
  return '\x01';
}
