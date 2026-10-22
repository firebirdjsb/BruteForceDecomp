/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BEB1852CB31533893BD3D39C06B0A3755AC376B4D37A83228760ACBBB145723D
 * Entry: 0x0014bfa0, Ghidra index: 4331, label: FUN_0014bfa0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_0014bfa0(void)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  uint unaff_ESI;
  
  if (in_EAX == 0) {
    return *(undefined4 *)(in_ECX + 0xbc);
  }
  if (in_EAX < 10) {
    iVar1 = *(int *)(in_ECX + 0xc + in_EAX * 0x10);
    if ((iVar1 != 0) && (unaff_ESI < (uint)(*(int *)(in_ECX + in_EAX * 0x10 + 0x10) - iVar1 >> 2)))
    {
      return *(undefined4 *)(iVar1 + unaff_ESI * 4);
    }
  }
  return 0;
}
