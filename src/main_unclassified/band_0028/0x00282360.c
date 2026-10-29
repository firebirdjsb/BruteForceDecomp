/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 6EBB1D7DD1A35F376BBDFED68F3B0DE5900F8EEA657BC4540665C312F5994531
 * Entry: 0x00282360, Ghidra index: 9059, label: FUN_00282360
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t *DAT_00443308;
extern uint32_t DAT_004698bc;
/* Original 0x002824B1..0x002824C9 uses the first incoming guest
 * DWORD as an object address: [object+0x2C] is an integer count and
 * [object+0x30 + 4*count] stores a raw DWORD from the third argument.
 * Original 0x002823E0..0x002825B2 also reads/writes object+0x18,
 * object+0x1C, and object+0x24. This scope only restores those
 * concrete guest memory references; implicit register, stack-word,
 * virtual-method and guest-to-host address contracts are unverified. */
undefined4 FUN_00282360(undefined4 param_1,int *param_2)

{
  int iVar1;
  int *unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  int *piStack_1c;
  uint *puStack_18;
  uint local_8;
  undefined4 *local_4;
  
  puStack_18 = &local_8;
  piStack_1c = param_2;
  local_4 = (undefined4 *)0x0;
  local_8 = 0;
  (**(code **)(*param_2 + 0x10))();
  /* Original 0x00282388..0x0028238E:
   * LEA EDX,[ESP+0x1C]; PUSH EDX; PUSH EAX; CALL [ECX+0x20].
   * With SUB ESP,0x0C and saved ESI/EDI, [ESP+0x1C] is exactly
   * the incoming second DWORD argument, whose earlier value
   * was independently retained at 0x0028236F/0x0028237B.
   * This resolves only the draft's undefined guest-stack symbol.
   * TODO/ABI_UNVERIFIED: 32-bit guest stack-word address translation
   * and the virtual callee's host calling/register contracts. */
  (**(code **)(*unaff_ESI + 0x20))(unaff_ESI,&param_2);
  if (local_8 < 0xedbd6b00) {
    if (local_8 == 0xedbd6aff) {
      if (*(int *)(param_1 + 0x2c) < 4) {
        iVar1 = *(int *)(param_1 + 0x2c) * 4;
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        *(undefined4 *)(param_1 + iVar1 + 0x30) = *local_4;
      }
      else {
        unaff_EDI = 0x80004005;
      }
    }
    else if (local_8 < 0x1c82a17c) {
      if (local_8 == 0x1c82a17b) {
        FUN_0015ed00(unaff_retaddr,param_1);
        if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x1c) + 0x58))(*(int **)(param_1 + 0x1c),0x28,0,&piStack_1c);
        }
      }
      else if (local_8 == 0x78bf0c1) {
        FUN_0015ed00(unaff_retaddr,param_1);
        if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x1c) + 0x58))(*(int **)(param_1 + 0x1c),0x28,1,&piStack_1c);
        }
      }
      else if ((local_8 == 0x9ffe67f) &&
              (FUN_0015ed00(unaff_retaddr,param_1), *(int **)(param_1 + 0x1c) != (int *)0x0)) {
        (**(code **)(**(int **)(param_1 + 0x1c) + 0x54))(*(int **)(param_1 + 0x1c),0x28,&piStack_1c);
      }
    }
    else if (local_8 == 0xe02ff698) {
      FUN_0015ed00(unaff_retaddr,param_1);
    }
  }
  else if (local_8 == 0xf632635b) {
    if (((byte)DAT_004698bc & 1) == 0) {
      *(undefined4 *)(param_1 + 0x24) = FUN_00238370();
    }
    else {
      *(undefined4 *)(param_1 + 0x24) = *local_4;
    }
    if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x1c) + 8))(*(int **)(param_1 + 0x1c));
      *(int **)(param_1 + 0x1c) = (int *)0x0;
    }
    iVar1 = (**(code **)(*DAT_00443308 + 0x24))(DAT_00443308,0x20,0x24,0,0x1c);
    if (iVar1 < 0) {
      if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x1c) + 8))(*(int **)(param_1 + 0x1c));
        *(int **)(param_1 + 0x1c) = (int *)0x0;
      }
    }
    else {
      (**(code **)(*DAT_00443308 + 0x2c))(DAT_00443308,*(undefined4 *)(param_1 + 0x18),0x20,*(int **)(param_1 + 0x1c));
    }
  }
  else if (local_8 == 0xf85114ec) {
    if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x1c) + 0x3c))(*(int **)(param_1 + 0x1c),*(undefined1 *)local_4);
    }
  }
  else if (local_8 == 0xffd9396e) {
    FUN_0015ed00(unaff_retaddr,param_1);
  }
  if (puStack_18 != (uint *)0x0) {
    (**(code **)(*puStack_18 + 8))(puStack_18);
  }
  return unaff_EDI;
}
