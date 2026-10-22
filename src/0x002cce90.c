/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F3BC7C2A304C15B5CFEE6FD403FBFC949072DA9E415B1CCF5CB70EEAA1FFCA8D
 * Entry: 0x002cce90, Ghidra index: 10158, label: FUN_002cce90
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469820;
extern uint32_t PTR_FUN_0038e57c;
undefined4 * FUN_002cce90(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 in_EAX;
  int iVar3;
  int in_ECX;
  undefined4 *in_EDX;
  uint uVar4;
  bool bVar5;
  undefined4 local_8 [2];
  
  FUN_002b2f40(0,in_ECX,in_EAX);
  iVar3 = DAT_00469820;
  bVar5 = DAT_00469820 == 0;
  *in_EDX = &PTR_FUN_0038e57c;
  if (bVar5) {
    iVar3 = FUN_002ea01d(8);
    if (iVar3 == 0) {
      iVar3 = 0;
      DAT_00469820 = iVar3;
    }
    else {
      iVar3 = FUN_002cce10();
      DAT_00469820 = iVar3;
    }
  }
  in_EDX[1] = 3;
  fVar1 = *(float *)(in_ECX + 0x40);
  fVar2 = *param_2;
  in_EDX[0x1f] = iVar3;
  in_EDX[0x22] = fVar1 + fVar2;
  FUN_002b3650(in_EDX,*(undefined4 *)(param_1 + 0x14));
  local_8[0] = *(undefined4 *)(in_EDX[0x24] + 0xc);
  iVar3 = *(int *)(in_EDX[0x24] + 0xc);
  uVar4 = (uint)*(ushort *)(iVar3 + 0x136);
  while (uVar4 = uVar4 - 1, -1 < (int)uVar4) {
    (**(code **)(**(int **)(*(int *)(iVar3 + 0x138) + uVar4 * 4) + 4))(local_8);
  }
  return in_EDX;
}
