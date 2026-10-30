/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: EBB5BF31C1004C9351B71E699804E860B0008C802761AAF109290C03E1AE58FD
 * Entry: 0x0025d440, Ghidra index: 8566, label: FUN_0025d440
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_0025d440(void)

{
  int in_EAX;
  int iVar1;
  int *unaff_EBX;
  uint *unaff_EDI;
  
  iVar1 = FUN_0010f680(unaff_EDI);
  if ((iVar1 != *(int *)(in_EAX + 4)) && (*(uint *)(iVar1 + 0xc) <= *unaff_EDI)) {
    *unaff_EBX = iVar1;
    return;
  }
  *unaff_EBX = *(int *)(in_EAX + 4);
  return;
}
