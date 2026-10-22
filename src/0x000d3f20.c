/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 63CF8D026074CA6E33D6003DFD2A63B2FFA837285C0605D6AEC31857D2052920
 * Entry: 0x000d3f20, Ghidra index: 2636, label: FUN_000d3f20
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_000d3f20(void)

{
  int iVar1;
  int *in_EAX;
  int *in_ECX;
  int *unaff_ESI;
  
  iVar1 = *in_EAX;
  if (*(uint *)(*(int *)(iVar1 + 0xc) + 4) < *(uint *)(*(int *)(*unaff_ESI + 0xc) + 4)) {
    *in_EAX = *unaff_ESI;
    *unaff_ESI = iVar1;
  }
  iVar1 = *in_ECX;
  if (*(uint *)(*(int *)(iVar1 + 0xc) + 4) < *(uint *)(*(int *)(*in_EAX + 0xc) + 4)) {
    *in_ECX = *in_EAX;
    *in_EAX = iVar1;
  }
  iVar1 = *in_EAX;
  if (*(uint *)(*(int *)(iVar1 + 0xc) + 4) < *(uint *)(*(int *)(*unaff_ESI + 0xc) + 4)) {
    *in_EAX = *unaff_ESI;
    *unaff_ESI = iVar1;
  }
  return;
}
