/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A6B60F0A4189B6E579A8B4322C9755C7FE3861DC58138C34E00B5A9D520DA718
 * Entry: 0x0028fb00, Ghidra index: 9220, label: FUN_0028fb00
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_incomplete_dynamic_bit_lengths_t_00404a38[];
extern char s_oversubscribed_dynamic_bit_lengt_00404a5c[];
int FUN_0028fb00(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = (**(code **)(unaff_EBX + 0x20))(*(undefined4 *)(unaff_EBX + 0x28),0x13,4);
  if (iVar1 == 0) {
    return -4;
  }
  iVar2 = FUN_0028f610(0x13,0x13,0,0,param_3,param_4,&local_4,iVar1);
  if (iVar2 == -3) {
    *(char **)(unaff_EBX + 0x18) = s_oversubscribed_dynamic_bit_lengt_00404a5c;
    (**(code **)(unaff_EBX + 0x24))(*(undefined4 *)(unaff_EBX + 0x28),iVar1);
    return -3;
  }
  if ((iVar2 == -5) || (*param_2 == 0)) {
    *(char **)(unaff_EBX + 0x18) = s_incomplete_dynamic_bit_lengths_t_00404a38;
    iVar2 = -3;
  }
  (**(code **)(unaff_EBX + 0x24))(*(undefined4 *)(unaff_EBX + 0x28),iVar1);
  return iVar2;
}
