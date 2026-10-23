/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: A3038EBE6012614B144665BCF27F8DDFFD8F6C7BC0750E9DC6F90603541126A0
 * Entry: 0x00374a49, Ghidra index: 13434, label: FUN_00374a49
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00100248;
extern uint32_t DAT_00400750;
extern uint32_t DAT_00400904;
extern uint32_t DAT_00400908;
extern uint32_t DAT_004009a0;
extern uint32_t PTR_DAT_00400754;
undefined4
FUN_00374a49(int *param_1,uint param_2,int param_3,undefined4 param_4,uint param_5,uint param_6,
            uint param_7)

{
  int iVar1;
  uint in_EAX;
  uint *puVar2;
  uint uVar3;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  uint *local_8;
  
  iVar1 = *param_1;
  FUN_00374cf1(&local_24);
  local_18 = param_5 & 1;
  local_10 = in_EAX * 4 + 0x10 & 0x1ffc | 0xea0000;
  local_1c = in_EAX * 4 + 0x30 & 0x1ffc | 0xea0000;
  local_14 = (param_2 - 1) + param_3;
  puVar2 = (uint *)((in_EAX + 0x10024) * 0x10 + iVar1);
  local_8 = (uint *)((in_EAX + 0x40090) * 0x10 + iVar1);
  local_20 = in_EAX * 4 + 0x50 & 0x1ffc | 0xea0000;
  local_c = in_EAX * 0x10 + iVar1;
  do {
    FUN_003793b5();
    *(int *)(local_c + 0x100244) = local_14;
    *(undefined4 *)(&DAT_00100248 + local_c) = param_4;
    *(int *)(&DAT_00400904 + local_c) = local_14;
    *(undefined4 *)(&DAT_00400908 + local_c) = param_4;
    if (local_18 == 0) {
      uVar3 = param_2 | 1;
    }
    else {
      uVar3 = param_2 | 3;
    }
    *local_8 = uVar3;
    *puVar2 = uVar3;
    *(uint *)(&DAT_00400750 + iVar1) = local_10;
    *(uint *)((int)&PTR_DAT_00400754 + iVar1) = uVar3;
    *(uint *)(&DAT_00400750 + iVar1) = local_1c;
    *(int *)((int)&PTR_DAT_00400754 + iVar1) = local_14;
    *(uint *)(&DAT_00400750 + iVar1) = local_20;
    *(undefined4 *)((int)&PTR_DAT_00400754 + iVar1) = param_4;
  } while (((*puVar2 != *local_8) ||
           (*(int *)(&DAT_00100248 + local_c) != *(int *)(&DAT_00400908 + local_c))) ||
          (((*(uint *)(&DAT_00400904 + local_c) ^ *(uint *)(local_c + 0x100244)) & 0xffffc000) != 0)
          );
  if ((param_5 & 0x80000000) != 0) {
    param_2 = param_6 >> 2 | 0x80000000;
    if ((param_5 & 0x4000000) != 0) {
      param_2 = param_6 >> 2 | 0x84000000;
    }
    do {
      FUN_003793b5();
      *(uint *)(FUN_00100300 + in_EAX * 4 + iVar1) = param_2;
      *(uint *)(&LAB_00400980 + in_EAX * 4 + iVar1) = param_2;
      *(uint *)(&DAT_00400750 + iVar1) = in_EAX * 4 + 0x90 & 0x1ffc | 0xea0000;
      *(uint *)((int)&PTR_DAT_00400754 + iVar1) = param_2;
    } while (*(uint *)(FUN_00100300 + in_EAX * 4 + iVar1) !=
             *(uint *)(&LAB_00400980 + in_EAX * 4 + iVar1));
    if (param_7 != 0) {
      uVar3 = in_EAX | param_7 | 0x80000000;
      do {
        FUN_003793b5();
        *(uint *)(&LAB_00100324 + iVar1) = uVar3;
        *(uint *)(&DAT_004009a0 + iVar1) = uVar3;
      } while (*(uint *)(&LAB_00100324 + iVar1) != *(uint *)(&DAT_004009a0 + iVar1));
    }
  }
  *(undefined4 *)(iVar1 + 0x3220) = local_24;
  return 1;
}
