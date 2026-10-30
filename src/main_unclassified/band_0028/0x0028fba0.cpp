/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 35322D8A1975C0437905D51DD7181969ED79A509B82B903FCB8192E415CBCAC6
 * Entry: 0x0028fba0, Ghidra index: 9221, label: FUN_0028fba0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0038cb00;
extern uint32_t DAT_0038cb80;
extern uint32_t DAT_0038cc00;
extern uint32_t DAT_0038cc78;
extern char s_empty_distance_tree_with_lengths_00404994[];
extern char s_incomplete_distance_tree_004049b8[];
extern char s_incomplete_literal_length_tree_004049f4[];
extern char s_oversubscribed_distance_tree_004049d4[];
extern char s_oversubscribed_literal_length_tr_00404a14[];
int FUN_0028fba0(uint param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = (**(code **)(unaff_EBX + 0x20))(*(undefined4 *)(unaff_EBX + 0x28),0x120,4);
  if (iVar1 == 0) {
    return -4;
  }
  iVar2 = FUN_0028f610(param_1,0x101,&DAT_0038cb00,&DAT_0038cb80,param_6,param_8,&local_4,iVar1);
  if (iVar2 == 0) {
    if (*param_4 != 0) {
      iVar2 = FUN_0028f610(param_2,0,&DAT_0038cc00,&DAT_0038cc78,param_7,param_8,&local_4,iVar1);
      if (iVar2 == 0) {
        if ((*param_5 != 0) || (param_1 < 0x102)) {
          (**(code **)(unaff_EBX + 0x24))(*(undefined4 *)(unaff_EBX + 0x28),iVar1);
          return 0;
        }
      }
      else {
        if (iVar2 == -3) {
          *(char **)(unaff_EBX + 0x18) = s_oversubscribed_distance_tree_004049d4;
          (**(code **)(unaff_EBX + 0x24))(*(undefined4 *)(unaff_EBX + 0x28),iVar1);
          return -3;
        }
        if (iVar2 == -5) {
          *(char **)(unaff_EBX + 0x18) = s_incomplete_distance_tree_004049b8;
          (**(code **)(unaff_EBX + 0x24))(*(undefined4 *)(unaff_EBX + 0x28),iVar1);
          return -3;
        }
        if (iVar2 == -4) goto LAB_0028fcc5;
      }
      *(char **)(unaff_EBX + 0x18) = s_empty_distance_tree_with_lengths_00404994;
      iVar2 = -3;
LAB_0028fcc5:
      (**(code **)(unaff_EBX + 0x24))(*(undefined4 *)(unaff_EBX + 0x28),iVar1);
      return iVar2;
    }
  }
  else {
    if (iVar2 == -3) {
      *(char **)(unaff_EBX + 0x18) = s_oversubscribed_literal_length_tr_00404a14;
      (**(code **)(unaff_EBX + 0x24))(*(undefined4 *)(unaff_EBX + 0x28),iVar1);
      return -3;
    }
    if (iVar2 == -4) goto LAB_0028fd06;
  }
  *(char **)(unaff_EBX + 0x18) = s_incomplete_literal_length_tree_004049f4;
  iVar2 = -3;
LAB_0028fd06:
  (**(code **)(unaff_EBX + 0x24))(*(undefined4 *)(unaff_EBX + 0x28),iVar1);
  return iVar2;
}
