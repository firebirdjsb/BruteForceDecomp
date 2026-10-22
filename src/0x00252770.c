/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 9D89DD6D990FDDE70464522AAB5A1B3F24E8AE86A0A9B73A706CCE2F850E4DA5
 * Entry: 0x00252770, Ghidra index: 8380, label: FUN_00252770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_1_1_3_00406488[];
undefined4 FUN_00252770(int param_1)

{
  char *in_EAX;
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int in_EDX;
  
  if (((in_EAX == (char *)0x0) || (*in_EAX != s_1_1_3_00406488[0])) || (param_1 != 0x38)) {
    return 0xfffffffa;
  }
  if (in_EDX == 0) {
    return 0xfffffffe;
  }
  *(undefined4 *)(in_EDX + 0x18) = 0;
  if (*(int *)(in_EDX + 0x20) == 0) {
    *(code **)(in_EDX + 0x20) = FUN_0027e7b0;
    *(undefined4 *)(in_EDX + 0x28) = 0;
  }
  if (*(int *)(in_EDX + 0x24) == 0) {
    *(undefined1 **)(in_EDX + 0x24) = &LAB_0027e7e0;
  }
  iVar1 = (**(code **)(in_EDX + 0x20))(*(undefined4 *)(in_EDX + 0x28),1,0x18);
  *(int *)(in_EDX + 0x1c) = iVar1;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(*(int *)(in_EDX + 0x1c) + 0xc) = 0;
    if (in_ECX < 0) {
      in_ECX = -in_ECX;
      *(undefined4 *)(*(int *)(in_EDX + 0x1c) + 0xc) = 1;
    }
    if ((in_ECX < 8) || (0xf < in_ECX)) {
      FUN_00252730();
      return 0xfffffffe;
    }
    *(int *)(*(int *)(in_EDX + 0x1c) + 0x10) = in_ECX;
    uVar2 = FUN_0027e860((*(int *)(*(int *)(in_EDX + 0x1c) + 0xc) != 0) - 1 & 0x27e680);
    *(undefined4 *)(*(int *)(in_EDX + 0x1c) + 0x14) = uVar2;
    if (*(int *)(*(int *)(in_EDX + 0x1c) + 0x14) != 0) {
      FUN_002526f0();
      return 0;
    }
    FUN_00252730();
  }
  return 0xfffffffc;
}
