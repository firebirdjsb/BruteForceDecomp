/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 72C142DEFCA1CF60DB07514EBED27352E0E3EE5A6597C6A0E2987F67BCF04FA7
 * Entry: 0x0029b770, Ghidra index: 9427, label: FUN_0029b770
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern char s_code_size_overflow_004040f0[];
int FUN_0029b770(char param_1)

{
  int iVar1;
  int *piVar2;
  int in_EAX;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_4;
  
  iVar1 = *(int *)(in_EAX + 4);
  piVar2 = *(int **)(in_EAX + 8);
  if (iVar1 == 0x28) {
    uVar4 = *(undefined4 *)(in_EAX + 0x1c);
    uVar3 = FUN_00296110();
    *(undefined4 *)(in_EAX + 4) = uVar3;
    FUN_0029b8f0();
    FUN_0029a360(uVar4);
    if (0 < local_4) {
      *(undefined1 *)(*(int *)(**(int **)(in_EAX + 8) + 0x10) + -1 + local_4) = 1;
      FUN_00299360();
    }
  }
  else if (iVar1 == 0x7b) {
    FUN_0029bf00();
  }
  else if (iVar1 == 0x11c) {
    uVar4 = FUN_00299650();
    FUN_00299580(0xb,uVar4,1);
    uVar4 = FUN_00296110();
    *(undefined4 *)(in_EAX + 4) = uVar4;
  }
  else {
    FUN_00295910();
  }
  uVar4 = FUN_00294b10(1,s_code_size_overflow_004040f0);
  *(undefined4 *)(*piVar2 + 0x10) = uVar4;
  *(undefined1 *)(*(int *)(*piVar2 + 0x10) + piVar2[2]) = 2;
  piVar2[2] = piVar2[2] + 1;
  uVar4 = FUN_00294b10(1,s_code_size_overflow_004040f0);
  *(undefined4 *)(*piVar2 + 0x10) = uVar4;
  *(undefined1 *)(*(int *)(*piVar2 + 0x10) + piVar2[2]) = 0;
  piVar2[2] = piVar2[2] + 1;
  uVar4 = FUN_00294b10(1,s_code_size_overflow_004040f0);
  *(undefined4 *)(*piVar2 + 0x10) = uVar4;
  *(char *)(*(int *)(*piVar2 + 0x10) + piVar2[2]) = param_1 + '\x01';
  iVar1 = piVar2[2];
  piVar2[2] = iVar1 + 1;
  return iVar1;
}
