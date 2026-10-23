/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 90B167FED95FC6909B87CB4BDF240030EF3B5B4053293E27DA60BE4F09857EEB
 * Entry: 0x002dafb0, Ghidra index: 10275, label: FUN_002dafb0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
void FUN_002dafb0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  int in_EDX;
  int unaff_ESI;
  
  iVar1 = *(int *)(in_EAX + 0x34);
  iVar2 = *(int *)(iVar1 + unaff_ESI * 4);
  iVar3 = *(int *)(iVar1 + in_EDX * 4);
  *(int *)(iVar1 + unaff_ESI * 4) = iVar3;
  *(int *)(*(int *)(in_EAX + 0x34) + in_EDX * 4) = iVar2;
  *(int *)(*(int *)(in_EAX + 0x38) + iVar3 * 4) = unaff_ESI;
  *(int *)(*(int *)(in_EAX + 0x38) + iVar2 * 4) = in_EDX;
  return;
}
