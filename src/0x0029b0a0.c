/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 29E372081A4F5AC1FD59AF07551BB6A4477B7D62C71FC6E4DCA7304DB0992E61
 * Entry: 0x0029b0a0, Ghidra index: 9422, label: FUN_0029b0a0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
#include "bf_xbe_data_label_00404598.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_00469888;
extern char s___100s__last_token_read_____50s__00404560[];
void FUN_0029b0a0(undefined4 *param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  char *pcVar4;
  undefined8 local_58;
  undefined1 local_50 [80];
  
  if ((*(int *)(DAT_00469888 + 0x34) != 0) &&
     (*(int *)(in_ECX + 0x1c) != *(int *)(*(int *)(in_ECX + 8) + 0x20))) {
    FUN_00299580(0x3c,*(int *)(in_ECX + 0x1c),0);
    *(undefined4 *)(*(int *)(in_ECX + 8) + 0x20) = *(undefined4 *)(in_ECX + 0x1c);
  }
  switch(*(undefined4 *)(in_ECX + 4)) {
  case 0x25:
  case 0x114:
    FUN_0029b4f0();
    return;
  default:
    FUN_0029d580(0);
    pcVar4 = (char *)(*(int *)(DAT_00469888 + 0x20) + *(int *)(DAT_00469888 + 0x1c));
    FUN_002953d0();
    if (*pcVar4 == '\0') {
      pcVar4 = BF_XBE_DATA_00404598;
    }
    FUN_00295370(s___100s__last_token_read_____50s__00404560,s_<expression>_expected_00403f38,pcVar4
                 ,*(undefined4 *)(in_ECX + 0x1c),local_50);
    return;
  case 0x28:
    uVar3 = FUN_00296110();
    *(undefined4 *)(in_ECX + 4) = uVar3;
    FUN_0029aeb0();
    if (*(int *)(in_ECX + 4) != 0x29) {
      FUN_0029a130();
    }
    break;
  case 0x7b:
    FUN_0029bf00();
    *param_1 = 4;
    param_1[1] = 0;
    return;
  case 0x109:
    uVar3 = FUN_00296110();
    *(undefined4 *)(in_ECX + 4) = uVar3;
    FUN_0029ab40();
    *param_1 = 4;
    param_1[1] = 0;
    return;
  case 0x10c:
    FUN_00299580(4,0,1);
    uVar3 = FUN_00296110();
    *(undefined4 *)(in_ECX + 4) = uVar3;
    *param_1 = 4;
    param_1[1] = 0;
    return;
  case 0x11b:
    local_58 = *(double *)(in_ECX + 0x10);
    iVar2 = FUN_00296110();
    *(int *)(in_ECX + 4) = iVar2;
    iVar1 = *(int *)(in_EAX + 0x50);
    if (((0 < iVar1) && (*(int *)(in_EAX + -4 + iVar1 * 4) == 1)) && (iVar2 != 0x5e)) {
      local_58 = -local_58;
      *(int *)(in_EAX + 0x50) = iVar1 + -1;
    }
    FUN_00299780((undefined4)local_58,local_58._4_4_);
    *param_1 = 4;
    param_1[1] = 0;
    return;
  case 0x11c:
    FUN_002996c0();
    uVar3 = FUN_00296110();
    *(undefined4 *)(in_ECX + 4) = uVar3;
    *param_1 = 4;
    param_1[1] = 0;
    return;
  }
  uVar3 = FUN_00296110();
  *(undefined4 *)(in_ECX + 4) = uVar3;
  return;
}
