/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 89FAABA8B3D022963FC95BF5CC8BA003B8F4617726665AC6FF454AAD9664A98A
 * Entry: 0x002e46b0, Ghidra index: 10450, label: FUN_002e46b0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_0040e868;
extern uint32_t *DAT_0040e86c;
undefined4 FUN_002e46b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  wchar_t *unaff_EBX;
  
  iVar2 = *in_ECX;
  puVar1 = (undefined4 *)(**(code **)(iVar2 + 4))(param_1);
  iVar2 = (**(code **)(iVar2 + 0xc))(param_1,*puVar1);
  if (((in_ECX[param_1 * 4 + 0x12] == iVar2) &&
      ((wchar_t *)in_ECX[(param_1 + 5) * 4] != (wchar_t *)0x0)) &&
     (iVar3 = _wcscmp((wchar_t *)in_ECX[(param_1 + 5) * 4],unaff_EBX), iVar3 == 0)) {
    return 0;
  }
  if (in_ECX[(param_1 + 5) * 4] != 0) {
    (*DAT_0040e868)(in_ECX[(param_1 + 5) * 4]);
  }
  iVar3 = FUN_002eaa70(unaff_EBX);
  iVar3 = (*DAT_0040e86c)(iVar3 * 2 + 2);
  in_ECX[(param_1 + 5) * 4] = iVar3;
  if (iVar3 != 0) {
    FUN_002ebe7a(iVar3,unaff_EBX);
    in_ECX[param_1 * 4 + 0x12] = iVar2;
    in_ECX[param_1 * 4 + 0x13] = 1;
    *(undefined1 *)(in_ECX + 0x92) = 1;
    return 0;
  }
  return 0x8007000e;
}
