/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: E230E05C01126173BDE10102A146578D9081A606E58A962284B7A1D35FF79844
 * Entry: 0x00089470, Ghidra index: 1639, label: FUN_00089470
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern undefined1 FUN_00074680(int param_1);
extern int FUN_00089830(void);

extern uint32_t DAT_004a88f4;
extern uint32_t _DAT_004a88f0;
extern uint32_t switchD_000895d9_default[];
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00089470(float param_1,float param_2)

{
  int in_EAX;
  int iVar1;
  undefined4 uVar2;
  
  if ((DAT_004a88f4 & 1) == 0) {
    DAT_004a88f4 = DAT_004a88f4 | 1;
    _DAT_004a88f0 = 0x43960000;
  }
  if ((5.0 < param_1) && (param_2 < 5.0 != (param_2 == 5.0))) {
    FUN_00074680(*(undefined4 *)(*(int *)(in_EAX + 4) + 0xc04));
    return;
  }
  if ((4.0 < param_1) && (param_2 < 4.0 != (param_2 == 4.0))) goto LAB_0008971e;
  if ((3.0 < param_1) && (param_2 < 3.0 != (param_2 == 3.0))) {
    FUN_00074680(*(undefined4 *)(*(int *)(in_EAX + 4) + 0xc04));
    return;
  }
  if ((2.0 < param_1) && (param_2 < 2.0 != (param_2 == 2.0))) {
    FUN_00074680(*(undefined4 *)(*(int *)(in_EAX + 4) + 0xc04));
    return;
  }
  if ((1.0 < param_1) && (param_2 < 1.0 != (param_2 == 1.0))) goto LAB_0008971e;
  iVar1 = FUN_00089830();
  iVar1 = *(int *)(in_EAX + 0x18) - iVar1;
  if (*(int *)(in_EAX + 0x1c) <= iVar1) goto switchD_000895d9_default;
  *(int *)(in_EAX + 0x1c) = iVar1;
  switch(iVar1) {
  case 1:
    goto LAB_0008962e;
  case 2:
    uVar2 = *(undefined4 *)(*(int *)(in_EAX + 4) + 0xc04);
    break;
  case 3:
    uVar2 = *(undefined4 *)(*(int *)(in_EAX + 4) + 0xc04);
    break;
  case 4:
LAB_0008962e:
    uVar2 = *(undefined4 *)(*(int *)(in_EAX + 4) + 0xc04);
    break;
  case 5:
    uVar2 = *(undefined4 *)(*(int *)(in_EAX + 4) + 0xc04);
    break;
  default:
    goto switchD_000895d9_default;
  }
  FUN_00074680(uVar2);
switchD_000895d9_default:
  if ((param_1 <= 300.0) || (param_2 < 300.0 == (param_2 == 300.0))) {
    if ((60.0 < param_1) && (param_2 < 60.0 != (param_2 == 60.0))) {
      FUN_00074680(*(undefined4 *)(*(int *)(in_EAX + 4) + 0xc04));
      return;
    }
    if ((30.0 < param_1) && (param_2 < 30.0 != (param_2 == 30.0))) {
      FUN_00074680(*(undefined4 *)(*(int *)(in_EAX + 4) + 0xc04));
      return;
    }
    if (param_1 <= 10.0) {
      return;
    }
    if (param_2 < 10.0 == (param_2 == 10.0)) {
      return;
    }
  }
LAB_0008971e:
  FUN_00074680(*(undefined4 *)(*(int *)(in_EAX + 4) + 0xc04));
  return;
}
