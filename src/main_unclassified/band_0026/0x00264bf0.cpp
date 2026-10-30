/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D59DB0AFA88E62E0F8E1DC6223A72D6303EB58A9254A1155845686C9FF6D601
 * Entry: 0x00264bf0, Ghidra index: 8712, label: FUN_00264bf0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
int FUN_00264bf0(void)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  undefined4 *unaff_EBX;
  undefined4 *unaff_EDI;
  undefined4 uVar2;
  undefined1 local_4 [4];
  
  iVar1 = -0x7fffbffb;
  if (in_ECX == 0) {
    (**(code **)(**(int **)(in_EAX + 0x48) + 0x1c))(*(int **)(in_EAX + 0x48),*unaff_EDI,local_4);
    uVar2 = *unaff_EDI;
    (**(code **)(**(int **)(in_EAX + 8) + 0x1c))(*(int **)(in_EAX + 8),uVar2,0);
    *(undefined4 *)(in_EAX + 0x34) = *unaff_EDI;
    *(undefined1 *)(in_EAX + 5) = 1;
    iVar1 = (**(code **)(**(int **)(in_EAX + 8) + 0x10))(*(int **)(in_EAX + 8),uVar2,unaff_EDI[1],0)
    ;
    if (-1 < iVar1) {
      *unaff_EBX = *unaff_EDI;
      unaff_EBX[1] = 0xffffffff;
    }
  }
  return iVar1;
}
