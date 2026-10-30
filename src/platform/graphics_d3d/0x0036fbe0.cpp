/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: BECC2D4674649A4CA3CED23B293B7A2A45446A377E079EEDC3BAC01419960165
 * Entry: 0x0036fbe0, Ghidra index: 13333, label: FUN_0036fbe0
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern uint32_t DAT_0037bb28;
extern uint32_t DAT_00401760;
void FUN_0036fbe0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int in_EAX;
  undefined4 *puVar3;
  int *piVar4;
  int in_ECX;
  int *piVar5;
  int in_EDX;
  uint uVar6;
  int iVar7;
  
  puVar3 = (undefined4 *)(*(int *)(in_EAX + 4) + in_ECX);
  if (DAT_0037bb28 != 0) {
    puVar1 = (uint *)(DAT_0037bb28 + 0x14);
    puVar3 = (undefined4 *)(*(int *)(DAT_0037bb28 + 4) + *(int *)(DAT_0037bb28 + 0x10));
    uVar6 = *(int *)(DAT_0037bb28 + 0x10) + 0x90;
    *(uint *)(DAT_0037bb28 + 0x10) = uVar6;
    if (*puVar1 < uVar6) {
      return;
    }
    *puVar3 = 0x88;
    puVar3[1] = in_ECX;
    puVar3 = puVar3 + 2;
  }
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = (uintptr_t)0x00401720U;
    puVar3[0x11] = DAT_00401760;
    piVar5 = puVar3 + 0x12;
    piVar4 = (int *)(param_1 + 0x1b);
    iVar7 = 2;
    do {
      iVar2 = piVar4[-2];
      piVar5[-0x11] =
           piVar4[-1] + *(int *)(*(int *)(in_EDX + iVar2 * 0xc) + 4) +
           *(int *)(in_EDX + 8 + iVar2 * 0xc);
      *piVar5 = *(int *)(in_EDX + iVar2 * 0xc + 4) * 0x100 + *piVar4;
      iVar2 = piVar4[2];
      piVar5[-0x10] =
           piVar4[3] + *(int *)(*(int *)(in_EDX + iVar2 * 0xc) + 4) +
           *(int *)(in_EDX + 8 + iVar2 * 0xc);
      piVar5[1] = *(int *)(in_EDX + iVar2 * 0xc + 4) * 0x100 + piVar4[4];
      iVar2 = piVar4[6];
      piVar5[-0xf] = piVar4[7] + *(int *)(*(int *)(in_EDX + iVar2 * 0xc) + 4) +
                     *(int *)(in_EDX + 8 + iVar2 * 0xc);
      piVar5[2] = *(int *)(in_EDX + iVar2 * 0xc + 4) * 0x100 + piVar4[8];
      iVar2 = piVar4[10];
      piVar5[-0xe] = piVar4[0xb] + *(int *)(*(int *)(in_EDX + iVar2 * 0xc) + 4) +
                     *(int *)(in_EDX + 8 + iVar2 * 0xc);
      piVar5[3] = *(int *)(in_EDX + iVar2 * 0xc + 4) * 0x100 + piVar4[0xc];
      iVar2 = piVar4[0xe];
      piVar5[-0xd] = piVar4[0xf] + *(int *)(*(int *)(in_EDX + iVar2 * 0xc) + 4) +
                     *(int *)(in_EDX + 8 + iVar2 * 0xc);
      piVar5[4] = *(int *)(in_EDX + iVar2 * 0xc + 4) * 0x100 + piVar4[0x10];
      iVar2 = piVar4[0x12];
      piVar5[-0xc] = piVar4[0x13] + *(int *)(*(int *)(in_EDX + iVar2 * 0xc) + 4) +
                     *(int *)(in_EDX + 8 + iVar2 * 0xc);
      piVar5[5] = *(int *)(in_EDX + iVar2 * 0xc + 4) * 0x100 + piVar4[0x14];
      iVar2 = piVar4[0x16];
      piVar5[-0xb] = piVar4[0x17] + *(int *)(*(int *)(in_EDX + iVar2 * 0xc) + 4) +
                     *(int *)(in_EDX + 8 + iVar2 * 0xc);
      piVar5[6] = *(int *)(in_EDX + iVar2 * 0xc + 4) * 0x100 + piVar4[0x18];
      iVar2 = piVar4[0x1a];
      piVar5[-10] = piVar4[0x1b] + *(int *)(*(int *)(in_EDX + iVar2 * 0xc) + 4) +
                    *(int *)(in_EDX + 8 + iVar2 * 0xc);
      piVar5[7] = *(int *)(in_EDX + iVar2 * 0xc + 4) * 0x100 + piVar4[0x1c];
      piVar5 = piVar5 + 8;
      piVar4 = piVar4 + 0x20;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}
