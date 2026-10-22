/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 89DBE58F616B9BD44E3AE02561661383020AFE0A039391E79D8B9905C5928319
 * Entry: 0x000828d0, Ghidra index: 1532, label: FUN_000828d0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
undefined4 FUN_000828d0(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x18))();
  if (iVar1 != 0) {
    iVar2 = (**(code **)(*in_ECX + 0x210))();
    if (iVar2 != 0) {
      FUN_00082980(in_ECX,iVar2,iVar1);
      FUN_00083a50(iVar2,iVar1);
      FUN_00083c20(in_ECX,iVar2,iVar1);
      return 1;
    }
  }
  return 0;
}
