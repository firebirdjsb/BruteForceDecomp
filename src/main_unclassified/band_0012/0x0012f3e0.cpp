/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: B50EE9541D5C5EC83C91B2F1AC689C21AFFDA8176DE64FD51C39573872C868C5
 * Entry: 0x0012f3e0, Ghidra index: 3820, label: FUN_0012f3e0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* Existing 0x002EA01D direct/indirect guest32 allocator boundary:
 * one source size DWORD and 32-bit EAX result. Guest-memory ABI unverified. */
#include "bf_002ea01d_allocator_guest32.h"
undefined4 FUN_0012f3e0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  if ((*(byte *)(in_ECX + 0xaa) & 1) != 0) {
    iVar1 = FUN_002ea01d(0x860);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = (int *)FUN_00110d30(iVar1,1);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x9c))(param_1);
      uVar3 = (**(code **)(*in_ECX + 0x1c))(param_1,piVar2);
      return uVar3;
    }
  }
  return 0;
}
