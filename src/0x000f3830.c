/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 46096948ED973239C916E95CC8F795BA8ECE1D7D1E0079E0DD6EA41A0A0D5294
 * Entry: 0x000f3830, Ghidra index: 3043, label: FUN_000f3830
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0046995c;
extern uint32_t DAT_00469b58;
uint FUN_000f3830(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar3 = *(int *)(DAT_0046995c + 0x1c);
  iVar2 = FUN_000f2330();
  if (iVar3 == 0) goto LAB_000f3945;
  if (*(int *)(DAT_0046995c + 0x1c) == 0) {
LAB_000f38e7:
    if (iVar2 == 1) {
      piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
      uStack_c = 0xf974b529;
      iVar3 = *piVar4;
      uStack_4 = 0xe76f4da1;
      uStack_8 = 0xcc05846;
      uVar5 = FUN_001e97c0();
      uVar5 = FUN_001e97c0(uVar5);
      uVar6 = (**(code **)(iVar3 + 0x38))(&uStack_c,uVar5);
      return uVar6 & 0xffffff00;
    }
  }
  else {
    cVar1 = FUN_002e5880();
    if (cVar1 == '\0') {
      iVar3 = FUN_002e5bf0(0);
      if (*(int *)(iVar3 + 0x2c) != 0) goto LAB_000f38e7;
    }
    if (iVar2 == 1) {
      piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
      uStack_4 = 0xe3cedbb7;
      iVar3 = *piVar4;
      uStack_c = 0xe76f4da1;
      uStack_8 = 0xcc05846;
      uVar5 = FUN_001e97c0();
      uVar5 = FUN_001e97c0(uVar5);
      uVar6 = (**(code **)(iVar3 + 0x38))(&uStack_4,uVar5);
      return uVar6 & 0xffffff00;
    }
  }
LAB_000f3945:
  uVar6 = FUN_001021a0();
  return uVar6;
}
