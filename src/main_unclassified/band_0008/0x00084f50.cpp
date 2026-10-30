/* Brute Force original Xbox - independent, unverified C11 draft.
 * Input x86 body SHA-256: 132E5713F7D77DE906CB29BE5E0BCF56DB783CD9AE9603019EFD096F8F63B147
 * Entry: 0x00084f50, Ghidra index: 1548, label: FUN_00084f50
 * STATUS: GHIDRA_C_DRAFT, ABI_UNVERIFIED, NOT_COMPILED_FOR_XBOX.
 * WARNING: Ghidra's inferred types, register pseudo-parameters, and call prototypes
 * may be inaccurate. C syntax validity never proves original runtime behavior.
 */
#include "bf_ghidra_types.h"
/* TODO: Ghidra data labels have unresolved type and storage identities.
 * These declarations only allow syntax analysis; they are NOT verified types. */
extern undefined1 FUN_002e5880(void);
extern undefined4 FUN_002e5bf0(int param_1);
extern void FUN_001ed160(void);

extern uint32_t *DAT_00469940;
extern uint32_t DAT_0046995c;
extern uint32_t DAT_00469b58;
extern uint32_t DAT_0046d064;
void FUN_00084f50(char param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int in_EAX;
  int *piVar4;
  int *piVar5;
  int iVar6;
  /* Original XBE: SUB ESP,0x18; PUSH EBX/ESI/EDI. Six local DWORDs
   * occupy [ESP+0x0c, ESP+0x24) after those pushes. The first call
   * receives [ESP+0x10] (0x85013); both later paths receive
   * [ESP+0x0c] (0x85047/0x8504d), one DWORD earlier.
   * Original stack byte RMW/writes and indirect-call ABI remain
   * unrepresented/unverified; syntax-only guest storage, not 1:1. */
  undefined4 guest_local_words[6];
  
  piVar4 = (int *)(**(code **)(**(int **)(DAT_00469b58 + 8) + 0x78))();
  piVar1 = *(int **)(DAT_00469b58 + 8);
  piVar5 = (int *)(**(code **)(*piVar1 + 0x58))();
  if ((*piVar5 != 0x17506391) && (param_1 == '\0')) {
    (**(code **)(**(int **)(in_EAX + 0xc4c) + 0x14))();
    return;
  }
  (**(code **)(*piVar1 + 0x17c))();
  (**(code **)(**(int **)(in_EAX + 0xbec) + 0x3c))();
  bVar2 = false;
  if (*(int *)(DAT_0046995c + 0x1c) != 0) {
    cVar3 = FUN_002e5880();
    if (cVar3 == '\0') {
      iVar6 = FUN_002e5bf0(0);
      iVar6 = *(int *)(iVar6 + 0x2c);
    }
    else {
      iVar6 = 0;
    }
    bVar2 = 0 < iVar6;
    FUN_001ed160();
  }
  (**(code **)(*DAT_00469940 + 0x6c))(1);
  (**(code **)(*DAT_00469940 + 8))();
  (**(code **)(*piVar4 + 0x1c))();
  (**(code **)(*piVar1 + 0x1bc))(&DAT_0046d064);
  (**(code **)(*piVar1 + 0x20))(&guest_local_words[1]);
  if (bVar2) {
    (**(code **)(*piVar1 + 0x8c))(&guest_local_words[0]);
    return;
  }
  (**(code **)(*piVar1 + 0x8c))(&guest_local_words[0]);
  return;
}
