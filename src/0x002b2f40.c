/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: F1219CAED53B1093A148B67EC02D3715917FD64A960CA6453E3C3F0EBF1A0B51
 * Entry: 0x002b2f40, Ghidra index: 9753, label: FUN_002b2f40
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t PTR_FUN_0038e5b4;
void FUN_002b2f40(undefined4 param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *in_EAX;
  int iVar2;
  undefined4 *unaff_EDI;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_002b3d90(param_2);
  *unaff_EDI = &PTR_FUN_0038e5b4;
  if (in_EAX == (undefined4 *)0x0) {
    in_EAX = &local_10;
    local_4 = 0;
    local_8 = 0;
    local_c = 0;
    local_10 = 0;
  }
  unaff_EDI[7] = 0;
  unaff_EDI[8] = 0;
  unaff_EDI[9] = 0;
  unaff_EDI[0x1f] = param_1;
  unaff_EDI[0x1e] = 0;
  unaff_EDI[0x21] = 0;
  unaff_EDI[0x1c] = 0;
  unaff_EDI[10] = 0;
  unaff_EDI[0xd] = 0;
  unaff_EDI[0xc] = 0;
  unaff_EDI[0xb] = 0;
  unaff_EDI[0xf] = 0;
  unaff_EDI[6] = 0;
  unaff_EDI[0x23] = 0xffffffff;
  iVar2 = FUN_002ea01d(0x1d8);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_002bb700(unaff_EDI,in_EAX,param_3,*(undefined4 *)(param_2 + 4),
                         *(undefined4 *)(param_2 + 8));
  }
  unaff_EDI[0x24] = iVar2;
  unaff_EDI[0x25] = iVar2;
  unaff_EDI[0x26] = iVar2;
  *(char *)(unaff_EDI + 0x1c) = (*(int *)(param_2 + 4) != 0) * '\b' + '\b';
  unaff_EDI[0x20] = *(undefined4 *)(param_2 + 0xc);
  piVar1 = (int *)(*(int *)(*(int *)(iVar2 + 0xc) + 0xc) + 0x14);
  *piVar1 = *piVar1 + 1;
  unaff_EDI[0x27] = *(undefined4 *)(param_2 + 0x48);
  return;
}
